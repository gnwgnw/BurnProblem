#include "ui_main_form.hpp"

int
main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	QMainWindow main;
	Ui::MainWindow ui;
	ui.setupUi(&main);

	main.show();

	return app.exec();
}