import java.util.Scanner;

abstract class ElectricityBill{
    int units;
    String customerName;

    ElectricityBill(String customerName,int units){
        this.customerName=customerName;
        this.units=units;
    }

    void showUsage(){
        System.out.println("Customer:"+customerName+" Units:"+units);
    }

    abstract double calculateBill();

    final void generateBill(){
        double amount=calculateBill();
        amount=amount+(amount*0.05)+50;
        System.out.println("FinalBill:"+amount);
    }
}

class ResidentialBill extends ElectricityBill{

    ResidentialBill(String name,int units){
        super(name,units);
    }

    double calculateBill(){
        double amt=0;
        if(units<=100){
		amt=units*2.5;
	}
        else if(units<=300){
		amt=100*2.5+(units-100)*3.5;
	}
        else{ 
		amt=100*2.5+200*3.5+(units-300)*5;
	}

        if(units>500){
		amt=amt+150;
	}
        return amt;
    }
}

class CommercialBill extends ElectricityBill{

    CommercialBill(String name,int units){
        super(name,units);
    }

    double calculateBill(){
        double amt=units*6.5;
        if(units<200&&amt<1500){
		amt=1500;
	}
        if(units>1000){
		amt=amt+(amt*0.08);
	}
        return amt;
    }
}

public class MainBill{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("SelectType:1.Residential 2.Commercial");
        int choice=sc.nextInt();
        sc.nextLine();

        System.out.print("EnterName:");
        String name=sc.nextLine();

        System.out.print("EnterUnits:");
        int units=sc.nextInt();

        ElectricityBill bill;

        if(choice==1){
		bill=new ResidentialBill(name,units);
	}
        else{
	 	bill=new CommercialBill(name,units);
	}

        bill.showUsage();
        bill.generateBill();
    }
}
