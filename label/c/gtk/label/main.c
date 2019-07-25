#include <gtk/gtk.h>

#define WINDOW_TITLE "Label"
#define LABEL_TEXT "Hello, world!"

int main(int argc, char *argv[])
{
    GtkWidget *w;
    GtkWidget *l;

    gtk_init(&argc, &argv);
    w = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(w), WINDOW_TITLE);
    l = gtk_label_new("Hello, world!");
    gtk_container_add(GTK_CONTAINER(w), l);
    g_signal_connect(w, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(w);
    gtk_main();

    return 0;
}
