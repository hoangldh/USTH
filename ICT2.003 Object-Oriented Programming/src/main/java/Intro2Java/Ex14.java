package Intro2Java;

public class Ex14 {
    // C and D are weird
    public static void main(String[] args) {
        int mark = Integer.parseInt(args[0]);
        char level;

        if (mark >= 18 && mark <= 20) {
            level = 'A';
        } else if (mark >= 16 && mark <= 17) {
            level = 'B';
        } else if (mark >= 13 && mark <= 15) {
            level = 'C';
        } else if (mark >= 12 && mark <= 14) {
            level = 'D';
        } else if (mark >= 10 && mark <= 11) {
            level = 'E';
        } else {
            level = 'F';
        }

        System.out.println("Level: " + level);
    }
}
