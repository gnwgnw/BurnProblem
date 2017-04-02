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
#include <QtWidgets/QFrame>
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
    QLineEdit *edit_A_k;
    QLineEdit *edit_E_a;
    QLineEdit *edit_G_t;
    QLineEdit *edit_C_pt;
    QLineEdit *edit_T_s0;
    QLineEdit *edit_T_s;
    QLineEdit *edit_T_max;
    QLineEdit *edit_R_s;
    QLineEdit *edit_R_max;
    QLineEdit *edit_lambda;
    QLineEdit *edit_C_p;
    QLineEdit *edit_p_k;
    QLineEdit *edit_q_r;
    QLineEdit *edit_rho_t;
    QWidget *grids_tab;
    QFormLayout *grids_layout;
    QLabel *label_11;
    QLineEdit *edit_n;
    QLabel *label_25;
    QLineEdit *edit_x_1;
    QLabel *label_26;
    QLineEdit *edit_h;
    QLabel *label_27;
    QLineEdit *edit_t_end;
    QLabel *label_28;
    QLineEdit *edit_tau;
    QLabel *label_4;
    QLineEdit *edit_update_period;
    QLabel *label_5;
    QLineEdit *edit_eps_u;
    QFrame *line;
    QWidget *info_widget;
    QGridLayout *info_layout;
    QLabel *label_3;
    QLineEdit *edit_u;
    QWidget *buttons_widget;
    QGridLayout *buttons_layout;
    QPushButton *button_run;
    QPushButton *button_g_reset;

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

        edit_A_k = new QLineEdit(params_tab);
        edit_A_k->setObjectName(QStringLiteral("edit_A_k"));

        params_layout->setWidget(0, QFormLayout::FieldRole, edit_A_k);

        edit_E_a = new QLineEdit(params_tab);
        edit_E_a->setObjectName(QStringLiteral("edit_E_a"));

        params_layout->setWidget(1, QFormLayout::FieldRole, edit_E_a);

        edit_G_t = new QLineEdit(params_tab);
        edit_G_t->setObjectName(QStringLiteral("edit_G_t"));

        params_layout->setWidget(2, QFormLayout::FieldRole, edit_G_t);

        edit_C_pt = new QLineEdit(params_tab);
        edit_C_pt->setObjectName(QStringLiteral("edit_C_pt"));

        params_layout->setWidget(3, QFormLayout::FieldRole, edit_C_pt);

        edit_T_s0 = new QLineEdit(params_tab);
        edit_T_s0->setObjectName(QStringLiteral("edit_T_s0"));

        params_layout->setWidget(4, QFormLayout::FieldRole, edit_T_s0);

        edit_T_s = new QLineEdit(params_tab);
        edit_T_s->setObjectName(QStringLiteral("edit_T_s"));

        params_layout->setWidget(5, QFormLayout::FieldRole, edit_T_s);

        edit_T_max = new QLineEdit(params_tab);
        edit_T_max->setObjectName(QStringLiteral("edit_T_max"));

        params_layout->setWidget(6, QFormLayout::FieldRole, edit_T_max);

        edit_R_s = new QLineEdit(params_tab);
        edit_R_s->setObjectName(QStringLiteral("edit_R_s"));

        params_layout->setWidget(7, QFormLayout::FieldRole, edit_R_s);

        edit_R_max = new QLineEdit(params_tab);
        edit_R_max->setObjectName(QStringLiteral("edit_R_max"));

        params_layout->setWidget(8, QFormLayout::FieldRole, edit_R_max);

        edit_lambda = new QLineEdit(params_tab);
        edit_lambda->setObjectName(QStringLiteral("edit_lambda"));

        params_layout->setWidget(9, QFormLayout::FieldRole, edit_lambda);

        edit_C_p = new QLineEdit(params_tab);
        edit_C_p->setObjectName(QStringLiteral("edit_C_p"));

        params_layout->setWidget(10, QFormLayout::FieldRole, edit_C_p);

        edit_p_k = new QLineEdit(params_tab);
        edit_p_k->setObjectName(QStringLiteral("edit_p_k"));

        params_layout->setWidget(11, QFormLayout::FieldRole, edit_p_k);

        edit_q_r = new QLineEdit(params_tab);
        edit_q_r->setObjectName(QStringLiteral("edit_q_r"));

        params_layout->setWidget(12, QFormLayout::FieldRole, edit_q_r);

        edit_rho_t = new QLineEdit(params_tab);
        edit_rho_t->setObjectName(QStringLiteral("edit_rho_t"));

        params_layout->setWidget(13, QFormLayout::FieldRole, edit_rho_t);

        params_tab_widget->addTab(params_tab, QString());
        grids_tab = new QWidget();
        grids_tab->setObjectName(QStringLiteral("grids_tab"));
        grids_layout = new QFormLayout(grids_tab);
        grids_layout->setObjectName(QStringLiteral("grids_layout"));
        label_11 = new QLabel(grids_tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        grids_layout->setWidget(0, QFormLayout::LabelRole, label_11);

        edit_n = new QLineEdit(grids_tab);
        edit_n->setObjectName(QStringLiteral("edit_n"));

        grids_layout->setWidget(0, QFormLayout::FieldRole, edit_n);

        label_25 = new QLabel(grids_tab);
        label_25->setObjectName(QStringLiteral("label_25"));

        grids_layout->setWidget(1, QFormLayout::LabelRole, label_25);

        edit_x_1 = new QLineEdit(grids_tab);
        edit_x_1->setObjectName(QStringLiteral("edit_x_1"));

        grids_layout->setWidget(1, QFormLayout::FieldRole, edit_x_1);

        label_26 = new QLabel(grids_tab);
        label_26->setObjectName(QStringLiteral("label_26"));

        grids_layout->setWidget(2, QFormLayout::LabelRole, label_26);

        edit_h = new QLineEdit(grids_tab);
        edit_h->setObjectName(QStringLiteral("edit_h"));

        grids_layout->setWidget(2, QFormLayout::FieldRole, edit_h);

        label_27 = new QLabel(grids_tab);
        label_27->setObjectName(QStringLiteral("label_27"));

        grids_layout->setWidget(3, QFormLayout::LabelRole, label_27);

        edit_t_end = new QLineEdit(grids_tab);
        edit_t_end->setObjectName(QStringLiteral("edit_t_end"));

        grids_layout->setWidget(3, QFormLayout::FieldRole, edit_t_end);

        label_28 = new QLabel(grids_tab);
        label_28->setObjectName(QStringLiteral("label_28"));

        grids_layout->setWidget(4, QFormLayout::LabelRole, label_28);

        edit_tau = new QLineEdit(grids_tab);
        edit_tau->setObjectName(QStringLiteral("edit_tau"));

        grids_layout->setWidget(4, QFormLayout::FieldRole, edit_tau);

        label_4 = new QLabel(grids_tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        grids_layout->setWidget(6, QFormLayout::LabelRole, label_4);

        edit_update_period = new QLineEdit(grids_tab);
        edit_update_period->setObjectName(QStringLiteral("edit_update_period"));

        grids_layout->setWidget(6, QFormLayout::FieldRole, edit_update_period);

        label_5 = new QLabel(grids_tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        grids_layout->setWidget(7, QFormLayout::LabelRole, label_5);

        edit_eps_u = new QLineEdit(grids_tab);
        edit_eps_u->setObjectName(QStringLiteral("edit_eps_u"));

        grids_layout->setWidget(7, QFormLayout::FieldRole, edit_eps_u);

        line = new QFrame(grids_tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        grids_layout->setWidget(5, QFormLayout::SpanningRole, line);

        params_tab_widget->addTab(grids_tab, QString());

        controls_layout->addWidget(params_tab_widget);

        info_widget = new QWidget(controls_widget);
        info_widget->setObjectName(QStringLiteral("info_widget"));
        info_layout = new QGridLayout(info_widget);
        info_layout->setObjectName(QStringLiteral("info_layout"));
        label_3 = new QLabel(info_widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        info_layout->addWidget(label_3, 0, 0, 1, 1);

        edit_u = new QLineEdit(info_widget);
        edit_u->setObjectName(QStringLiteral("edit_u"));

        info_layout->addWidget(edit_u, 0, 1, 1, 1);


        controls_layout->addWidget(info_widget);

        buttons_widget = new QWidget(controls_widget);
        buttons_widget->setObjectName(QStringLiteral("buttons_widget"));
        buttons_layout = new QGridLayout(buttons_widget);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 9, 0, 9);
        button_run = new QPushButton(buttons_widget);
        button_run->setObjectName(QStringLiteral("button_run"));

        buttons_layout->addWidget(button_run, 0, 0, 1, 1);

        button_g_reset = new QPushButton(buttons_widget);
        button_g_reset->setObjectName(QStringLiteral("button_g_reset"));

        buttons_layout->addWidget(button_g_reset, 1, 0, 1, 1);


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
        label_25->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>x1, \320\274</p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>h, \320\274</p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("PartialWindow", "<html><head/><body><p>t<span style=\" vertical-align:sub;\">end</span>, \321\201</p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("PartialWindow", "tau, \321\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("PartialWindow", "Upd", Q_NULLPTR));
        label_5->setText(QApplication::translate("PartialWindow", "eps", Q_NULLPTR));
        params_tab_widget->setTabText(params_tab_widget->indexOf(grids_tab), QApplication::translate("PartialWindow", "\320\241\320\265\321\202\320\272\320\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("PartialWindow", "u, \320\274/\321\201", Q_NULLPTR));
        button_run->setText(QApplication::translate("PartialWindow", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        button_g_reset->setText(QApplication::translate("PartialWindow", "\320\241\320\261\321\200\320\276\321\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PartialWindow: public Ui_PartialWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURN_PROBLEM_H
