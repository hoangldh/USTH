package Intro2Java;

public class Ex21 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i*i;
        }

        System.out.println(sum);
    }
}
