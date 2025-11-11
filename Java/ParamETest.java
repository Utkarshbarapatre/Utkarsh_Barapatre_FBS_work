class Employee{
	int id,salary;
	String name,dept;
	Employee(int i,int s,String n,String d){
		this.id=i;
		this.salary=s;
		this.name=n;
		this.dept=d;
	}
	void setID(int i){
		this.id=i;
	}
	void setSalary(int s){
		this.salary=s;
	}
	void setName(String n){
		this.name=n;
	}
	void setDepty(String d){
		this.dept=d;
	}
	int getID(){
		return this.id;
	}
	int getSalary(){
		return this.salary;
	}
	String getName(){
		return this.name;
	}
	String getDepty(){
		return this.dept;
	}
}
class ParamETest{
	public static void main(String[]args){
		Employee e1=new Employee(1001,678822,"Aniruddha","HR");
		System.out.println(e1.getID() + "-" + e1.getSalary() + "/" + e1.getName()+"--"+e1.getDepty());
		
	}
}
