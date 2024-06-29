// Speeding ticket

import java.util.*;
import java.io.*;

public class speeding {

    public static void main(String [] args) throws Exception {

        Kattio io = new Kattio("speeding");
        
        int n = io.nextInt();
        int m = io.nextInt();

        int[] speedLimits = new int[100];
        int mileMarker = 0;
        for(int i = 0; i < n; i++) {
            int miles = io.nextInt();
            int speed = io.nextInt();
            for(int j = mileMarker; j < miles + mileMarker; j++) {
                speedLimits[j] = speed;
            }
            mileMarker += miles;
        }

        int[] cowSpeeds = new int[100];
        mileMarker = 0;
        for(int i = 0; i < m; i++) {
            int miles = io.nextInt();
            int speed = io.nextInt();
            for(int j = mileMarker; j < miles + mileMarker; j++) {
                cowSpeeds[j] = speed;
            }
            mileMarker += miles;
        }

        int maxDiff = 0;
        for(int i = 0; i < 100; i++) {
            maxDiff = Math.max(maxDiff, Math.max(0, cowSpeeds[i] - speedLimits[i]));
        }

        io.println(maxDiff);
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

// 0       40          90     100
// 0       40     60          100
