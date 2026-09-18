/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *all_2;
    QGridLayout *zapis_odczyt_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *save_button_2;
    QPushButton *read_button_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *StartStop_button_2;
    QPushButton *reset_button_2;
    QPushButton *ARX_model_button;
    QPushButton *btnOtworzSieciowke;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblLost;
    QLabel *lblPPS;
    QLabel *lblLatency;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QDoubleSpinBox *interwal_doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_16;
    QSpinBox *szer_okna_spinBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_28;
    QDoubleSpinBox *wzmocnienie_doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_29;
    QDoubleSpinBox *calka_doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_30;
    QDoubleSpinBox *rozniczka_doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *memory_reset_d_button_2;
    QPushButton *memory_reset_i_button_2;
    QHBoxLayout *horizontalLayout_38;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_33;
    QRadioButton *przed_radioButton;
    QRadioButton *w_sumie_radioButton;
    QGridLayout *Sygnaly_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QDoubleSpinBox *amp_square_doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_7;
    QDoubleSpinBox *period_square_doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_34;
    QDoubleSpinBox *sklad_stal_sqrt_doubleSpinBox;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_35;
    QDoubleSpinBox *fill_square_doubleSpinBox_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_8;
    QDoubleSpinBox *amp_sinus_doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_36;
    QDoubleSpinBox *sklad_stal_sin_doubleSpinBox;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_9;
    QDoubleSpinBox *period_sinus_doubleSpinBox_2;
    QTextEdit *sygn_sinus_l_2;
    QRadioButton *sqrt_syg_radioButton;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *add_syg_button;
    QPushButton *del_syg_button;
    QTextEdit *sygn_square_l_2;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *sin_syg_radioButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1343, 1199);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        all_2 = new QVBoxLayout();
        all_2->setSpacing(2);
        all_2->setObjectName("all_2");
        zapis_odczyt_2 = new QGridLayout();
        zapis_odczyt_2->setObjectName("zapis_odczyt_2");
        zapis_odczyt_2->setHorizontalSpacing(2);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        save_button_2 = new QPushButton(centralwidget);
        save_button_2->setObjectName("save_button_2");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(save_button_2->sizePolicy().hasHeightForWidth());
        save_button_2->setSizePolicy(sizePolicy);
        save_button_2->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(10);
        save_button_2->setFont(font);

        horizontalLayout_2->addWidget(save_button_2);

        read_button_2 = new QPushButton(centralwidget);
        read_button_2->setObjectName("read_button_2");
        read_button_2->setMinimumSize(QSize(0, 30));
        read_button_2->setFont(font);

        horizontalLayout_2->addWidget(read_button_2);


        zapis_odczyt_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        StartStop_button_2 = new QPushButton(centralwidget);
        StartStop_button_2->setObjectName("StartStop_button_2");
        sizePolicy.setHeightForWidth(StartStop_button_2->sizePolicy().hasHeightForWidth());
        StartStop_button_2->setSizePolicy(sizePolicy);
        StartStop_button_2->setMinimumSize(QSize(0, 30));
        StartStop_button_2->setFont(font);

        horizontalLayout_6->addWidget(StartStop_button_2);

        reset_button_2 = new QPushButton(centralwidget);
        reset_button_2->setObjectName("reset_button_2");
        reset_button_2->setMinimumSize(QSize(0, 30));
        reset_button_2->setFont(font);

        horizontalLayout_6->addWidget(reset_button_2);


        zapis_odczyt_2->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        all_2->addLayout(zapis_odczyt_2);

        ARX_model_button = new QPushButton(centralwidget);
        ARX_model_button->setObjectName("ARX_model_button");
        ARX_model_button->setMinimumSize(QSize(0, 30));
        ARX_model_button->setFont(font);

        all_2->addWidget(ARX_model_button);

        btnOtworzSieciowke = new QPushButton(centralwidget);
        btnOtworzSieciowke->setObjectName("btnOtworzSieciowke");

        all_2->addWidget(btnOtworzSieciowke);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblLost = new QLabel(centralwidget);
        lblLost->setObjectName("lblLost");

        horizontalLayout_4->addWidget(lblLost);

        lblPPS = new QLabel(centralwidget);
        lblPPS->setObjectName("lblPPS");

        horizontalLayout_4->addWidget(lblPPS);

        lblLatency = new QLabel(centralwidget);
        lblLatency->setObjectName("lblLatency");

        horizontalLayout_4->addWidget(lblLatency);


        all_2->addLayout(horizontalLayout_4);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(2);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setMaximumSize(QSize(16777215, 30));
        label_15->setFont(font);

        horizontalLayout_18->addWidget(label_15);

        interwal_doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        interwal_doubleSpinBox_2->setObjectName("interwal_doubleSpinBox_2");
        interwal_doubleSpinBox_2->setMinimum(10.000000000000000);
        interwal_doubleSpinBox_2->setMaximum(1000.000000000000000);
        interwal_doubleSpinBox_2->setSingleStep(10.000000000000000);
        interwal_doubleSpinBox_2->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        interwal_doubleSpinBox_2->setValue(50.000000000000000);

        horizontalLayout_18->addWidget(interwal_doubleSpinBox_2);


        all_2->addLayout(horizontalLayout_18);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        horizontalLayout_24->addWidget(label_16);

        szer_okna_spinBox_2 = new QSpinBox(centralwidget);
        szer_okna_spinBox_2->setObjectName("szer_okna_spinBox_2");
        szer_okna_spinBox_2->setMinimum(5);
        szer_okna_spinBox_2->setMaximum(50);
        szer_okna_spinBox_2->setValue(10);

        horizontalLayout_24->addWidget(szer_okna_spinBox_2);


        all_2->addLayout(horizontalLayout_24);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName("verticalLayout_4");

        all_2->addLayout(verticalLayout_4);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName("horizontalLayout_35");
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName("label_28");
        label_28->setFont(font);

        horizontalLayout_35->addWidget(label_28);

        wzmocnienie_doubleSpinBox_3 = new QDoubleSpinBox(centralwidget);
        wzmocnienie_doubleSpinBox_3->setObjectName("wzmocnienie_doubleSpinBox_3");
        wzmocnienie_doubleSpinBox_3->setMinimum(-100.000000000000000);
        wzmocnienie_doubleSpinBox_3->setMaximum(100.000000000000000);
        wzmocnienie_doubleSpinBox_3->setSingleStep(0.100000000000000);
        wzmocnienie_doubleSpinBox_3->setValue(0.500000000000000);

        horizontalLayout_35->addWidget(wzmocnienie_doubleSpinBox_3);


        verticalLayout_11->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName("horizontalLayout_36");
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName("label_29");
        label_29->setFont(font);

        horizontalLayout_36->addWidget(label_29);

        calka_doubleSpinBox_3 = new QDoubleSpinBox(centralwidget);
        calka_doubleSpinBox_3->setObjectName("calka_doubleSpinBox_3");
        calka_doubleSpinBox_3->setMinimum(-100.000000000000000);
        calka_doubleSpinBox_3->setMaximum(100.000000000000000);
        calka_doubleSpinBox_3->setSingleStep(0.100000000000000);
        calka_doubleSpinBox_3->setValue(5.000000000000000);

        horizontalLayout_36->addWidget(calka_doubleSpinBox_3);


        verticalLayout_11->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName("label_30");
        label_30->setFont(font);

        horizontalLayout_37->addWidget(label_30);

        rozniczka_doubleSpinBox_3 = new QDoubleSpinBox(centralwidget);
        rozniczka_doubleSpinBox_3->setObjectName("rozniczka_doubleSpinBox_3");
        rozniczka_doubleSpinBox_3->setMinimum(-100.000000000000000);
        rozniczka_doubleSpinBox_3->setMaximum(100.000000000000000);
        rozniczka_doubleSpinBox_3->setSingleStep(0.100000000000000);
        rozniczka_doubleSpinBox_3->setValue(0.200000000000000);

        horizontalLayout_37->addWidget(rozniczka_doubleSpinBox_3);


        verticalLayout_11->addLayout(horizontalLayout_37);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        memory_reset_d_button_2 = new QPushButton(centralwidget);
        memory_reset_d_button_2->setObjectName("memory_reset_d_button_2");
        memory_reset_d_button_2->setMinimumSize(QSize(0, 30));
        memory_reset_d_button_2->setFont(font);

        horizontalLayout_9->addWidget(memory_reset_d_button_2);

        memory_reset_i_button_2 = new QPushButton(centralwidget);
        memory_reset_i_button_2->setObjectName("memory_reset_i_button_2");
        memory_reset_i_button_2->setMinimumSize(QSize(0, 30));
        memory_reset_i_button_2->setFont(font);

        horizontalLayout_9->addWidget(memory_reset_i_button_2);


        verticalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName("horizontalLayout_38");

        verticalLayout_11->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName("label_33");
        label_33->setFont(font);

        horizontalLayout_39->addWidget(label_33);

        przed_radioButton = new QRadioButton(centralwidget);
        przed_radioButton->setObjectName("przed_radioButton");
        przed_radioButton->setFont(font);

        horizontalLayout_39->addWidget(przed_radioButton);

        w_sumie_radioButton = new QRadioButton(centralwidget);
        w_sumie_radioButton->setObjectName("w_sumie_radioButton");
        w_sumie_radioButton->setFont(font);

        horizontalLayout_39->addWidget(w_sumie_radioButton);


        verticalLayout_11->addLayout(horizontalLayout_39);


        verticalLayout_13->addLayout(verticalLayout_11);


        all_2->addLayout(verticalLayout_13);

        Sygnaly_2 = new QGridLayout();
        Sygnaly_2->setObjectName("Sygnaly_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_14->addWidget(label_5);

        amp_square_doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        amp_square_doubleSpinBox_2->setObjectName("amp_square_doubleSpinBox_2");
        amp_square_doubleSpinBox_2->setSingleStep(0.100000000000000);
        amp_square_doubleSpinBox_2->setValue(1.000000000000000);

        horizontalLayout_14->addWidget(amp_square_doubleSpinBox_2);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_15->addWidget(label_7);

        period_square_doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        period_square_doubleSpinBox_2->setObjectName("period_square_doubleSpinBox_2");
        period_square_doubleSpinBox_2->setSingleStep(0.100000000000000);
        period_square_doubleSpinBox_2->setValue(3.000000000000000);

        horizontalLayout_15->addWidget(period_square_doubleSpinBox_2);


        verticalLayout_5->addLayout(horizontalLayout_15);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName("label_34");
        label_34->setFont(font);

        horizontalLayout_25->addWidget(label_34);

        sklad_stal_sqrt_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        sklad_stal_sqrt_doubleSpinBox->setObjectName("sklad_stal_sqrt_doubleSpinBox");
        sklad_stal_sqrt_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_25->addWidget(sklad_stal_sqrt_doubleSpinBox);


        verticalLayout_5->addLayout(horizontalLayout_25);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        label_35 = new QLabel(centralwidget);
        label_35->setObjectName("label_35");
        label_35->setFont(font);

        horizontalLayout_40->addWidget(label_35);

        fill_square_doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        fill_square_doubleSpinBox_2->setObjectName("fill_square_doubleSpinBox_2");
        fill_square_doubleSpinBox_2->setMaximum(1.000000000000000);
        fill_square_doubleSpinBox_2->setSingleStep(0.100000000000000);
        fill_square_doubleSpinBox_2->setValue(0.500000000000000);

        horizontalLayout_40->addWidget(fill_square_doubleSpinBox_2);


        verticalLayout_5->addLayout(horizontalLayout_40);


        Sygnaly_2->addLayout(verticalLayout_5, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_16->addWidget(label_8);

        amp_sinus_doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        amp_sinus_doubleSpinBox_2->setObjectName("amp_sinus_doubleSpinBox_2");
        amp_sinus_doubleSpinBox_2->setSingleStep(0.100000000000000);
        amp_sinus_doubleSpinBox_2->setValue(1.000000000000000);

        horizontalLayout_16->addWidget(amp_sinus_doubleSpinBox_2);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName("horizontalLayout_41");
        label_36 = new QLabel(centralwidget);
        label_36->setObjectName("label_36");
        label_36->setFont(font);

        horizontalLayout_41->addWidget(label_36);

        sklad_stal_sin_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        sklad_stal_sin_doubleSpinBox->setObjectName("sklad_stal_sin_doubleSpinBox");
        sklad_stal_sin_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_41->addWidget(sklad_stal_sin_doubleSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName("horizontalLayout_42");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_42->addWidget(label_9);

        period_sinus_doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        period_sinus_doubleSpinBox_2->setObjectName("period_sinus_doubleSpinBox_2");
        period_sinus_doubleSpinBox_2->setSingleStep(0.100000000000000);
        period_sinus_doubleSpinBox_2->setValue(3.000000000000000);

        horizontalLayout_42->addWidget(period_sinus_doubleSpinBox_2);


        verticalLayout_6->addLayout(horizontalLayout_42);


        Sygnaly_2->addLayout(verticalLayout_6, 1, 1, 1, 1);

        sygn_sinus_l_2 = new QTextEdit(centralwidget);
        sygn_sinus_l_2->setObjectName("sygn_sinus_l_2");
        sygn_sinus_l_2->setMaximumSize(QSize(16777215, 60));
        sygn_sinus_l_2->setReadOnly(true);

        Sygnaly_2->addWidget(sygn_sinus_l_2, 4, 0, 1, 2);

        sqrt_syg_radioButton = new QRadioButton(centralwidget);
        sqrt_syg_radioButton->setObjectName("sqrt_syg_radioButton");

        Sygnaly_2->addWidget(sqrt_syg_radioButton, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        add_syg_button = new QPushButton(centralwidget);
        add_syg_button->setObjectName("add_syg_button");
        add_syg_button->setMinimumSize(QSize(0, 30));
        add_syg_button->setFont(font);

        horizontalLayout_8->addWidget(add_syg_button);

        del_syg_button = new QPushButton(centralwidget);
        del_syg_button->setObjectName("del_syg_button");
        del_syg_button->setMinimumSize(QSize(0, 30));
        del_syg_button->setFont(font);

        horizontalLayout_8->addWidget(del_syg_button);


        Sygnaly_2->addLayout(horizontalLayout_8, 2, 0, 1, 2);

        sygn_square_l_2 = new QTextEdit(centralwidget);
        sygn_square_l_2->setObjectName("sygn_square_l_2");
        sygn_square_l_2->setMaximumSize(QSize(16777215, 60));
        sygn_square_l_2->setReadOnly(true);

        Sygnaly_2->addWidget(sygn_square_l_2, 3, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        sin_syg_radioButton = new QRadioButton(centralwidget);
        sin_syg_radioButton->setObjectName("sin_syg_radioButton");
        sin_syg_radioButton->setChecked(true);

        horizontalLayout_7->addWidget(sin_syg_radioButton);


        Sygnaly_2->addLayout(horizontalLayout_7, 0, 1, 1, 1);


        all_2->addLayout(Sygnaly_2);


        horizontalLayout_3->addLayout(all_2);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1343, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        save_button_2->setText(QCoreApplication::translate("MainWindow", "Zapis", nullptr));
        read_button_2->setText(QCoreApplication::translate("MainWindow", "Odczyt", nullptr));
        StartStop_button_2->setText(QCoreApplication::translate("MainWindow", "Start/Stop", nullptr));
        reset_button_2->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        ARX_model_button->setText(QCoreApplication::translate("MainWindow", "Model ARX", nullptr));
        btnOtworzSieciowke->setText(QCoreApplication::translate("MainWindow", "Sie\304\207", nullptr));
        lblLost->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblPPS->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblLatency->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202 (ms)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Szeroko\305\233\304\207 okna", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Wzmocnienie", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a ca\305\202kowania", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a r\303\263\305\274niczkowania", nullptr));
        memory_reset_d_button_2->setText(QCoreApplication::translate("MainWindow", "Reset pami\304\231ci r\303\263\305\274niczkuj\304\205cej", nullptr));
        memory_reset_i_button_2->setText(QCoreApplication::translate("MainWindow", "Reset pami\304\231ci ca\305\202kuj\304\205cej", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Tryb pracy ca\305\202ki:", nullptr));
        przed_radioButton->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a w sumie", nullptr));
        w_sumie_radioButton->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a przed sum\304\205", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Amplituda", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Okres", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Sk\305\202adowa sta\305\202a", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Wype\305\202nienie", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Amplituda", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Sk\305\202adowa sta\305\202a", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Okres", nullptr));
        sqrt_syg_radioButton->setText(QCoreApplication::translate("MainWindow", "Sygna\305\202 prostok\304\205tny", nullptr));
        add_syg_button->setText(QCoreApplication::translate("MainWindow", "Dodaj sygna\305\202", nullptr));
        del_syg_button->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 sygna\305\202", nullptr));
        sin_syg_radioButton->setText(QCoreApplication::translate("MainWindow", "Sygna\305\202 sinusoidalny", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
