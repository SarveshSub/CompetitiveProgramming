// The Lost Cow

import java.util.*;
import java.io.*;

public class lostcow {

    public static void main(String [] args) throws Exception {

        Kattio io = new Kattio("lostcow");
        
        int x = io.nextInt();
        int y = io.nextInt();
        int step = 1;
        int currPosition = x;
        int totalDistance = 0;

        while(true) {
            int newPosition = x + step;
            if((y < x && newPosition <= y) || (y > x && newPosition >= y)) {
                totalDistance += Math.abs(currPosition - y);
                break;
            } else {
                totalDistance += Math.abs(currPosition - newPosition);
                currPosition = newPosition;
                step *= -2;
            }
        }

        io.println(totalDistance);
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
