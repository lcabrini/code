#include <gtk/gtk.h>

#define TITLE "Empty Window"
#define WIDTH 320
#define HEIGHT 200

int main(int argc, char *argv[])
{
    GtkWidget *w;

    gtk_init(&argc, &argv);
    w = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(w), TITLE);
    gtk_window_set_default_size(GTK_WINDOW(w), WIDTH, HEIGHT);
    g_signal_connect(w, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(w);
    gtk_main();

    return 0;
}
