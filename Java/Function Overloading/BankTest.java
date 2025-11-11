class Student{
    int rollno;
    String name;
    double percentage;

    Student(int rollno,String name,double percentage){
        this.rollno=rollno;
        this.name=name;
        this.percentage=percentage;
    }
}

class Employee{
    int id;
    String name;
    double annualSalary;   
    Employee(int id,String name,double annualSalary){
        this.id=id;
        this.name=name;
        this.annualSalary=annualSalary;
    }
}

class Bank{

    String approveLoan(Student s){
        if(s.percentage>80)
            return "Loan Approved: 2 Lakh";
        else if(s.percentage>=60 && s.percentage<=80)
            return "Loan Approved: 1 Lakh";
        else if(s.percentage>=40 && s.percentage<60)
            return "Loan Approved: 50K";
        else
            return "No Loan Approved";
    }
    String approveLoan(Employee e){
        if(e.annualSalary>12)
            return "Loan Approved: 7 Lakh";
        else if(e.annualSalary>=10 && e.annualSalary<=12)
            return "Loan Approved: 6 Lakh";
        else if(e.annualSalary>=6 && e.annualSalary<10)
            return "Loan Approved: 5 Lakh";
        else if(e.annualSalary>=4 && e.annualSalary<6)
            return "Loan Approved: 4 Lakh";
        else
            return "No Loan Approved";
    }
}

public class BankTest{
    public static void main(String[] args){

        Student s1=new Student(101,"Utkarsh",85);
        Student s2=new Student(102,"Amit",55);

        Employee e1=new Employee(201,"Raj",14);
        Employee e2=new Employee(202,"Aditya",5.5);

        Bank bank=new Bank();

        System.out.println(bank.approveLoan(s1));
        System.out.println(bank.approveLoan(s2));

        System.out.println(bank.approveLoan(e1));
        System.out.println(bank.approveLoan(e2));
    }
}
