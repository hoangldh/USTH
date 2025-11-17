package sesh3;

public class Circle extends Shape {
    double r;

    Circle (double r) {
        this.r = r;
    }

    double area () {
        return Math.PI * Math.sqrt(r);
    }
}
