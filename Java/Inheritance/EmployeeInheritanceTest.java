class Employee {
    int empID;
    String name;
    double salary;
    static int count = 0;

    Employee() {
        empID = 1000;
        name = "not given";
        salary = 25000.0;
        count++;
    }

    Employee(int empID, String name, double salary) {
        this.empID = empID;
        this.name = name;
        this.salary = salary;
        count++;
    }

    int getEmpID() {
        return empID;
    }

    void setEmpID(int empID) {
        this.empID = empID;
    }

    String getName() {
        return name;
    }

    void setName(String name) {
        this.name = name;
    }

    double getSalary() {
        return salary;
    }

    void setSalary(double salary) {
        this.salary = salary;
    }

    static int getCount() {
        return count;
    }

    static void setCount(int count) {
        Employee.count = count;
    }

    void display() {
        System.out.println("Employee ID:" + this.empID);
        System.out.println("Name:" + this.name);
        System.out.println("Salary:" + this.salary);
    }
} // Employee ends here


class Admin extends Employee {

    String role;

    Admin() {
        super();
        role = "System Admin";
    }

    Admin(int empID, String name, double salary, String role) {
        this.empID = empID;
        this.name = name;
        this.salary = salary;
        this.role = role;
    }

    String getRole() {
        return role;
    }

    void setRole(String role) {
        this.role = role;
    }

    void display() {
        super.display();
        System.out.println("Role:" + this.role);
    }
}


class HR extends Employee {

    String department;

    HR() {
        super();
        department = "Human Resources";
    }

    HR(int empID, String name, double salary, String department) {
        this.empID = empID;
        this.name = name;
        this.salary = salary;
        this.department = department;
    }

    String getDepartment() {
        return department;
    }

    void setDepartment(String department) {
        this.department = department;
    }

    void display() {
        super.display();
        System.out.println("Department:" + this.department);
    }
}



class SalesManager extends Employee {

    double incentive;
    int target;

    SalesManager() {
        super();
        incentive = 5000;
        target = 10;
    }

    SalesManager(int empID, String name, double salary, double incentive, int target) {
        this.empID = empID;
        this.name = name;
        this.salary = salary;
        this.incentive = incentive;
        this.target = target;
    }

    double getIncentive() {
        return incentive;
    }

    void setIncentive(double incentive) {
        this.incentive = incentive;
    }

    int getTarget() {
        return target;
    }

    void setTarget(int target) {
        this.target = target;
    }

    void display() {
        super.display();
        System.out.println("Incentive:" + this.incentive);
        System.out.println("Target:" + this.target);
    }
}



class EmployeeInheritanceTest {
    public static void main(String[] args) {

        Employee e1 = new Employee();
        System.out.println("Employee count total:" + Employee.getCount());

        Admin a1 = new Admin(2001, "Utkarsh", 60000, "IT Admin");
        a1.display();
        System.out.println();

        HR h1 = new HR(3005, "Rohit", 50000, "Recruitment");
        h1.display();
        System.out.println();

        SalesManager sm1 = new SalesManager(4007, "Amit", 70000, 8000, 12);
        sm1.display();
        System.out.println();

        System.out.println("Employee count total:" + Employee.getCount());
    }
}
