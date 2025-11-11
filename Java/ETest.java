class Employee{
	int id,salary;
	String name,dept;
	Employee(){
		this.id=101;
		this.salary=45000;
		this.name="Ajay";
		this.dept="Computer";
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
class ETest{
	public static void main(String[]args){
		Employee e1=new Employee();
		System.out.println(e1.getID() + "-" + e1.getSalary() + "/" + e1.getName()+"--"+e1.getDepty());
		
	}
}
