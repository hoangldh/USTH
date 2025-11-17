package Intro2Java;

import java.util.*;
public class Ex19 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        Random rand = new Random();

        System.out.println(rand.nextInt(n/2, n));
    }
}
