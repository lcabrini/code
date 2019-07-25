using System.Windows.Forms;
using System.Drawing;

public class WindowApp
{
    public static void Main(string[] args)
    {
        Form window = new Form();
        window.Text = "Empty Window";
        window.Size = new Size(320, 200);
        Application.Run(window);
    }
}
