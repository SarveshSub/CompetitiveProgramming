// Mixing Milk

import java.util.*;
import java.io.*;

public class mixing_milk {
    public static void main(String [] args) throws Exception {

        Kattio io = new Kattio("Bronze/Simulation/mixmilk");
//        Kattio io = new Kattio("mixmilk");

        int c1 = io.nextInt();
        int m1 = io.nextInt();
        int c2 = io.nextInt();
        int m2 = io.nextInt();
        int c3 = io.nextInt();
        int m3 = io.nextInt();
        int whoPours = 1;

        for(int i = 0; i < 100; i++) {
            if(whoPours == 1) {
                int maxPour = Math.min(Math.max(m1, 0), c2 - m2);
                m1 -= maxPour;
                m2 += maxPour;
                whoPours = 2;
            } else if(whoPours == 2) {
                int maxPour = Math.min(Math.max(m2, 0), c3 - m3);
                m2 -= maxPour;
                m3 += maxPour;
                whoPours = 3;
            } else {
                int maxPour = Math.min(Math.max(m3, 0), c1 - m1);
                m3 -= maxPour;
                m1 += maxPour;
                whoPours = 1;
            }
        }

        io.println(m1);
        io.println(m2);
        io.println(m3);
        io.close();

    }

    static class Kattio extends PrintWriter {
        private BufferedReader r;
        private StringTokenizer st;
        // standard input
        public Kattio() { this(System.in, System.out); }
        public Kattio(InputStream i, OutputStream o) {
            super(o);
            r = new BufferedReader(new InputStreamReader(i));
        }

        // USACO-style file input
        public Kattio(String problemName) throws IOException {
            super(problemName + ".out");
            r = new BufferedReader(new FileReader(problemName + ".in"));
        }

        // returns null if no more input
        public String next() {
            try {
                while (st == null || !st.hasMoreTokens())
                    st = new StringTokenizer(r.readLine());
                return st.nextToken();
            } catch (Exception e) { }
            return null;
        }

        public int nextInt() { return Integer.parseInt(next()); }
        public double nextDouble() { return Double.parseDouble(next()); }
        public long nextLong() { return Long.parseLong(next()); }
    }
}
