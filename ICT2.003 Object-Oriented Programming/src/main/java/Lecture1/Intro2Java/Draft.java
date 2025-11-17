package Lecture1.Intro2Java;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;

public class Draft {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        Map<Integer, Integer> frequency = new HashMap<>();

        for (int i = 1; i <= n; i++) {
            int x = Integer.parseInt(args[i]);
            frequency.put(x, frequency.getOrDefault(x, 0) + 1);
        }

        int bestVal = Integer.MAX_VALUE;
        int bestCnt = -1;

        for (Map.Entry<Integer, Integer> entry : frequency.entrySet()) {
            int value = entry.getKey();
            int cnt = entry.getValue();

            if (cnt > bestCnt || (cnt == bestCnt && value < bestVal)) {
                bestCnt = cnt;
                bestVal = value;
            }
        }

        System.out.println("Most freq num: " + bestVal);
        System.out.println("Count: " + bestCnt);
    }
}