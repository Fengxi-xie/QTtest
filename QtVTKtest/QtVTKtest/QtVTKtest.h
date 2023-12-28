#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtVTKtest.h"

class QtVTKtest : public QMainWindow
{
    Q_OBJECT

public:
    QtVTKtest(QWidget *parent = nullptr);
    ~QtVTKtest();

private:
    Ui::QtVTKtestClass ui;
};
