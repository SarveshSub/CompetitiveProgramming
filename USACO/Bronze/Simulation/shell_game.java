// Shell Game

import java.util.*;
import java.io.*;

public class shell_game {
    public static void main(String [] args) throws Exception {

        Scanner input = new Scanner(new File("Bronze/Simulation/shell.in"));
//        Scanner input = new Scanner(new File("shell.in"));

        int initOne = 0, shellFromOne = 1;
        int initTwo = 0, shellFromTwo = 2;
        int initThree = 0, shellFromThree = 3;
        int swaps = Integer.parseInt(input.next());
        input.nextLine();

        for(int i = 0; i < swaps; i++) {
            int src = Integer.parseInt(input.next());
            int dest = Integer.parseInt(input.next());
            int guess = Integer.parseInt(input.next());
            if(i < swaps - 1) input.nextLine();

            if(shellFromOne == src || shellFromOne == dest) {
                shellFromOne = (shellFromOne == src) ? dest : src;
            }
            if(guess == shellFromOne) initOne++;

            if(shellFromTwo == src || shellFromTwo == dest) {
                shellFromTwo = (shellFromTwo == src) ? dest : src;
            }
            if(guess == shellFromTwo) initTwo++;

            if(shellFromThree == src || shellFromThree == dest) {
                shellFromThree = (shellFromThree == src) ? dest : src;
            }
            if(guess == shellFromThree) initThree++;
        }

        PrintWriter out = new PrintWriter(new FileWriter("Bronze/Simulation/shell.out"));
//        PrintWriter out = new PrintWriter(new FileWriter("shell.out"));
        out.println(Math.max(initOne, Math.max(initTwo, initThree)));
        out.close();

    }
}
