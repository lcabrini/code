#! /usr/bin/env python3

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

window = Gtk.Window()
window.set_title("Label")
label = Gtk.Label.new("Hello, world!")
window.add(label)
window.connect("delete-event", Gtk.main_quit)
window.show_all()
Gtk.main()
