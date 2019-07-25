import javax.swing.JFrame;

public class Window {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setTitle("Empty Window");
        frame.setSize(320, 200);
        frame.setVisible(true);
    }
}
