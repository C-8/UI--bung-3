#include "controller.h"

#include <QApplication>

#include "model.h"
#include "mainwindow.h"


Controller::Controller()
{

}

void Controller::setModel(Model * model)
{
    if(m_model == model) {
        return;
    }
    m_model = model;
}

Model * Controller::model() const
{
    return m_model;
}

void Controller::newResource() const
{
    m_model->newResource();
}

void Controller::openResource(const QString & file, int id) const
{
    m_model->openResource(file, id);
}
void Controller::saveResource(int i) const
{
    m_model->saveResource(i);
}

void Controller::saveResourceAs(int i, QString & file) const
{
    m_model->saveResourceAs(i, file);
}

void Controller::saveAllResource()const
{
    m_model->saveAllResources();
}

void Controller::closeResource(int i) const
{
    m_model->closeResource(i);
}

void Controller::modifyResource(int i, const QString & source) const
{
    m_model->modifyResource(i, source);
}


void Controller::exit(const int code)
{
    m_model->closeAllResources();
    QApplication::exit(code);
}
