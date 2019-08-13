#include "window.h"

Window::Window(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("Button");
    m_button = new QPushButton("Click me!");
    connect(m_button, &QPushButton::clicked, [this]() {
        std::cout << "Button was clicked!" << std::endl;
    });
    setCentralWidget(m_button);
}
