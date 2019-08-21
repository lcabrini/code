package main

import (
    "log"
    "github.com/gotk3/gotk3/gtk"
)

func main() {
    gtk.Init(nil)
    w, err := gtk.WindowNew(gtk.WINDOW_TOPLEVEL)
    if err != nil {
        log.Fatal("Unable to create window:", err)
    }
    w.SetTitle("Empty Window")
    w.SetDefaultSize(320, 200)
    w.Connect("destroy", func() {
        gtk.MainQuit()
    })
    w.ShowAll()
    gtk.Main()
}
