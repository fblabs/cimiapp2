#include "cprint.h"
#include <QPrinter>
#include <QApplication>
#include <QTextDocument>
#include <QTextCursor>
#include <QPrintDialog>


CPrint::CPrint(QObject *parent) : QObject(parent)
{
    QTextDocument doc;
    QTextCursor cur(&doc);

    //TEMP
    QPrintDialog dlg;
    dlg.show();
}

void CPrint::addTable(QTextCursor &cursor,int rows,int cols,QStringList headers)
{
   QTextTableFormat tableFormat;
   tableFormat.setBorder(1);
   tableFormat.setBorderStyle(QTextTableFormat::BorderStyle_Solid);

   tableFormat.setHeaderRowCount(1);
   QTextTable *table=cursor.insertTable(rows+1,cols,tableFormat);
   cursor.movePosition(QTextCursor::End);
}
