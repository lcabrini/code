#! /usr/bin/env ruby

require 'gtk3'

window = Gtk::Window.new("Label")
label = Gtk::Label.new("Hello, world!")
window.add(label)
window.signal_connect("destroy") { Gtk.main_quit }
window.show_all
Gtk.main
