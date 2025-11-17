package ObjectsClasses;

public class Dog {
    int size;
    String breed;
    String name;

    void bark () {
        if (size > 14) {
            System.out.println("Ruff! Ruff!");
        }
        else {
            System.out.println("Yip! Yip!");
        }
    }

    void getBigger() {
        size += 5;
    }
}
