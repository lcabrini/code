#include "ui.h"

GtkWidget *create_window()
{
    GtkWidget *w;

    w = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(w), TITLE);
    gtk_window_set_default_size(GTK_WINDOW(w), WIDTH, HEIGHT);
    g_signal_connect(w, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    return w;
}
