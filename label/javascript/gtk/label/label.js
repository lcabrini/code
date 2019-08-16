imports.gi.versions.Gtk = "3.0";
const Gtk = imports.gi.Gtk;

Gtk.init(null)
let win = new Gtk.Window();
win.set_title("Label");
let label = new Gtk.Label({label: "Hello, world!"});
win.add(label);
win.connect("delete-event", () => Gtk.main_quit());
win.show_all()
Gtk.main()
