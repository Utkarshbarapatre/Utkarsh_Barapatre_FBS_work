class Calculator{

    // ADD
    int add(int a,int b){
	return a+b;
	}
    double add(double a,double b){
	return a+b;
	}
    double add(int a,double b){
	return a+b;
	}
    double add(double a,int b){
	return a+b;
	}

    int subtract(int a,int b){
	return a-b;
	}
    double subtract(double a,double b){
	return a-b;
	}
    double subtract(int a,double b){
	return a-b;
	}
    double subtract(double a,int b){
	return a-b;
	}

 
    int multiply(int a,int b){
	return a*b;
	}
    double multiply(double a,double b){
	return a*b;
	}
    double multiply(int a,double b){
	return a*b;
	}
    double multiply(double a,int b){
	return a*b;
	}

    int divide(int a,int b){
	return a/b;
	}
    double divide(double a,double b){
	return a/b;
	}
    double divide(int a,double b){
	return a/b;
	}
    double divide(double a,int b){
	return a/b;
	}
}

public class CalculatorTest{
    public static void main(String[] args){
        Calculator c=new Calculator();

        System.out.println(c.add(5,3));
        System.out.println(c.add(5.5,3.2));
        System.out.println(c.add(5,3.5));
        System.out.println(c.add(5.5,3));

        System.out.println(c.subtract(5,3));
	System.out.println(c.subtract(5.5,3.2));
	System.out.println(c.subtract(5,3.5));
	System.out.println(c.subtract(5.5,3));

	System.out.println(c.multiply(5,3));
	System.out.println(c.multiply(5.5,3.2));
	System.out.println(c.multiply(5,3.5));
	System.out.println(c.multiply(5.5,3));

	System.out.println(c.divide(5,3));
	System.out.println(c.divide(5.5,3.2));
	System.out.println(c.divide(5,3.5));
	System.out.println(c.divide(5.5,3));
    }
}
