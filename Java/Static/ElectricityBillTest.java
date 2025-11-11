import java.util.*;
class ElectricityBill{
    int consumerID;
    String name;
    double unit;
    double billAmount;
    static double ratePerUnit;

    ElectricityBill(){
        this.consumerID=1234;
        this.name="Utkarsh";
        this.unit=60;
    }

    ElectricityBill(int id,String n,double u){
        this.consumerID=id;
        this.name=n;
        this.unit=u;
    }

    void setconsumerID(int id){
        this.consumerID=id;
    }

    void setname(String n){
        this.name=n;
    }

    void setunit(double u){
        this.unit=u;
    }

    static void setratePerUnit(double r){
        ratePerUnit=r;
    }

    int getconsumerID(){
        return this.consumerID;
    }

    String getname(){
        return this.name;
    }

    double getunit(){
        return this.unit;
    }

    static double getratePerUnit(){
        return ratePerUnit;
    }

    void calculateBill(){
        billAmount=unit*ratePerUnit;
    }

    void display(){
        System.out.println("\nConsumer ID:"+this.consumerID);
        System.out.println("Name:"+this.name);
        System.out.println("Units Consumed:"+this.unit);
        System.out.println("Rate Per Unit:"+ratePerUnit);
        System.out.println("Total Bill:"+this.billAmount);
    }
}
class ElectricityBillTest{
    public static void main(String[]args){
        ElectricityBill.setratePerUnit(7.5);
        ElectricityBill e1=new ElectricityBill(101,"Utkarsh",120);
        e1.calculateBill();
        e1.display();
	ElectricityBill e2=new ElectricityBill(102,"Amit",451);
        e2.calculateBill();
        e2.display();
        ElectricityBill e3=new ElectricityBill(103,"Aniruddha",89);
        e3.calculateBill();
        e3.display();


    }
}
