/********************************************************************************
** Form generated from reading UI file 'sieciowka.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIECIOWKA_H
#define UI_SIECIOWKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sieciowka
{
public:
    QVBoxLayout *verticalLayout_main;
    QGroupBox *grupaSieciowa;
    QGridLayout *gridLayout_siec;
    QLabel *lblStatus;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnRozlacz;
    QPushButton *btnPolacz;
    QPushButton *btnSerwer;
    QGroupBox *groupSerializacja;
    QHBoxLayout *horizontalLayout_44;
    QRadioButton *radioJson;
    QRadioButton *radioBinary;
    QGroupBox *groupTaktowanie;
    QVBoxLayout *verticalLayout_taktowanie;
    QRadioButton *radioJednostronne;
    QRadioButton *radioObustronne;
    QFormLayout *formLayout;
    QLabel *label_port;
    QSpinBox *polePort;
    QLabel *label_ip;
    QLineEdit *poleIP;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Sieciowka)
    {
        if (Sieciowka->objectName().isEmpty())
            Sieciowka->setObjectName("Sieciowka");
        Sieciowka->resize(420, 450);
        verticalLayout_main = new QVBoxLayout(Sieciowka);
        verticalLayout_main->setObjectName("verticalLayout_main");
        grupaSieciowa = new QGroupBox(Sieciowka);
        grupaSieciowa->setObjectName("grupaSieciowa");
        gridLayout_siec = new QGridLayout(grupaSieciowa);
        gridLayout_siec->setObjectName("gridLayout_siec");
        lblStatus = new QLabel(grupaSieciowa);
        lblStatus->setObjectName("lblStatus");

        gridLayout_siec->addWidget(lblStatus, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnRozlacz = new QPushButton(grupaSieciowa);
        btnRozlacz->setObjectName("btnRozlacz");

        horizontalLayout_5->addWidget(btnRozlacz);

        btnPolacz = new QPushButton(grupaSieciowa);
        btnPolacz->setObjectName("btnPolacz");

        horizontalLayout_5->addWidget(btnPolacz);

        btnSerwer = new QPushButton(grupaSieciowa);
        btnSerwer->setObjectName("btnSerwer");

        horizontalLayout_5->addWidget(btnSerwer);


        gridLayout_siec->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        groupSerializacja = new QGroupBox(grupaSieciowa);
        groupSerializacja->setObjectName("groupSerializacja");
        horizontalLayout_44 = new QHBoxLayout(groupSerializacja);
        horizontalLayout_44->setObjectName("horizontalLayout_44");
        radioJson = new QRadioButton(groupSerializacja);
        radioJson->setObjectName("radioJson");
        radioJson->setChecked(true);

        horizontalLayout_44->addWidget(radioJson);

        radioBinary = new QRadioButton(groupSerializacja);
        radioBinary->setObjectName("radioBinary");

        horizontalLayout_44->addWidget(radioBinary);


        gridLayout_siec->addWidget(groupSerializacja, 2, 0, 1, 1);

        groupTaktowanie = new QGroupBox(grupaSieciowa);
        groupTaktowanie->setObjectName("groupTaktowanie");
        verticalLayout_taktowanie = new QVBoxLayout(groupTaktowanie);
        verticalLayout_taktowanie->setObjectName("verticalLayout_taktowanie");
        radioJednostronne = new QRadioButton(groupTaktowanie);
        radioJednostronne->setObjectName("radioJednostronne");
        radioJednostronne->setChecked(true);

        verticalLayout_taktowanie->addWidget(radioJednostronne);

        radioObustronne = new QRadioButton(groupTaktowanie);
        radioObustronne->setObjectName("radioObustronne");

        verticalLayout_taktowanie->addWidget(radioObustronne);


        gridLayout_siec->addWidget(groupTaktowanie, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_port = new QLabel(grupaSieciowa);
        label_port->setObjectName("label_port");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_port);

        polePort = new QSpinBox(grupaSieciowa);
        polePort->setObjectName("polePort");
        polePort->setMinimum(1024);
        polePort->setMaximum(65535);
        polePort->setValue(5555);

        formLayout->setWidget(0, QFormLayout::FieldRole, polePort);

        label_ip = new QLabel(grupaSieciowa);
        label_ip->setObjectName("label_ip");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_ip);

        poleIP = new QLineEdit(grupaSieciowa);
        poleIP->setObjectName("poleIP");

        formLayout->setWidget(1, QFormLayout::FieldRole, poleIP);


        gridLayout_siec->addLayout(formLayout, 0, 0, 1, 1);


        verticalLayout_main->addWidget(grupaSieciowa);

        buttonBox = new QDialogButtonBox(Sieciowka);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_main->addWidget(buttonBox);


        retranslateUi(Sieciowka);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Sieciowka, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Sieciowka);
    } // setupUi

    void retranslateUi(QDialog *Sieciowka)
    {
        Sieciowka->setWindowTitle(QCoreApplication::translate("Sieciowka", "Ustawienia sieciowe", nullptr));
        grupaSieciowa->setTitle(QCoreApplication::translate("Sieciowka", "Ustawienia po\305\202\304\205czenia TCP", nullptr));
        lblStatus->setStyleSheet(QCoreApplication::translate("Sieciowka", "color: red; font-weight: bold;", nullptr));
        lblStatus->setText(QCoreApplication::translate("Sieciowka", "Status: ROZ\305\201\304\204CZONO", nullptr));
        btnRozlacz->setText(QCoreApplication::translate("Sieciowka", "Roz\305\202\304\205cz", nullptr));
        btnPolacz->setText(QCoreApplication::translate("Sieciowka", "Po\305\202\304\205cz (Klient)", nullptr));
        btnSerwer->setText(QCoreApplication::translate("Sieciowka", "Uruchom Serwer", nullptr));
        groupSerializacja->setTitle(QCoreApplication::translate("Sieciowka", "Rodzaj serializacji", nullptr));
        radioJson->setText(QCoreApplication::translate("Sieciowka", "JSON", nullptr));
        radioBinary->setText(QCoreApplication::translate("Sieciowka", "Binarna (QDataStream)", nullptr));
        groupTaktowanie->setTitle(QCoreApplication::translate("Sieciowka", "Tryb taktowania", nullptr));
        radioJednostronne->setText(QCoreApplication::translate("Sieciowka", "Jednostronne (regulator steruje czasem)", nullptr));
        radioObustronne->setText(QCoreApplication::translate("Sieciowka", "Obustronne (niezale\305\274ne timery z synchronizacj\304\205)", nullptr));
        label_port->setText(QCoreApplication::translate("Sieciowka", "Port:", nullptr));
        label_ip->setText(QCoreApplication::translate("Sieciowka", "IP:", nullptr));
        poleIP->setText(QCoreApplication::translate("Sieciowka", "127.0.0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sieciowka: public Ui_Sieciowka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIECIOWKA_H
