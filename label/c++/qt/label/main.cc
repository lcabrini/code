#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Label");

    QHBoxLayout layout;
    window.setLayout(&layout);

    QLabel label("Hello, world!");
    label.setAlignment(Qt::AlignCenter);
    layout.addWidget(&label);

    window.show();
    return app.exec();
}
