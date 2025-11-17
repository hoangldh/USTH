package Intro2Java;

public class Ex22 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        StringBuilder str = new StringBuilder();

        while (n > 0) {
            int remainder = n % 2;
            str.append(remainder);
            n = n/2;
        }

        str.reverse();
        System.out.println(str);
    }
}
