package Intro2Java;

import java.util.Arrays;
import java.util.Random;

public class Ex18 {
    public static void main(String[] args) {
        double[] list = new double[10];
        Random rand = new Random();

        for (int i = 0; i < 10; i++) {
            list[i] = rand.nextDouble(0, 1);
        }

        // mean
        double sum = 0;
        for (double v : list) {
            sum += v;
        }
        double mean = sum / list.length;
        System.out.println("Mean = " + mean);

        // median
        Arrays.sort(list);
        double median = (list[4] + list[5]) / 2;
        System.out.println("Median = " + median);
    }
}
