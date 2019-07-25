#! /usr/bin/env python3

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

window = Gtk.Window()
window.set_title("Empty Window")
window.set_default_size(320, 200)
window.connect("delete-event", Gtk.main_quit)
window.show()
Gtk.main()
