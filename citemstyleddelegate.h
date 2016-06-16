#ifndef CITEMSTYLEDDELEGATE_H
#define CITEMSTYLEDDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class CItemStyleddelegate : public QStyledItemDelegate
{
public:
    CItemStyleddelegate();
    QString displayText(const QVariant &value, const QLocale &locale) const;

};

#endif // CITEMSTYLEDDELEGATE_H
