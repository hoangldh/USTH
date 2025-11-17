package ObjectsClasses;

public class TestDog {
    public static void main (String[] args) {
        Dog myDog = new Dog();
        myDog.size = 10;
        myDog.breed = "Corgi";
        myDog.name = "Acker";

        myDog.bark();
        myDog.getBigger();
        myDog.bark();
    }
}
