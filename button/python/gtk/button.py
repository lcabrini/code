#! /usr/bin/env python3

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

window = Gtk.Window()
window.set_title("Button")
button = Gtk.Button(label="Click me!")
button.connect("clicked", lambda src: print("Button was clicked"))
window.add(button)
window.connect("destroy", Gtk.main_quit)
window.show_all()
Gtk.main()
