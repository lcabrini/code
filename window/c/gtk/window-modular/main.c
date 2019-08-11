#include "main.h"

int main(int argc, char *argv[])
{
    GtkWidget *w;

    gtk_init(&argc, &argv);
    w = create_window();
    gtk_widget_show_all(w);
    gtk_main();

    return 0;
}
