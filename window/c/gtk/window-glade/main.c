#include <gtk/gtk.h>

#define BUILDER_FILE "window.glade"

void die(GError *error);

int main(int argc, char *argv[])
{
    GtkBuilder *b;
    GtkWidget *w;
    GError *e = NULL;

    gtk_init(&argc, &argv);
    b = gtk_builder_new();
    gtk_builder_add_from_file(b, BUILDER_FILE, &e);
    if (e) die(e);

    w = GTK_WIDGET(gtk_builder_get_object(b, "window"));
    gtk_builder_connect_signals(b, NULL);

    g_object_unref(b);
    gtk_widget_show_all(w);
    gtk_main();

    return 0;
}

void die(GError *error)
{
    fprintf(stderr, "Cannot read glade file: %s\n", error->message);
    g_error_free(error);
    exit(1);
}
