#include "model.h"

#include "mainwindow.h"
#include "resource.h"

#include <iostream>

Model::Model()
{
}

Model::~Model()
{
}

const Resource * Model::resource(int i) const
{
    return m_resources.at(i);
}

void Model::newResource()
{
    //assert(m_resource == nullptr);

    m_resources.push_back(new Resource());

    auto opResult = m_resources.back()->load(":/picasso-dog");
    if(opResult == ResourceOperationResult::Success) {
        emit newResourceOpened("Unnamed file");
        return;
    }
    emit operationFailed(opResult);
}

void Model::openResource(const QString & file, int id)
{
    //assert(m_resource == nullptr);

    m_resources[id]=(new Resource());
    std::cerr << "opening " << file.toStdString() << "\n";
    auto opResult = m_resources[id]->load(file);
    if(opResult == ResourceOperationResult::Success) {
        emit resourceOpened(file);
        return;
    }
    emit operationFailed(opResult);
}

void Model::saveResource(int i)
{
    assert(m_resources.at(i) != nullptr);
    auto opResult = m_resources.at(i)->save();
    if(opResult == ResourceOperationResult::Success) {
        emit resourceSaved(i);
        return;
    }
    emit operationFailed(opResult);
}

void Model::saveResourceAs(int i, const QString & file)
{
    assert(m_resources.at(i) != nullptr);
    auto opResult = m_resources.at(i)->save(file);
    if(opResult == ResourceOperationResult::Success) {
        emit resourceSaved(i);
        return;
    }
    emit operationFailed(opResult);
}

void Model::saveAllResources()
{
    for (int i=0; i < m_resources.size(); i++) {
        if(m_resources.at(i) != nullptr) {
            saveResource(i);
        }
    }
}


void Model::closeResource(int i)
{
    if (i >= m_resources.size()) {
        return;
    }
    if(m_resources.at(i) == nullptr) {
        return;
    }
    delete m_resources.at(i);
    m_resources.erase(m_resources.begin() + i);
    emit resourceClosed(i);
}

void Model::closeAllResources()
{
    for (int i=0; i < m_resources.size(); i++) {
        closeResource(i);
    }
}

void Model::modifyResource(int i, const QString & source)
{
    std::cerr << "Modifying resource" << "\n";
    if(m_resources.at(i) == nullptr) {
        return;
    }
    m_resources.at(i)->setSource(source);
    emit resourceModified(i);
}

