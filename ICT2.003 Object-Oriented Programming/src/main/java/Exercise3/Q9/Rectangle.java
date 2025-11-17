package Exercise3.Q9;

public class Rectangle extends Shape {
    double w, h;

    Rectangle (double w, double h) {
        this.w = w;
        this.h = h;
    }

    double area() {
        return w * h;
    }
}
