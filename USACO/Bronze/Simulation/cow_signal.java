// cow_signal

import java.util.*;
import java.io.*;

public class cow_signal {

    public static void main(String [] args) throws Exception {

        Kattio io = new Kattio("cowsignal");
        
        int m = io.nextInt();
        int n = io.nextInt();
        int k = io.nextInt();

        String[] grid = new String[m];
        for(int i = 0; i < m; i++) {
            grid[i] = io.next();
        }

        int newM = m * k;
        int newN = n * k;
        String[] result = new String[newM];
        for(int i = 0; i < newM; i++) {
            String curr = new String(new char[newN]).replace('\0', '.');
            char[] currStr = curr.toCharArray();
            int row = i / k;
            for(int j = 0; j < newN; j++) {
                int col = j / k;
                currStr[j] = grid[row].charAt(col);
            }
            curr = String.valueOf(currStr);
            result[i] = curr;
        }

        for(String s : result) {
            io.println(s);
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
