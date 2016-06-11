#include "cprintingjob.h"
#include "ui_cprintingjob.h"
#include <QTextDocument>
#include <QTextCursor>
#include <QTextTable>
#include <QPrintDialog>
#include <QPrintPreviewDialog>
#include <QDebug>
#include <QPrinter>

CPrintingJob::CPrintingJob(QWidget *parent, QVector<QSqlRelationalTableModel *> *mod) :
    QWidget(parent),
    ui(new Ui::CPrintingJob)
{
    ui->setupUi(this);

    tables=mod;



    buildDocument();
    cur=ui->textEdit->textCursor();




}

void CPrintingJob::buildDocument()
{

    doc=ui->textEdit->document();



}

CPrintingJob::~CPrintingJob()
{
    delete ui;
}



QTextTable* CPrintingJob::addSqlTable(int modat,bool newpage=false)
{
    QTextTableFormat tableFormat;
    tableFormat.setBorder(1);
    tableFormat.setBorderStyle(QTextTableFormat::BorderStyle_Solid);



   // QPen p(Qt::black,1,Qt::SolidLine)
    QBrush black(Qt::SolidPattern);

    tableFormat.setBorderBrush(black);

    tableFormat.setCellSpacing(2);

  //  tables->at(modat)->select();


    int rows=tables->at(modat)->rowCount();
    int cols=tables->at(modat)->columnCount();

 //   qDebug()<<"addSqlTable: "<<rows<<cols<<tables->at(modat)->index(0,1).data(0).toString()<<tables->at(modat)->filter();




    QStringList headers;
    for (int c=0;c<cols;c++)
    {
        headers.append(tables->at(modat)->headerData(c,Qt::Horizontal,Qt::DisplayRole).toString());
    }

    tableFormat.setHeaderRowCount(1);



    QTextTable *table=cur.insertTable(rows+1,cols,tableFormat);
//headers
    for (int col=0;col<cols;col++)
    {
        QTextTableCell cell=table->cellAt(0,col);
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
            QTextTableCell cell=table->cellAt(row+1,col);
            QTextCursor cellcur=cell.firstCursorPosition();
            const QString text=tables->at(modat)->index(row,col).data(0).toString();
            cellcur.insertText(text);
        }



    }

    cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);

    if(newpage)
    {

        QTextBlockFormat fmt;
        fmt.setForeground(Qt::red);
        fmt.setPageBreakPolicy(QTextBlockFormat::PageBreak_AlwaysAfter);
        cur.insertBlock(fmt);
        cur.insertText("--------------------------------");


    }


    return 0;
}


void CPrintingJob::on_pushButton_3_clicked()
{
    close();
}

void CPrintingJob::on_pushButton_clicked()
{

    printer.setPageSize(QPrinter::A4);

    QPrintDialog   dialog(&printer);
   // dlg->show();
    if (dialog.exec()==QDialog::Accepted)
    {
        ui->textEdit->print(&printer);

    }

}

void CPrintingJob::printPreview(QPrinter *printer)
{
    ui->textEdit->print(printer);
}





void CPrintingJob::on_pushButton_2_clicked()
{
    QPrinter lprinter(QPrinter::HighResolution);
    lprinter.setPaperSize(QPrinter::A4);
    QPrintPreviewDialog *dlg=new QPrintPreviewDialog(&lprinter);
    connect(dlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(printPreview(QPrinter*)));
    dlg->exec();
}
