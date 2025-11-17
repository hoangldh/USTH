package Intro2Java;

public class Ex17 {
    public static void main(String[] args) {
        double a = Double.parseDouble(args[0]);
        double b = Double.parseDouble(args[1]);

        if (a == 0) {
            if (b == 0) {
                System.out.println ("Infinite solution");
            }
            else {
                System.out.println("No solutions");
            }
        }
        else {
            System.out.println((double) -b/a);
        }
    }
}
