package main

import (
    "fyne.io/fyne"
    "fyne.io/fyne/app"
)

func main() {
    a := app.New()
    w := a.NewWindow("Empty Window")
    w.Resize(fyne.NewSize(320, 200))
    w.ShowAndRun()
}
