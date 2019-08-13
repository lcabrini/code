#include <stdio.h>
#include <gtk/gtk.h>

#define WINDOW_TITLE "Button"
#define BUTTON_LABEL "Click me!"

static void clicked_cb(GtkButton *, gpointer);

int main(int argc, char *argv[])
{
    GtkWidget *w;
    GtkWidget *b;

    gtk_init(&argc, &argv);
    w = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(w), WINDOW_TITLE);
    gtk_container_set_border_width(GTK_CONTAINER(w), 6);
    g_signal_connect(w, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    b = gtk_button_new_with_label(BUTTON_LABEL);
    g_signal_connect(b, "clicked", G_CALLBACK(clicked_cb), NULL);
    gtk_container_add(GTK_CONTAINER(w), b);
    gtk_widget_show_all(w);
    gtk_main();

    return 0;
}

static void clicked_cb(GtkButton *button, gpointer data)
{
    puts("The button was clicked");
}
