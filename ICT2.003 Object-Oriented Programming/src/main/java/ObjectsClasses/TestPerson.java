package ObjectsClasses;

public class TestPerson {
    public static void main(String[] args) {
        Person p = new Person();
        p.setName("Jack");
        p.setAge(17);

        System.out.println(p.getName());
        System.out.println(p.getAge());
    }
}
