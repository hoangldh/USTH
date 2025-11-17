package Intro2Java;

public class Ex23 {
    public static void main(String[] args) {
        double a = Double.parseDouble(args[0]);
        double b = Double.parseDouble(args[1]);
        double c = Double.parseDouble(args[2]);

        double max = Math.max(a, Math.max(b,c));
        double min = Math.min(a, Math.min(b,c));

        System.out.println("Max = " + max);
        System.out.println("Min = " + min);
    }
}
