using Gtk;

public class WindowApp
{
    public static void Main(string[] args)
    {
        Application.Init();
        Window window = new Window("Empty Window");
        window.SetDefaultSize(320, 200);
        window.DeleteEvent += delegate { Application.Quit(); };
        window.Show();
        Application.Run();
    }
}
