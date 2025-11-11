class Employee{
    String name;
    double basicSalary;
    static double companyBonusRate;
    Employee(){
	this.name="Aniruddha";
	this.basicSalary=672822;
     }

    Employee(String n,double bs){
        this.name=n;
        this.basicSalary=bs;
    }

    static void setCompanyBonusRate(double r){
        companyBonusRate=r;
    }

    double calculateTotalSalary(){
        return basicSalary+(basicSalary*companyBonusRate/100);
    }

    void display(){
        System.out.println("Name:"+name);
        System.out.println("Basic Salary:"+basicSalary);
        System.out.println("Bonus Rate:"+companyBonusRate);
        System.out.println("Total Salary:"+calculateTotalSalary());
    }
}
class EmployeeTest{
    public static void main(String[]args){

        Employee.setCompanyBonusRate(10);

        Employee e1=new Employee("Utkarsh",30000);
        Employee e2=new Employee("Pratiksha",45000);
	Employee e3=new Employee("Rutuja",64000);
	Employee e4=new Employee("Sakshi",88000);
        e1.display();
        e2.display();
	e3.display();
        e4.display();

    }
}
