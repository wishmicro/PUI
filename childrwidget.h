#ifndef CHILDRWIDGET_H
#define CHILDRWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class childrWidget :public QWidget
{
    Q_OBJECT
public:
    childrWidget(QWidget *parent=0);
};

#endif // CHILDRWIDGET_H
