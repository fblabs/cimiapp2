#include "cprintingjob.h"
#include "ui_cprintingjob.h"
#include <QTextDocument>
#include <QTextCursor>
#include <QTextTable>
#include <QPrintDialog>
#include <QPrintPreviewDialog>
#include <QDebug>
#include <QPrinter>
#include <QPainter>

CPrintingJob::CPrintingJob(QWidget *parent, QVector<QSqlRelationalTableModel *> *mod) :
    QWidget(parent),
    ui(new Ui::CPrintingJob)
{
    ui->setupUi(this);

    tables=mod;

    doc=ui->textEdit->document();
    ui->textEdit->setTextCursor(QTextCursor(doc));
    cur=QTextCursor(ui->textEdit->textCursor());

}



CPrintingJob::~CPrintingJob()
{
    delete ui;
}



QTextTable* CPrintingJob::addSqlTable(int modat,bool newpage=false)
{

    cur=ui->textEdit->textCursor();

    QTextTableFormat tableFormat;
    tableFormat.setBorder(1);
    tableFormat.setBorderStyle(QTextTableFormat::BorderStyle_Solid);
   // QPen p(Qt::black,1,Qt::SolidLine)
    QBrush black(Qt::SolidPattern);

    tableFormat.setBorderBrush(black);
    tableFormat.setCellSpacing(2);




    int rows=tables->at(modat)->rowCount();
    int cols=tables->at(modat)->columnCount();



    QStringList headers;
    for (int c=0;c<cols;c++)
    {
        headers.append(tables->at(modat)->headerData(c,Qt::Horizontal,Qt::DisplayRole).toString());
    }

    tableFormat.setHeaderRowCount(1);




    QTextTable *tab=cur.insertTable(rows+1,cols,tableFormat);
    cur.insertBlock();
    qDebug()<<tab->rows();
//headers
    for (int col=0;col<cols;col++)
    {
        QTextTableCell cell=tab->cellAt(0,col);
        QTextCursor cellcur=cell.firstCursorPosition();
        cellcur.insertText(headers[col]);

    }
//cells
    int row;

//   qDebug()<<"rowsCells"<<rows;
    for(row=0;row<rows;row++)
    {
        for(int col=0;col<cols;col++)
        {
            QTextTableCell cell=tab->cellAt(row+1,col);
            QTextCursor cellcur=cell.firstCursorPosition();
            const QString text=tables->at(modat)->index(row,col).data(0).toString();
            cellcur.insertText(text);
            cellcur.movePosition(QTextCursor::EndOfBlock);
        }



    }

    cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);




    return 0;
}

void CPrintingJob::insertPageBreak()
{
    cur=ui->textEdit->textCursor();



    QTextBlockFormat fmt;
    fmt.setBackground(Qt::red);
    fmt.setPageBreakPolicy(QTextBlockFormat::PageBreak_AlwaysAfter);
    fmt.setNonBreakableLines(false);
   // cur.beginEditBlock();

    cur.insertBlock(fmt);


    cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);





}

void CPrintingJob::printDocument()
{
  doc->print(&printer);
  ui->textEdit->document()->print(&printer);

}

void CPrintingJob::addText(QString text)
{


    QTextBlockFormat fmt;
    fmt.setBackground(Qt::white);

    cur.movePosition(QTextCursor::EndOfBlock);
    cur.insertBlock(fmt);

    cur.insertText(text);


    cur.movePosition(QTextCursor::EndOfBlock);
    ui->textEdit->setTextCursor(cur);



}


void CPrintingJob::on_pushButton_3_clicked()
{
    close();
}

void CPrintingJob::on_pushButton_clicked()
{

    printDocument();
}

void CPrintingJob::printPreview(QPrinter *printer)
{

    doc=ui->textEdit->document();
    doc->print(printer);
}





void CPrintingJob::on_pushButton_2_clicked()
{
    QPrinter lprinter(QPrinter::HighResolution);
    lprinter.setPaperSize(QPrinter::A4);
    QPrintPreviewDialog *dlg=new QPrintPreviewDialog(&lprinter);
    connect(dlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(printPreview(QPrinter*)));
    dlg->exec();
}

void CPrintingJob::cursorToStart()
{
    cur=ui->textEdit->textCursor();


    bool b=cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);
    qDebug()<<cur.atEnd();
}

void CPrintingJob::cursorToEnd()
{

    cur=ui->textEdit->textCursor();

    bool b=cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);
    qDebug()<<cur.atEnd();

    qDebug()<<ui->textEdit->document()->pageCount();

}
