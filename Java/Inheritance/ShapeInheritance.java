class Shape {
    double area;

    Shape() {
        area = 0.0;
        System.out.println("Shape constructor called");
    }

    Shape(double area) {
        this.area = area;
        System.out.println("Shape parameterized constructor called");
    }

    double getArea() {
        return area;
    }

    void setArea(double area) {
        this.area = area;
    }

    void display() {
        System.out.println("Area: " + area);
    }
}

// Triangle subclass
class Triangle extends Shape {
    double base, height;

    Triangle() {
        super(); // Calls Shape()
        base = 0.0;
        height = 0.0;
    }

    Triangle(double base, double height) {
        super(0.5 * base * height); // Calls Shape(area)
        this.base = base;
        this.height = height;
    }

    double getBase() {
        return base;
    }

    void setBase(double base) {
        this.base = base;
        setArea(0.5 * base * height);
    }

    double getHeight() {
        return height;
    }

    void setHeight(double height) {
        this.height = height;
        setArea(0.5 * base * height);
    }

    void display() {
        System.out.println("Triangle Base: " + base);
        System.out.println("Triangle Height: " + height);
        super.display();
    }
}

// Rectangle subclass
class Rectangle extends Shape {
    int length, breadth;

    Rectangle() {
        super(); // Calls Shape()
        length = 0;
        breadth = 0;
    }

    Rectangle(int length, int breadth) {
        super(length * breadth); // Calls Shape(area)
        this.length = length;
        this.breadth = breadth;
    }

    int getLength() {
        return length;
    }

    void setLength(int length) {
        this.length = length;
        setArea(length * breadth);
    }

    int getBreadth() {
        return breadth;
    }

    void setBreadth(int breadth) {
        this.breadth = breadth;
        setArea(length * breadth);
    }

    void display() {
        System.out.println("Rectangle Length: " + length);
        System.out.println("Rectangle Breadth: " + breadth);
        super.display();
    }
}

// Circle subclass
class Circle extends Shape {
    double radius;

    Circle() {
        super(); // Calls Shape()
        radius = 0.0;
    }

    Circle(double radius) {
        super(3.14159 * radius * radius); // Calls Shape(area)
        this.radius = radius;
    }

    double getRadius() {
        return radius;
    }

    void setRadius(double radius) {
        this.radius = radius;
        setArea(3.14159 * radius * radius);
    }

    void display() {
        System.out.println("Circle Radius: " + radius);
        super.display();
    }
}

// Main class
public class ShapeInheritance {
    public static void main(String[] args) {
        Triangle t = new Triangle(10, 5);
        t.display();

        System.out.println();

        Rectangle r = new Rectangle(8, 4);
        r.display();

        System.out.println();

        Circle c = new Circle(7);
        c.display();
    }
}
