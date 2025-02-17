package Java.Minesweeper;

import java.awt.Color;
// import java.util.Map;
// import java.util.HashMap;

public final class Colors {
    
    /*
     * I'd like to map different numbers with different colors
     * Howver, bitch Map and HashMap do not want to cooperate 
     * put() method does not get recognized
     * Will need to read into it
     */

    
    /* Restrict instatiation */
    private Colors () {
    }

    public static final Color ms_blue = new Color(10, 10, 255);
    public static final Color ms_red = new Color(255, 10, 10);
    public static final Color ms_green = new Color(10, 255, 10);
    public static final Color ms_orange = new Color(247, 125, 10);
    public static final Color ms_pink = new Color(225, 20, 235);
    
}
