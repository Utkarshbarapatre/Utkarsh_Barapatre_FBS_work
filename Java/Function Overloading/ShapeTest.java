class Shape{

    // Area of Triangle: 1/2 * base * height
    double area(double base,double height){
        return 0.5*base*height;
    }

    // Area of Rectangle: length * breadth
    double area(int length,int breadth){
        return length*breadth;
    }

    // Area of Circle: π * r²
    double area(double radius){
        return 3.14159*radius*radius;
    }
}

class Triangle{
    double base,height;
    Triangle(double base,double height){
        this.base=base;
        this.height=height;
    }
}

class Rectangle{
    int length,breadth;
    Rectangle(int length,int breadth){
        this.length=length;
        this.breadth=breadth;
    }
}

class Circle{
    double radius;
    Circle(double radius){
        this.radius=radius;
    }
}

public class ShapeTest{
    public static void main(String[] args){
        Shape s=new Shape();

        Triangle t=new Triangle(10,5);
        Rectangle r=new Rectangle(8,4);
        Circle c=new Circle(7);

        System.out.println("Triangle Area: "+s.area(t.base,t.height));
        System.out.println("Rectangle Area: "+s.area(r.length,r.breadth));
        System.out.println("Circle Area: "+s.area(c.radius));
    }
}
