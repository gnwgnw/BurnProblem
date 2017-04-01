/********************************************************************************
** Form generated from reading UI file 'burn_problem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BURN_PROBLEM_H
#define UI_BURN_PROBLEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PartialWindow
{
public:
    QWidget *central_widget;
    QGridLayout *central_layout;
    QSplitter *splitter;
    QWidget *charts_widget;
    QGridLayout *charts_layout;
    QWidget *controls_widget;
    QVBoxLayout *controls_layout;
    QTabWidget *params_tab_widget;
    QWidget *params_tab;
    QFormLayout *params_layout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QDoubleSpinBox *doubleSpinBox_A_k;
    QDoubleSpinBox *doubleSpinBox_E_a;
    QDoubleSpinBox *doubleSpinBox_G_t;
    QDoubleSpinBox *doubleSpinBox_C_pt;
    QDoubleSpinBox *doubleSpinBox_T_s0;
    QDoubleSpinBox *doubleSpinBox_T_s;
    QDoubleSpinBox *doubleSpinBox_T_max;
    QDoubleSpinBox *doubleSpinBox_R_s;
    QDoubleSpinBox *doubleSpinBox_R_max;
    QDoubleSpinBox *doubleSpinBox_lambda;
    QDoubleSpinBox *doubleSpinBox_C_p;
    QDoubleSpinBox *doubleSpinBox_p_k;
    QDoubleSpinBox *doubleSpinBox_q_r;
    QDoubleSpinBox *doubleSpinBox_rho_t;
    QWidget *grids_tab;
    QFormLayout *grids_layout;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QSpinBox *spinBox_n;
    QDoubleSpinBox *doubleSpinBox_x_0;
    QDoubleSpinBox *doubleSpinBox_x_1;
    QDoubleSpinBox *doubleSpinBox_h;
    QDoubleSpinBox *doubleSpinBox_t_end;
    QDoubleSpinBox *doubleSpinBox_tau;
    QWidget *buttons_widget;
    QGridLayout *buttons_layout;
    QPushButton *button_run;

    void setupUi(QMainWindow *PartialWindow)
    {
        if (PartialWindow->objectName().isEmpty())
            PartialWindow->setObjectName(QStringLiteral("PartialWindow"));
        PartialWindow->resize(800, 600);
        central_widget = new QWidget(PartialWindow);
        central_widget->setObjectName(QStringLiteral("central_widget"));
        central_layout = new QGridLayout(central_widget);
        central_layout->setObjectName(QStringLiteral("central_layout"));
        splitter = new QSplitter(central_widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        charts_widget = new QWidget(splitter);
        charts_widget->setObjectName(QStringLiteral("charts_widget"));
        charts_layout = new QGridLayout(charts_widget);
        charts_layout->setObjectName(QStringLiteral("charts_layout"));
        splitter->addWidget(charts_widget);
        controls_widget = new QWidget(splitter);
        controls_widget->setObjectName(QStringLiteral("controls_widget"));
        controls_layout = new QVBoxLayout(controls_widget);
        controls_layout->setObjectName(QStringLiteral("controls_layout"));
        params_tab_widget = new QTabWidget(controls_widget);
        params_tab_widget->setObjectName(QStringLiteral("params_tab_widget"));
        params_tab = new QWidget();
        params_tab->setObjectName(QStringLiteral("params_tab"));
        params_layout = new QFormLayout(params_tab);
        params_layout->setObjectName(QStringLiteral("params_layout"));
        label = new QLabel(params_tab);
        label->setObjectName(QStringLiteral("label"));

        params_layout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(params_tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        params_layout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_13 = new QLabel(params_tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        params_layout->setWidget(2, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(params_tab);
        label_14->setObjectName(QStringLiteral("label_14"));

        params_layout->setWidget(3, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(params_tab);
        label_15->setObjectName(QStringLiteral("label_15"));

        params_layout->setWidget(4, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(params_tab);
        label_16->setObjectName(QStringLiteral("label_16"));

        params_layout->setWidget(5, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(params_tab);
        label_17->setObjectName(QStringLiteral("label_17"));

        params_layout->setWidget(6, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(params_tab);
        label_18->setObjectName(QStringLiteral("label_18"));

        params_layout->setWidget(7, QFormLayout::LabelRole, label_18);

        label_19 = new QLabel(params_tab);
        label_19->setObjectName(QStringLiteral("label_19"));

        params_layout->setWidget(8, QFormLayout::LabelRole, label_19);

        label_20 = new QLabel(params_tab);
        label_20->setObjectName(QStringLiteral("label_20"));

        params_layout->setWidget(9, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(params_tab);
        label_21->setObjectName(QStringLiteral("label_21"));

        params_layout->setWidget(10, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(params_tab);
        label_22->setObjectName(QStringLiteral("label_22"));

        params_layout->setWidget(11, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(params_tab);
        label_23->setObjectName(QStringLiteral("label_23"));

        params_layout->setWidget(12, QFormLayout::LabelRole, label_23);

        label_24 = new QLabel(params_tab);
        label_24->setObjectName(QStringLiteral("label_24"));

        params_layout->setWidget(13, QFormLayout::LabelRole, label_24);

        doubleSpinBox_A_k = new QDoubleSpinBox(params_tab);
        doubleSpinBox_A_k->setObjectName(QStringLiteral("doubleSpinBox_A_k"));
        doubleSpinBox_A_k->setDecimals(0);
        doubleSpinBox_A_k->setMinimum(-1e+15);
        doubleSpinBox_A_k->setMaximum(1e+15);
        doubleSpinBox_A_k->setValue(1e+9);

        params_layout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_A_k);

        doubleSpinBox_E_a = new QDoubleSpinBox(params_tab);
        doubleSpinBox_E_a->setObjectName(QStringLiteral("doubleSpinBox_E_a"));
        doubleSpinBox_E_a->setDecimals(0);
        doubleSpinBox_E_a->setMinimum(-1e+10);
        doubleSpinBox_E_a->setMaximum(1e+11);
        doubleSpinBox_E_a->setSingleStep(10000);
        doubleSpinBox_E_a->setValue(4.2e+6);

        params_layout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_E_a);

        doubleSpinBox_G_t = new QDoubleSpinBox(params_tab);
        doubleSpinBox_G_t->setObjectName(QStringLiteral("doubleSpinBox_G_t"));
        doubleSpinBox_G_t->setDecimals(0);
        doubleSpinBox_G_t->setMinimum(-1e+16);
        doubleSpinBox_G_t->setMaximum(1e+16);
        doubleSpinBox_G_t->setSingleStep(1e+6);

        params_layout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_G_t);

        doubleSpinBox_C_pt = new QDoubleSpinBox(params_tab);
        doubleSpinBox_C_pt->setObjectName(QStringLiteral("doubleSpinBox_C_pt"));
        doubleSpinBox_C_pt->setMinimum(-100000);
        doubleSpinBox_C_pt->setMaximum(100000);
        doubleSpinBox_C_pt->setSingleStep(100);
        doubleSpinBox_C_pt->setValue(1464);

        params_layout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_C_pt);

        doubleSpinBox_T_s0 = new QDoubleSpinBox(params_tab);
        doubleSpinBox_T_s0->setObjectName(QStringLiteral("doubleSpinBox_T_s0"));
        doubleSpinBox_T_s0->setMaximum(10000);
        doubleSpinBox_T_s0->setSingleStep(10);
        doubleSpinBox_T_s0->setValue(300);

        params_layout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_T_s0);

        doubleSpinBox_T_s = new QDoubleSpinBox(params_tab);
        doubleSpinBox_T_s->setObjectName(QStringLiteral("doubleSpinBox_T_s"));
        doubleSpinBox_T_s->setMaximum(10000);
        doubleSpinBox_T_s->setSingleStep(10);
        doubleSpinBox_T_s->setValue(720);

        params_layout->setWidget(5, QFormLayout::FieldRole, doubleSpinBox_T_s);

        doubleSpinBox_T_max = new QDoubleSpinBox(params_tab);
        doubleSpinBox_T_max->setObjectName(QStringLiteral("doubleSpinBox_T_max"));
        doubleSpinBox_T_max->setMaximum(10000);
        doubleSpinBox_T_max->setSingleStep(10);
        doubleSpinBox_T_max->setValue(2372);

        params_layout->setWidget(6, QFormLayout::FieldRole, doubleSpinBox_T_max);

        doubleSpinBox_R_s = new QDoubleSpinBox(params_tab);
        doubleSpinBox_R_s->setObjectName(QStringLiteral("doubleSpinBox_R_s"));
        doubleSpinBox_R_s->setMaximum(10000);
        doubleSpinBox_R_s->setSingleStep(10);
        doubleSpinBox_R_s->setValue(250);

        params_layout->setWidget(7, QFormLayout::FieldRole, doubleSpinBox_R_s);

        doubleSpinBox_R_max = new QDoubleSpinBox(params_tab);
        doubleSpinBox_R_max->setObjectName(QStringLiteral("doubleSpinBox_R_max"));
        doubleSpinBox_R_max->setMaximum(10000);
        doubleSpinBox_R_max->setSingleStep(10);
        doubleSpinBox_R_max->setValue(363);

        params_layout->setWidget(8, QFormLayout::FieldRole, doubleSpinBox_R_max);

        doubleSpinBox_lambda = new QDoubleSpinBox(params_tab);
        doubleSpinBox_lambda->setObjectName(QStringLiteral("doubleSpinBox_lambda"));
        doubleSpinBox_lambda->setDecimals(5);
        doubleSpinBox_lambda->setMaximum(100);
        doubleSpinBox_lambda->setSingleStep(0.01);
        doubleSpinBox_lambda->setValue(0.23);

        params_layout->setWidget(9, QFormLayout::FieldRole, doubleSpinBox_lambda);

        doubleSpinBox_C_p = new QDoubleSpinBox(params_tab);
        doubleSpinBox_C_p->setObjectName(QStringLiteral("doubleSpinBox_C_p"));
        doubleSpinBox_C_p->setMaximum(10000);
        doubleSpinBox_C_p->setSingleStep(10);
        doubleSpinBox_C_p->setValue(1800);

        params_layout->setWidget(10, QFormLayout::FieldRole, doubleSpinBox_C_p);

        doubleSpinBox_p_k = new QDoubleSpinBox(params_tab);
        doubleSpinBox_p_k->setObjectName(QStringLiteral("doubleSpinBox_p_k"));
        doubleSpinBox_p_k->setMaximum(1e+10);
        doubleSpinBox_p_k->setSingleStep(1e+6);
        doubleSpinBox_p_k->setValue(1e+6);

        params_layout->setWidget(11, QFormLayout::FieldRole, doubleSpinBox_p_k);

        doubleSpinBox_q_r = new QDoubleSpinBox(params_tab);
        doubleSpinBox_q_r->setObjectName(QStringLiteral("doubleSpinBox_q_r"));

        params_layout->setWidget(12, QFormLayout::FieldRole, doubleSpinBox_q_r);

        doubleSpinBox_rho_t = new QDoubleSpinBox(params_tab);
        doubleSpinBox_rho_t->setObjectName(QStringLiteral("doubleSpinBox_rho_t"));
        doubleSpinBox_rho_t->setMaximum(10000);
        doubleSpinBox_rho_t->setSingleStep(10);
        doubleSpinBox_rho_t->setValue(1600);

        params_layout->setWidget(13, QFormLayout::FieldRole, doubleSpinBox_rho_t);

        params_tab_widget->addTab(params_tab, QString());
        grids_tab = new QWidget();
        grids_tab->setObjectName(QStringLiteral("grids_tab"));
        grids_layout = new QFormLayout(grids_tab);
        grids_layout->setObjectName(QStringLiteral("grids_layout"));
        label_11 = new QLabel(grids_tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        grids_layout->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(grids_tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        grids_layout->setWidget(1, QFormLayout::LabelRole, label_12);

        label_25 = new QLabel(grids_tab);
        label_25->setObjectName(QStringLiteral("label_25"));

        grids_layout->setWidget(2, QFormLayout::LabelRole, label_25);

        label_26 = new QLabel(grids_tab);
        label_26->setObjectName(QStringLiteral("label_26"));

        grids_layout->setWidget(3, QFormLayout::LabelRole, label_26);

        label_27 = new QLabel(grids_tab);
        label_27->setObjectName(QStringLiteral("label_27"));

        grids_layout->setWidget(4, QFormLayout::LabelRole, label_27);

        label_28 = new QLabel(grids_tab);
        label_28->setObjectName(QStringLiteral("label_28"));

        grids_layout->setWidget(5, QFormLayout::LabelRole, label_28);

        spinBox_n = new QSpinBox(grids_tab);
        spinBox_n->setObjectName(QStringLiteral("spinBox_n"));
        spinBox_n->setMinimum(2);
        spinBox_n->setMaximum(65536);
        spinBox_n->setValue(4096);

        grids_layout->setWidget(0, QFormLayout::FieldRole, spinBox_n);

        doubleSpinBox_x_0 = new QDoubleSpinBox(grids_tab);
        doubleSpinBox_x_0->setObjectName(QStringLiteral("doubleSpinBox_x_0"));

        grids_layout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_x_0);

        doubleSpinBox_x_1 = new QDoubleSpinBox(grids_tab);
        doubleSpinBox_x_1->setObjectName(QStringLiteral("doubleSpinBox_x_1"));
        doubleSpinBox_x_1->setDecimals(6);
        doubleSpinBox_x_1->setMaximum(1);
        doubleSpinBox_x_1->setSingleStep(0.001);
        doubleSpinBox_x_1->setValue(0.01);

        grids_layout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_x_1);

        doubleSpinBox_h = new QDoubleSpinBox(grids_tab);
        doubleSpinBox_h->setObjectName(QStringLiteral("doubleSpinBox_h"));
        doubleSpinBox_h->setDecimals(10);
        doubleSpinBox_h->setMaximum(1);
        doubleSpinBox_h->setSingleStep(0.001);
        doubleSpinBox_h->setValue(1);

        grids_layout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_h);

        doubleSpinBox_t_end = new QDoubleSpinBox(grids_tab);
        doubleSpinBox_t_end->setObjectName(QStringLiteral("doubleSpinBox_t_end"));
        doubleSpinBox_t_end->setDecimals(10);
        doubleSpinBox_t_end->setValue(1);

        grids_layout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_t_end);

        doubleSpinBox_tau = new QDoubleSpinBox(grids_tab);
        doubleSpinBox_tau->setObjectName(QStringLiteral("doubleSpinBox_tau"));
        doubleSpinBox_tau->setDecimals(10);
        doubleSpinBox_tau->setSingleStep(0.001);
        doubleSpinBox_tau->setValue(1e-6);

        grids_layout->setWidget(5, QFormLayout::FieldRole, doubleSpinBox_tau);

        params_tab_widget->addTab(grids_tab, QString());

        controls_layout->addWidget(params_tab_widget);

        buttons_widget = new QWidget(controls_widget);
        buttons_widget->setObjectName(QStringLiteral("buttons_widget"));
        buttons_layout = new QGridLayout(buttons_widget);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 9, 0, 9);
        button_run = new QPushButton(buttons_widget);
        button_run->setObjectName(QStringLiteral("button_run"));

        buttons_layout->addWidget(button_run, 0, 0, 1, 1);


        controls_layout->addWidget(buttons_widget);

        splitter->addWidget(controls_widget);

        central_layout->addWidget(splitter, 0, 0, 1, 1);

        PartialWindow->setCentralWidget(central_widget);

        retranslateUi(PartialWindow);

        params_tab_widget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PartialWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PartialWindow)
    {
        PartialWindow->setWindowTitle(QApplication::translate("PartialWindow", "BurnProblem", Q_NULLPTR));
        label->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">k</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>E<span style=\" vertical-align:sub;\">a</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>G<span style=\" vertical-align:sub;\">T</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>C<span style=\" vertical-align:sub;\">PT</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>T<span style=\" vertical-align:sub;\">S0</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>T<span style=\" vertical-align:sub;\">S</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>T<span style=\" vertical-align:sub;\">max</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>R<span style=\" vertical-align:sub;\">s</span></p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>R<span style=\" vertical-align:sub;\">max</span></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>lambda</p></body></html>", Q_NULLPTR));
        label_21->setText(QApplication::translate("PartialWindow", "<html><head/><body><p> C<span style=\" vertical-align:sub;\">P</span></p></body></html>", Q_NULLPTR));
        label_22->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>p<span style=\" vertical-align:sub;\">k</span></p></body></html>", Q_NULLPTR));
        label_23->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>q<span style=\" vertical-align:sub;\">r</span></p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>rho<span style=\" vertical-align:sub;\">T</span></p></body></html>", Q_NULLPTR));
        params_tab_widget->setTabText(params_tab_widget->indexOf(params_tab), QApplication::translate("PartialWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", Q_NULLPTR));
        label_11->setText(QApplication::translate("PartialWindow", "n", Q_NULLPTR));
        label_12->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>x<span style=\" vertical-align:sub;\">0</span>, \320\274</p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>x1, \320\274</p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>h, \320\274</p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>t<span style=\" vertical-align:sub;\">end</span>, \321\201</p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("PartialWindow", "tau, \321\201", Q_NULLPTR));
        params_tab_widget->setTabText(params_tab_widget->indexOf(grids_tab), QApplication::translate("PartialWindow", "\320\241\320\265\321\202\320\272\320\260", Q_NULLPTR));
        button_run->setText(QApplication::translate("PartialWindow", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PartialWindow: public Ui_PartialWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURN_PROBLEM_H
