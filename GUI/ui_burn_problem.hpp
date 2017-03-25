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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QLineEdit *lineEdit_A_k;
    QLabel *label_2;
    QLineEdit *lineEdit_E_a;
    QLabel *label_13;
    QLineEdit *lineEdit_G_t;
    QLabel *label_14;
    QLineEdit *lineEdit_C_pt;
    QLabel *label_15;
    QLineEdit *lineEdit_T_s0;
    QLabel *label_16;
    QLineEdit *lineEdit_T_s;
    QLabel *label_17;
    QLineEdit *lineEdit_T_max;
    QLabel *label_18;
    QLineEdit *lineEdit_R_s;
    QLabel *label_19;
    QLineEdit *lineEdit_R_max;
    QLabel *label_20;
    QLineEdit *lineEdit_lambda;
    QLabel *label_21;
    QLineEdit *lineEdit_C_p;
    QLabel *label_22;
    QLineEdit *lineEdit_p_k;
    QLabel *label_23;
    QLineEdit *lineEdit_q_r;
    QLabel *label_24;
    QLineEdit *lineEdit_rho_t;
    QWidget *grids_tab;
    QFormLayout *grids_layout;
    QLabel *label_11;
    QLineEdit *lineEdit_n;
    QLabel *label_12;
    QLineEdit *lineEdit_x_0;
    QLabel *label_25;
    QLineEdit *lineEdit_x_1;
    QLabel *label_26;
    QLineEdit *lineEdit_h;
    QLabel *label_27;
    QLineEdit *lineEdit_t_end;
    QLabel *label_28;
    QLineEdit *lineEdit_tau;
    QWidget *buttons_widget;
    QGridLayout *buttons_layout;
    QPushButton *run_button;

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

        lineEdit_A_k = new QLineEdit(params_tab);
        lineEdit_A_k->setObjectName(QStringLiteral("lineEdit_A_k"));

        params_layout->setWidget(0, QFormLayout::FieldRole, lineEdit_A_k);

        label_2 = new QLabel(params_tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        params_layout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_E_a = new QLineEdit(params_tab);
        lineEdit_E_a->setObjectName(QStringLiteral("lineEdit_E_a"));

        params_layout->setWidget(1, QFormLayout::FieldRole, lineEdit_E_a);

        label_13 = new QLabel(params_tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        params_layout->setWidget(2, QFormLayout::LabelRole, label_13);

        lineEdit_G_t = new QLineEdit(params_tab);
        lineEdit_G_t->setObjectName(QStringLiteral("lineEdit_G_t"));

        params_layout->setWidget(2, QFormLayout::FieldRole, lineEdit_G_t);

        label_14 = new QLabel(params_tab);
        label_14->setObjectName(QStringLiteral("label_14"));

        params_layout->setWidget(3, QFormLayout::LabelRole, label_14);

        lineEdit_C_pt = new QLineEdit(params_tab);
        lineEdit_C_pt->setObjectName(QStringLiteral("lineEdit_C_pt"));

        params_layout->setWidget(3, QFormLayout::FieldRole, lineEdit_C_pt);

        label_15 = new QLabel(params_tab);
        label_15->setObjectName(QStringLiteral("label_15"));

        params_layout->setWidget(4, QFormLayout::LabelRole, label_15);

        lineEdit_T_s0 = new QLineEdit(params_tab);
        lineEdit_T_s0->setObjectName(QStringLiteral("lineEdit_T_s0"));

        params_layout->setWidget(4, QFormLayout::FieldRole, lineEdit_T_s0);

        label_16 = new QLabel(params_tab);
        label_16->setObjectName(QStringLiteral("label_16"));

        params_layout->setWidget(5, QFormLayout::LabelRole, label_16);

        lineEdit_T_s = new QLineEdit(params_tab);
        lineEdit_T_s->setObjectName(QStringLiteral("lineEdit_T_s"));

        params_layout->setWidget(5, QFormLayout::FieldRole, lineEdit_T_s);

        label_17 = new QLabel(params_tab);
        label_17->setObjectName(QStringLiteral("label_17"));

        params_layout->setWidget(6, QFormLayout::LabelRole, label_17);

        lineEdit_T_max = new QLineEdit(params_tab);
        lineEdit_T_max->setObjectName(QStringLiteral("lineEdit_T_max"));

        params_layout->setWidget(6, QFormLayout::FieldRole, lineEdit_T_max);

        label_18 = new QLabel(params_tab);
        label_18->setObjectName(QStringLiteral("label_18"));

        params_layout->setWidget(7, QFormLayout::LabelRole, label_18);

        lineEdit_R_s = new QLineEdit(params_tab);
        lineEdit_R_s->setObjectName(QStringLiteral("lineEdit_R_s"));

        params_layout->setWidget(7, QFormLayout::FieldRole, lineEdit_R_s);

        label_19 = new QLabel(params_tab);
        label_19->setObjectName(QStringLiteral("label_19"));

        params_layout->setWidget(8, QFormLayout::LabelRole, label_19);

        lineEdit_R_max = new QLineEdit(params_tab);
        lineEdit_R_max->setObjectName(QStringLiteral("lineEdit_R_max"));

        params_layout->setWidget(8, QFormLayout::FieldRole, lineEdit_R_max);

        label_20 = new QLabel(params_tab);
        label_20->setObjectName(QStringLiteral("label_20"));

        params_layout->setWidget(9, QFormLayout::LabelRole, label_20);

        lineEdit_lambda = new QLineEdit(params_tab);
        lineEdit_lambda->setObjectName(QStringLiteral("lineEdit_lambda"));

        params_layout->setWidget(9, QFormLayout::FieldRole, lineEdit_lambda);

        label_21 = new QLabel(params_tab);
        label_21->setObjectName(QStringLiteral("label_21"));

        params_layout->setWidget(10, QFormLayout::LabelRole, label_21);

        lineEdit_C_p = new QLineEdit(params_tab);
        lineEdit_C_p->setObjectName(QStringLiteral("lineEdit_C_p"));

        params_layout->setWidget(10, QFormLayout::FieldRole, lineEdit_C_p);

        label_22 = new QLabel(params_tab);
        label_22->setObjectName(QStringLiteral("label_22"));

        params_layout->setWidget(11, QFormLayout::LabelRole, label_22);

        lineEdit_p_k = new QLineEdit(params_tab);
        lineEdit_p_k->setObjectName(QStringLiteral("lineEdit_p_k"));

        params_layout->setWidget(11, QFormLayout::FieldRole, lineEdit_p_k);

        label_23 = new QLabel(params_tab);
        label_23->setObjectName(QStringLiteral("label_23"));

        params_layout->setWidget(12, QFormLayout::LabelRole, label_23);

        lineEdit_q_r = new QLineEdit(params_tab);
        lineEdit_q_r->setObjectName(QStringLiteral("lineEdit_q_r"));

        params_layout->setWidget(12, QFormLayout::FieldRole, lineEdit_q_r);

        label_24 = new QLabel(params_tab);
        label_24->setObjectName(QStringLiteral("label_24"));

        params_layout->setWidget(13, QFormLayout::LabelRole, label_24);

        lineEdit_rho_t = new QLineEdit(params_tab);
        lineEdit_rho_t->setObjectName(QStringLiteral("lineEdit_rho_t"));

        params_layout->setWidget(13, QFormLayout::FieldRole, lineEdit_rho_t);

        params_tab_widget->addTab(params_tab, QString());
        grids_tab = new QWidget();
        grids_tab->setObjectName(QStringLiteral("grids_tab"));
        grids_layout = new QFormLayout(grids_tab);
        grids_layout->setObjectName(QStringLiteral("grids_layout"));
        label_11 = new QLabel(grids_tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        grids_layout->setWidget(0, QFormLayout::LabelRole, label_11);

        lineEdit_n = new QLineEdit(grids_tab);
        lineEdit_n->setObjectName(QStringLiteral("lineEdit_n"));

        grids_layout->setWidget(0, QFormLayout::FieldRole, lineEdit_n);

        label_12 = new QLabel(grids_tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        grids_layout->setWidget(1, QFormLayout::LabelRole, label_12);

        lineEdit_x_0 = new QLineEdit(grids_tab);
        lineEdit_x_0->setObjectName(QStringLiteral("lineEdit_x_0"));

        grids_layout->setWidget(1, QFormLayout::FieldRole, lineEdit_x_0);

        label_25 = new QLabel(grids_tab);
        label_25->setObjectName(QStringLiteral("label_25"));

        grids_layout->setWidget(2, QFormLayout::LabelRole, label_25);

        lineEdit_x_1 = new QLineEdit(grids_tab);
        lineEdit_x_1->setObjectName(QStringLiteral("lineEdit_x_1"));

        grids_layout->setWidget(2, QFormLayout::FieldRole, lineEdit_x_1);

        label_26 = new QLabel(grids_tab);
        label_26->setObjectName(QStringLiteral("label_26"));

        grids_layout->setWidget(3, QFormLayout::LabelRole, label_26);

        lineEdit_h = new QLineEdit(grids_tab);
        lineEdit_h->setObjectName(QStringLiteral("lineEdit_h"));

        grids_layout->setWidget(3, QFormLayout::FieldRole, lineEdit_h);

        label_27 = new QLabel(grids_tab);
        label_27->setObjectName(QStringLiteral("label_27"));

        grids_layout->setWidget(4, QFormLayout::LabelRole, label_27);

        lineEdit_t_end = new QLineEdit(grids_tab);
        lineEdit_t_end->setObjectName(QStringLiteral("lineEdit_t_end"));

        grids_layout->setWidget(4, QFormLayout::FieldRole, lineEdit_t_end);

        label_28 = new QLabel(grids_tab);
        label_28->setObjectName(QStringLiteral("label_28"));

        grids_layout->setWidget(5, QFormLayout::LabelRole, label_28);

        lineEdit_tau = new QLineEdit(grids_tab);
        lineEdit_tau->setObjectName(QStringLiteral("lineEdit_tau"));

        grids_layout->setWidget(5, QFormLayout::FieldRole, lineEdit_tau);

        params_tab_widget->addTab(grids_tab, QString());

        controls_layout->addWidget(params_tab_widget);

        buttons_widget = new QWidget(controls_widget);
        buttons_widget->setObjectName(QStringLiteral("buttons_widget"));
        buttons_layout = new QGridLayout(buttons_widget);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 9, 0, 9);
        run_button = new QPushButton(buttons_widget);
        run_button->setObjectName(QStringLiteral("run_button"));

        buttons_layout->addWidget(run_button, 0, 0, 1, 1);


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
        label_12->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>x<span style=\" vertical-align:sub;\">0</span>, \320\274\320\274</p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>x1, \320\274\320\274</p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>h, \320\274\320\274</p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>t<span style=\" vertical-align:sub;\">end</span>, \321\201</p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("PartialWindow", "tau, \321\201", Q_NULLPTR));
        params_tab_widget->setTabText(params_tab_widget->indexOf(grids_tab), QApplication::translate("PartialWindow", "\320\241\320\265\321\202\320\272\320\260", Q_NULLPTR));
        run_button->setText(QApplication::translate("PartialWindow", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PartialWindow: public Ui_PartialWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURN_PROBLEM_H
