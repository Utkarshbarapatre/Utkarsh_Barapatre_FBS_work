class Student{
	int roll,marks;
	String name,dept;
	Student(){
		this.roll=101;
		this.marks=67;
		this.name="Ajay";
		this.dept="Computer";
	}
	void setRoll(int i){
		this.roll=i;
	}
	void setMarks(int s){
		this.marks=s;
	}
	void setName(String n){
		this.name=n;
	}
	void setDepty(String d){
		this.dept=d;
	}
	int getRoll(){
		return this.roll;
	}
	int getMarks(){
		return this.marks;
	}
	String getName(){
		return this.name;
	}
	String getDepty(){
		return this.dept;
	}
}
class StudentTest{
	public static void main(String[]args){
		Student e1=new Student();
		System.out.println(e1.getRoll() + "-" + e1.getMarks() + "-" + e1.getName()+"-"+e1.getDepty());
		
	}
}