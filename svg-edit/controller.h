#pragma once

#include <QObject>

class Model;


class Controller : public QObject
{
    Q_OBJECT

public:
    explicit Controller();

    void setModel(Model * model);
    Model * model() const;

signals:

public slots:
    void newResource() const;
    void openResource(const QString & file, int id) const;
    void saveResource(int i) const;
    void saveResourceAs(int i, QString & file) const;
    void closeResource(int i) const;

    void modifyResource(int i, const QString & source) const;

    void exit(int code = 0);

protected:
    Model * m_model;

};
