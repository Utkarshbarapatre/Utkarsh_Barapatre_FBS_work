import java.util.Scanner;

abstract class InsurancePolicy{
    String policyHolderName;
    double basePremium;


    InsurancePolicy(){
        this.policyHolderName="Unknown";
        this.basePremium=1000;
    }

    InsurancePolicy(String name,double base){
        this.policyHolderName=name;
        this.basePremium=base;
    }


    String getPolicyHolderName(){
        return policyHolderName;
    }

    double getBasePremium(){
        return basePremium;
    }

   
    void setPolicyHolderName(String name){
        this.policyHolderName=name;
    }

    void setBasePremium(double base){
        this.basePremium=base;
    }

    public String toString(){
        return "Holder:"+policyHolderName+" BasePremium:"+basePremium;
    }

    abstract double calculatePremium();

    void printPolicyDetails(){
        System.out.println(toString());
        System.out.println("FinalPremium:"+calculatePremium());
    }
}

class CarInsurance extends InsurancePolicy{
    int carAgeInYears;
    boolean hadAccidentInLastYear;
    double carValue;


    CarInsurance(){
        super();
        this.carAgeInYears=5;
        this.hadAccidentInLastYear=false;
        this.carValue=500000;
    }

    CarInsurance(String name,double base,int age,boolean accident,double value){
        super(name,base);
        this.carAgeInYears=age;
        this.hadAccidentInLastYear=accident;
        this.carValue=value;
    }

    
    int getCarAgeInYears(){
        return carAgeInYears;
    }

    boolean getHadAccidentInLastYear(){
        return hadAccidentInLastYear;
    }

    double getCarValue(){
        return carValue;
    }

    void setCarAgeInYears(int age){
        this.carAgeInYears=age;
    }

    void setHadAccidentInLastYear(boolean acc){
        this.hadAccidentInLastYear=acc;
    }

    void setCarValue(double value){
        this.carValue=value;
    }

    public String toString(){
        return super.toString()+" CarAge:"+carAgeInYears+" Accident:"+hadAccidentInLastYear+" CarValue:"+carValue;
    }

    double calculatePremium(){
        double premium=basePremium;

        if(carAgeInYears<=3){
            premium=premium+(basePremium*0.10);
        }else if(carAgeInYears<=7){
            premium=premium+(basePremium*0.20);
        }else{
            premium=premium+(basePremium*0.30);
        }

        if(hadAccidentInLastYear){
            premium=premium+(basePremium*0.25);
        }else{
            premium=premium-(basePremium*0.10);
        }

        if(carValue>1000000){
            premium=premium+2000;
        }

        return premium;
    }
}

class HealthInsurance extends InsurancePolicy{
    int age;
    boolean isSmoker;
    boolean hasPreExistingDisease;


    HealthInsurance(){
        super();
        this.age=30;
        this.isSmoker=false;
        this.hasPreExistingDisease=false;
    }

    HealthInsurance(String name,double base,int age,boolean smoker,boolean disease){
        super(name,base);
        this.age=age;
        this.isSmoker=smoker;
        this.hasPreExistingDisease=disease;
    }


    int getAge(){
        return age;
    }

    boolean getIsSmoker(){
        return isSmoker;
    }

    boolean getHasPreExistingDisease(){
        return hasPreExistingDisease;
    }

    void setAge(int age){
        this.age=age;
    }

    void setIsSmoker(boolean smoker){
        this.isSmoker=smoker;
    }

    void setHasPreExistingDisease(boolean disease){
        this.hasPreExistingDisease=disease;
    }

    public String toString(){
        return super.toString()+" Age:"+age+" Smoker:"+isSmoker+" Disease:"+hasPreExistingDisease;
    }

    double calculatePremium(){
        double premium=basePremium;

        if(age<30){
            premium=premium+(basePremium*0.10);
        }else if(age<=45){
            premium=premium+(basePremium*0.25);
        }else{
            premium=premium+(basePremium*0.40);
        }

        if(isSmoker){
            premium=premium+(basePremium*0.30);
        }else{
            premium=premium-(basePremium*0.05);
        }

        if(hasPreExistingDisease){
            premium=premium+(basePremium*0.20);
        }

        return premium;
    }
}

public class MainInsurance{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);

        System.out.println("1.CarInsurance 2.HealthInsurance");
        int choice=sc.nextInt();
        sc.nextLine();

        if(choice==1){
            InsurancePolicy p=new CarInsurance(); 
            p.printPolicyDetails();
        }else{
            InsurancePolicy p=new HealthInsurance(); 
            p.printPolicyDetails();
        }
    }
}
