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

class Triangle extends Shape {
    double base, height;

    Triangle() {
        super(); 
        base = 0.0;
        height = 0.0;
    }

    Triangle(double base, double height) {
        super(0.5 * base * height); 
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


class Rectangle extends Shape {
    int length, breadth;

    Rectangle() {
        super(); 
        length = 0;
        breadth = 0;
    }

    Rectangle(int length, int breadth) {
        super(length * breadth); 
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


class Circle extends Shape {
    double radius;

    Circle() {
        super(); 
        radius = 0.0;
    }

    Circle(double radius) {
        super(3.14159 * radius * radius); 
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


public class ShapePolymorphismTest{
    public static void main(String[] args){
        Shape s;
        s=new Triangle(10,5);
        s.display();
        System.out.println();
        s=new Rectangle(8,4);
        s.display();
        System.out.println();
        s=new Circle(7);
        s.display();
    }
}
