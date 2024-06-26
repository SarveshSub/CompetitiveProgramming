// The Bovine Shuffle

import java.util.*;
import java.io.*;

public class shuffle {

    public static void main(String [] args) throws Exception {

        Kattio io = new Kattio("shuffle");
        
        int n = io.nextInt();
        int[] shuffles = new int[n];
        for(int i = 0; i < n; i++) {
            shuffles[i] = io.nextInt();
        }
        int[] ids = new int[n];
        for(int i = 0; i < n; i++) {
            ids[i] = io.nextInt();
        }

        for(int i = 0; i < 3; i++) {
            for(int shuffle : shuffles) {

            }
        }

        for(int i : ids) {
            io.println(i);
        }
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
