using Gtk;

int main(string[] args) {
    Gtk.init(ref args);

    var builder = new Builder();
    try {
        builder.add_from_file("window.glade");
    } catch (Error e) {
       print("%s\n", e.message);
       return 1;
    }
    builder.connect_signals(null);
    var window = builder.get_object("window") as Window;
    window.show_all();
    Gtk.main();

    return 0;
}
