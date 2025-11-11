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
        HR arr[] = new HR[3];
        arr[0] = new HR();
        arr[1] = new HR("Utkarsh", 2025, "Recruitment");
        for (int i = 0; i < 3; i++) {
            System.out.println(arr[i]);
        }
    }
}
