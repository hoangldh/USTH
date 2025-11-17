package Intro2Java;

import java.util.*;

public class Ex25 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args [0]);
        Map<Integer, Integer> frequency = new HashMap<>();

        for (int i = 1; i <= n; i++) {
            int x = Integer.parseInt(args[i]);
            frequency.put(x, frequency.getOrDefault(x, 0) + 1);
        }

        int freqValue = -1;
        int count = -1;
        
        for (Map.Entry<Integer, Integer> entry : frequency.entrySet()) {
            int value = entry.getKey();
            int tempCount = entry.getValue();

            if (tempCount > count ||
                    tempCount == count && value < freqValue) {
                count = tempCount;
                freqValue = value;
            }
        }

        System.out.println("Most freq number = " + freqValue);
        System.out.println("Count = " + count);
    }
}
