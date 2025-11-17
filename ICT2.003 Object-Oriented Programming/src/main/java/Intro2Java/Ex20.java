package Intro2Java;

public class Ex20 {
    public static void main(String[] args) {
        float C = Float.parseFloat(args[0]);
        float F = C*9/5 + 32;

        System.out.println("C = " + C);
        System.out.println("F = " + F);
    }
}
