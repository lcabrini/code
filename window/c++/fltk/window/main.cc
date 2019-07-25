#include <FL/Fl.h>
#include <FL/Fl_Window.h>

#define TITLE "Empty Window"
#define WIDTH 320
#define HEIGHT 200

int main(int argc, char *argv[])
{
    Fl_Window *window = new Fl_Window(WIDTH, HEIGHT);
    window->label(TITLE);
    window->end();
    window->show(argc, argv);
    return Fl::run();
}
