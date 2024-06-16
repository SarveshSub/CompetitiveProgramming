// Why Did The Cow Cross the Road II

import java.util.*;
import java.io.*;

public class why_did_the_cow_cross_the_road_ii {
    public static void main(String [] args) throws IOException {

        Scanner input = new Scanner(new File("maxcross.in"));
        int n = Integer.parseInt(input.next());
        int k = Integer.parseInt(input.next());
        int b = Integer.parseInt(input.next());
        input.nextLine();

        int[] broken = new int[n];
        Arrays.fill(broken, 0);
        for(int i = 0; i < b; i++) {
            int curr = Integer.parseInt(input.nextLine());
            broken[curr-1] = 1;
        }

        int[] prefix = new int[n];
        prefix[0] = (broken[0] == 1) ? 1 : 0;
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + broken[i];
        }

        int result = Integer.MAX_VALUE;
        for(int i = 0; i <= n - k; i++) {
            result = Math.min(result, prefix[i + k - 1] - prefix[i]);
        }

        PrintWriter out = new PrintWriter(new FileWriter("maxcross.out"));
        out.println(result);
        out.close();

    }
}

// n = 10, k = 5
// --B--    5
// --B--    4
// -----    3
// -----    3
// -----    3
// --B--    3
// -----    2
// -----    2
// --B--    2
// --B--    1


