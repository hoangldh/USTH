package Intro2Java;

public class Ex24 {
    public static void main(String[] args) {
        String str = new String();
        int index = str.indexOf("OOP");
        
        if (index >= 0) {
            System.out.println("Found at index " + index);
        }
        else {
            System.out.println("NOt found");
        }
    }
}
