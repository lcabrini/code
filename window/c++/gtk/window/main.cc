#include <gtkmm/application.h>
#include <gtkmm/window.h>

#define TITLE "Empty Window"
#define WIDTH 320
#define HEIGHT 200
#define APP_ID "com.github.lcabrini.gtkmm.window"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, APP_ID);
    Gtk::Window window;
    window.set_title(TITLE);
    window.set_default_size(WIDTH, HEIGHT);
    
    return app->run(window);
}
