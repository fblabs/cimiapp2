#ifndef CPRINT_H
#define CPRINT_H

#include <QObject>
#include <QTextCursor>\

class CPrint : public QObject
{
    Q_OBJECT
public:
    explicit CPrint(QObject *parent = 0);
    void addTable(QTextCursor &cursor, int rows, int cols, QStringList headers);

signals:

public slots:
};

#endif // CPRINT_H
