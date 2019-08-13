#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QPushButton>

namespace ui
{
    class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

    public:
        explicit Window(QWidget *parent=0);

    private:
        QPushButton *m_button;
};

#endif // WINDOW_H
