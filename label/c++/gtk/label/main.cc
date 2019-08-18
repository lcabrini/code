#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <gtkmm/label.h>

#define TITLE "Label"
#define APP_ID "com.github.lcabrini.gtkmm.label"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, APP_ID);
    Gtk::Window window;
    window.set_title(TITLE);
    Gtk::Label label = Gtk::Label("Hello, world!");
    window.add(label);
    window.show_all_children();
    
    return app->run(window);
}
