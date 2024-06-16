// Hoof, Paper, Scissors

import java.util.*;
import java.io.*;

public class hoof_paper_scissors {
    public static void main(String [] args) throws Exception {

        Scanner input = new Scanner(new File("hps.in"));

        int n = Integer.parseInt(input.nextLine());
        int [] hPrefix = new int[n + 1];
        hPrefix[0] = 0;
        int [] pPrefix = new int[n + 1];
        pPrefix[0] = 0;
        int [] sPrefix = new int[n + 1];
        sPrefix[0] = 0;

        for(int i = 1; i <= n; i++) {
            char side = input.nextLine().charAt(0);

            hPrefix[i] = hPrefix[i-1];
            pPrefix[i] = pPrefix[i-1];
            sPrefix[i] = sPrefix[i-1];

            if(side == 'H') pPrefix[i]++;
            else if(side == 'P') sPrefix[i]++;
            else hPrefix[i]++;
        }

        int maxWins = 0;
        for(int i = 1; i <= n; i++) {
            int initialWins = Math.max(hPrefix[i], Math.max(pPrefix[i], sPrefix[i]));
            int laterWins = Math.max(hPrefix[n] - hPrefix[i], Math.max(pPrefix[n] - pPrefix[i], sPrefix[n] - sPrefix[i]));
            maxWins = Math.max(maxWins, initialWins + laterWins);
        }

        PrintWriter out = new PrintWriter(new FileWriter("hps.out"));
        out.println(maxWins);
        out.close();

    }
}
