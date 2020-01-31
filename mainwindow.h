#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "nscontroller.h"
#include "inputtable.h"

QT_BEGIN_NAMESPACE
namespace Ui {
  class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();
  void keyPressEvent(QKeyEvent* event);
  void keyReleaseEvent(QKeyEvent* event);
  nscontroller c;
  inputtable keytable;

 private slots:
  void RefreshDeviceList();
  void ConnectSerial();
  void DisconnectSerial();

 private:
  Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
