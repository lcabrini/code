package main

import (
    "log"
    "github.com/gotk3/gotk3/gtk"
)

func main() {
    gtk.Init(nil)
    w, err := gtk.WindowNew(gtk.WINDOW_TOPLEVEL)
    if err != nil {
        log.Fatal("couldn't create window:", err)
    }
    w.SetTitle("Label")
    w.Connect("destroy", func() {
        gtk.MainQuit()
    })
    l, err := gtk.LabelNew("Hello, world!")
    if err != nil {
        log.Fatal("couldn't create label:", err)
    }
    w.Add(l)
    w.ShowAll()
    gtk.Main()
}
