public class Tester {
    interface A {
        void hello() {
            System.out.println("A");
        }
    interface B {
        void hello() {
            System.out.println("B");
        }
    }

    class C implements A, B {
        @Override
        void hello() {
            A.super.hello();
            B.super.hello();
        }

    public static void main(String[] args) {

    }
    }
}
