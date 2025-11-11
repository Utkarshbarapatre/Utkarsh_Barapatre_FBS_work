import java.util.*;

class Admin{
    String name;
    int adminId;
    String role;

    Admin(){
        this.name="DefaultAdmin";
        this.adminId=100;
        this.role="SystemAdmin";
    }

    Admin(String name,int adminId,String role){
        this.name=name;
        this.adminId=adminId;
        this.role=role;
    }

    void setName(String name){
		this.name=name;
		}
    void setAdminId(int adminId){
		this.adminId=adminId;
		}
    void setRole(String role){
		this.role=role;
		}

    String getName(){
		return this.name;
		}
    int getAdminId(){
		return this.adminId;
		}
    String getRole(){
		return this.role;
		}

    void Display(){
        System.out.println(this.name+"|"+this.adminId+"|"+this.role);
    }
}

public class AdminArrayTest{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Admin arr[]=new Admin[3];

        arr[0]=new Admin();

        System.out.println("EnterAdminName:");
        String name=sc.nextLine();

        System.out.println("EnterAdminID:");
        int adminId=sc.nextInt();
        sc.nextLine();

        System.out.println("EnterRole:");
        String role=sc.nextLine();

        arr[1]=new Admin(name,adminId,role);
        arr[2]=new Admin("BackupAdmin",500,"Support");

        for(int i=0;i<3;i++){
            arr[i].Display();
        }
        sc.close();
    }
}
