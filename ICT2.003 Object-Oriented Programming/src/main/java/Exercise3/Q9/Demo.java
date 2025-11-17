package Exercise3.Q9;

public class Demo {
    public static void main(String[] args) {
        Shape[] shapes = {
                new Circle(2.0),
                new Rectangle(2.0, 4.0),
                new Circle(4.0)
        };

        for (Shape s : shapes) {
            System.out.println(s.area());
        }
    }
}
