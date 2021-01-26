#pragma once

#include <QObject>

class MainWindow;
class Resource;
enum class ResourceOperationResult;

class Model : public QObject
{
    Q_OBJECT

public:
    explicit Model();
    ~Model();

    void newResource();
    void openResource(const QString & file, int id);
    void modifyResource(int i, const QString & source);
    void saveResource(int i);
    void saveResourceAs(int i, const QString & file);
    void saveAllResources();
    void closeResource(int i);
    void closeAllResources();

    const Resource * resource(int i) const;

signals:
    void newResourceOpened(const QString & file) const;
    void resourceOpened(const QString & file) const;
    void resourceModified(int i) const;
    void resourceSaved(int i) const;
    void resourceClosed(int i) const;

    void operationFailed(ResourceOperationResult result) const;

public slots:


protected:
    std::vector<Resource *> m_resources;
};
