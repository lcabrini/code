imports.gi.versions.Gtk = "3.0";
const Gtk = imports.gi.Gtk;
Gtk.init(null);

let win = new Gtk.Window();
win.set_title("Empty Window");
win.set_default_size(320, 200);
win.connect("delete-event", () => Gtk.main_quit());
win.show_all();
Gtk.main();
