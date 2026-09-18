/********************************************************************************
** Form generated from reading UI file 'arx.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARX_H
#define UI_ARX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARX
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *layout_A;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *ogran_checkBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *maxU_doubleSpinBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *minU_doubleSpinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QDoubleSpinBox *maxY_doubleSpinBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *minY_doubleSpinBox;
    QPushButton *add_B_button;
    QPushButton *add_A_button;
    QVBoxLayout *layout_B;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *opz_standard_doubleSpinBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QDoubleSpinBox *szumy_doubleSpinBox;
    QPushButton *delA_pushButton;
    QPushButton *delB_pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ARX)
    {
        if (ARX->objectName().isEmpty())
            ARX->setObjectName("ARX");
        ARX->resize(547, 429);
        verticalLayout = new QVBoxLayout(ARX);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        layout_A = new QVBoxLayout();
        layout_A->setObjectName("layout_A");
        layout_A->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);

        gridLayout->addLayout(layout_A, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        ogran_checkBox = new QCheckBox(ARX);
        ogran_checkBox->setObjectName("ogran_checkBox");
        QFont font;
        font.setPointSize(12);
        ogran_checkBox->setFont(font);
        ogran_checkBox->setChecked(true);

        verticalLayout_3->addWidget(ogran_checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(ARX);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_4->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);

        maxU_doubleSpinBox = new QDoubleSpinBox(ARX);
        maxU_doubleSpinBox->setObjectName("maxU_doubleSpinBox");
        maxU_doubleSpinBox->setSingleStep(0.100000000000000);
        maxU_doubleSpinBox->setValue(10.000000000000000);

        verticalLayout_4->addWidget(maxU_doubleSpinBox);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(ARX);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_5->addWidget(label_4, 0, Qt::AlignmentFlag::AlignHCenter);

        minU_doubleSpinBox = new QDoubleSpinBox(ARX);
        minU_doubleSpinBox->setObjectName("minU_doubleSpinBox");
        minU_doubleSpinBox->setMinimum(-99.000000000000000);
        minU_doubleSpinBox->setSingleStep(0.100000000000000);
        minU_doubleSpinBox->setValue(-10.000000000000000);

        verticalLayout_5->addWidget(minU_doubleSpinBox);


        verticalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ARX);
        label->setObjectName("label");
        label->setFont(font);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_2->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        maxY_doubleSpinBox = new QDoubleSpinBox(ARX);
        maxY_doubleSpinBox->setObjectName("maxY_doubleSpinBox");
        maxY_doubleSpinBox->setSingleStep(0.100000000000000);
        maxY_doubleSpinBox->setValue(10.000000000000000);

        verticalLayout_2->addWidget(maxY_doubleSpinBox);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(ARX);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_6->addWidget(label_5, 0, Qt::AlignmentFlag::AlignHCenter);

        minY_doubleSpinBox = new QDoubleSpinBox(ARX);
        minY_doubleSpinBox->setObjectName("minY_doubleSpinBox");
        minY_doubleSpinBox->setMinimum(-99.000000000000000);
        minY_doubleSpinBox->setSingleStep(0.100000000000000);
        minY_doubleSpinBox->setValue(-10.000000000000000);

        verticalLayout_6->addWidget(minY_doubleSpinBox);


        verticalLayout_2->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_3, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 0, 1, 1);

        add_B_button = new QPushButton(ARX);
        add_B_button->setObjectName("add_B_button");
        add_B_button->setFont(font);

        gridLayout->addWidget(add_B_button, 0, 1, 1, 1);

        add_A_button = new QPushButton(ARX);
        add_A_button->setObjectName("add_A_button");
        add_A_button->setFont(font);

        gridLayout->addWidget(add_A_button, 0, 0, 1, 1);

        layout_B = new QVBoxLayout();
        layout_B->setObjectName("layout_B");

        gridLayout->addLayout(layout_B, 2, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_6 = new QLabel(ARX);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_9->addWidget(label_6);


        verticalLayout_7->addLayout(verticalLayout_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        opz_standard_doubleSpinBox = new QDoubleSpinBox(ARX);
        opz_standard_doubleSpinBox->setObjectName("opz_standard_doubleSpinBox");
        opz_standard_doubleSpinBox->setMinimumSize(QSize(20, 25));
        opz_standard_doubleSpinBox->setMinimum(1.000000000000000);
        opz_standard_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(opz_standard_doubleSpinBox);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_7 = new QLabel(ARX);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout_8->addWidget(label_7);

        szumy_doubleSpinBox = new QDoubleSpinBox(ARX);
        szumy_doubleSpinBox->setObjectName("szumy_doubleSpinBox");
        szumy_doubleSpinBox->setSingleStep(0.100000000000000);

        verticalLayout_8->addWidget(szumy_doubleSpinBox);


        verticalLayout_7->addLayout(verticalLayout_8);


        gridLayout->addLayout(verticalLayout_7, 4, 1, 1, 1);

        delA_pushButton = new QPushButton(ARX);
        delA_pushButton->setObjectName("delA_pushButton");
        delA_pushButton->setFont(font);

        gridLayout->addWidget(delA_pushButton, 3, 0, 1, 1);

        delB_pushButton = new QPushButton(ARX);
        delB_pushButton->setObjectName("delB_pushButton");
        delB_pushButton->setFont(font);

        gridLayout->addWidget(delB_pushButton, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(ARX);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ARX);

        QMetaObject::connectSlotsByName(ARX);
    } // setupUi

    void retranslateUi(QWidget *ARX)
    {
        ARX->setWindowTitle(QCoreApplication::translate("ARX", "Form", nullptr));
        ogran_checkBox->setText(QCoreApplication::translate("ARX", "Ograniczenia ", nullptr));
        label_3->setText(QCoreApplication::translate("ARX", "Max:u", nullptr));
        label_4->setText(QCoreApplication::translate("ARX", "Min:u", nullptr));
        label->setText(QCoreApplication::translate("ARX", "Max:y", nullptr));
        label_5->setText(QCoreApplication::translate("ARX", "Min:y", nullptr));
        add_B_button->setText(QCoreApplication::translate("ARX", "Dodaj wsp\303\263\305\202czynniki B:", nullptr));
        add_A_button->setText(QCoreApplication::translate("ARX", "Dodaj wsp\303\263\305\202czynniki A:", nullptr));
        label_6->setText(QCoreApplication::translate("ARX", "Op\303\263\305\274nienie transportowe", nullptr));
        label_7->setText(QCoreApplication::translate("ARX", "Szumy", nullptr));
        delA_pushButton->setText(QCoreApplication::translate("ARX", "Usu\305\204 wsp\303\263\305\202czynnik A:", nullptr));
        delB_pushButton->setText(QCoreApplication::translate("ARX", "Usu\305\204 wsp\303\263\305\202czynnik B:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ARX: public Ui_ARX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARX_H
