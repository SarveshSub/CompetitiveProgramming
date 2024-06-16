// Subarray Sums II

import java.util.*;
import java.io.*;

public class subarray_sums_ii {
    public static void main(String [] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int target = input.nextInt();
        HashMap<Integer, Integer> sums = new HashMap<>();
        sums.put(0, 1);
        int sum = 0;
        int count = 0;

        for(int i = 0; i < n; i++) {
            sum += input.nextInt();
            if(sums.containsKey(sum - target)) {
                count += sums.get(sum - target);
            }
            int currFreq = sums.getOrDefault(sum - target, 0);
            sums.put(sum, currFreq + 1);
        }

        System.out.println(count);

    }
}
