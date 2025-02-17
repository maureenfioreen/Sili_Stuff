package Java.Minesweeper;

import javax.swing.JButton;

/* Own modules */

public class Cell extends JButton{
    public Cell (int numberOfMines) {
        this.setText(String.valueOf(numberOfMines));
    }
}