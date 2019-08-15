#! /usr/bin/env ruby

require 'gtk3'

window = Gtk::Window.new("Empty Window")
window.set_default_size(320, 200)
window.signal_connect("destroy") { Gtk.main_quit }
window.show_all
Gtk.main
