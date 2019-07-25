import gtk.MainWindow;
import gtk.Main;

void main(string[] args)
{
    Main.init(args);
    MainWindow window = new MainWindow("Empty Window");
    window.setDefaultSize(320, 200);
    window.showAll();
    Main.run();
}
