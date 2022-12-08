#ifndef __MAIN_APPLICATION_HH__
#define __MAIN_APPLICATION_HH__

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

#include <iostream>
#include <cstdlib>

class MainApplication : public QMainWindow {
    
    Q_OBJECT

    int32_t mButtonPressedAmt;

    QLabel* mpLabel;
    QPushButton* mpPushButton;

    void updateLabelText();

    public:
        MainApplication(QWidget *parent = nullptr);
        ~MainApplication();

    signals:
        void sigLabelTextUpdated(std::string_view);
};

#endif