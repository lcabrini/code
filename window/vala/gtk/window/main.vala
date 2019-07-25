using Gtk;

int main(string[] args) {
    Gtk.init(ref args);
    var window = new Window();
    window.title = "Empty Window";
    window.set_default_size(320, 200);
    window.destroy.connect(Gtk.main_quit);
    window.show_all();
    Gtk.main();

    return 0;
}
