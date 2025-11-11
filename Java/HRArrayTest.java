import java.util.*;
class HR {
    String name;
    int empId;
    String department;

    HR() {
        this.name = "Default HR";
        this.empId = 101;
        this.department = "Human Resources";
    }

    HR(String name, int empId, String department) {
        this.name = name;
        this.empId = empId;
        this.department = department;
    }

    void setName(String name) {
        this.name = name;
    }

    void setEmpId(int empId) {
        this.empId = empId;
    }

    void setDepartment(String department) {
        this.department = department;
    }

    String getName() {
        return this.name;
    }

    int getEmpId() {
        return this.empId;
    }

    String getDepartment() {
        return this.department;
    }

    void Display() {
        System.out.println(this.getName()+"|"+this.getEmpId()+"|"+this.getDepartment());
    }

}
public class HRArrayTest {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
        HR arr[] = new HR[3];
        arr[0] = new HR();
        System.out.println("Enter HR name:");
        String name = sc.nextLine();
        System.out.println("Enter Employee ID:");
        int empId = sc.nextInt();
        sc.nextLine(); // consume newline
        System.out.println("Enter Department:");
        String dept = sc.nextLine();
        arr[1] = new HR(name, empId, dept);
	arr[2] = new HR(name, empId, dept);
        for (int i = 0; i < 3; i++) {
            arr[i].Display();
        }
    }
}
