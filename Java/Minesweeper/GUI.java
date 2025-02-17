package Java.Minesweeper;
import javax.swing.JFrame;
// import javax.swing.JButton;
// import javax.swing.JTextField;
import java.awt.GridLayout;

public class GUI extends JFrame{
    private void setProperties(int width, int heigth){    
        this.setTitle("Minesweeper");
        this.setSize(400, 400);
        this.setVisible(true);
        this.setLayout(new GridLayout(width, heigth));
    }

    private void setWidgets() {
        Cell test = new Cell(2);
        this.add(test);
    }
    
    public GUI() {
        this.setProperties(10, 10); 
        this.setWidgets();
    }
}