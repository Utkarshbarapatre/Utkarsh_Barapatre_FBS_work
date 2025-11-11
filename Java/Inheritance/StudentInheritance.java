class Student {
	int fbID;
	String name;
	int distance;
	static int count = 0;

	Student() {
		fbID = 100;
		name = "not given";
		distance = 10;
		count++;
	}

	Student(int fbID, String name, int distance) {
		this.fbID = fbID;
		this.name = name;
		this.distance = distance;
		count++;
	}

	int getFbID() {
		return fbID;
	}

	void setFbID(int fbID) {
		this.fbID = fbID;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getDistance() {
		return distance;
	}

	void setDistance(int distance) {
		this.distance = distance;
	}

	static int getCount() {
		return count;
	}

	static void setCount(int count) {
		Student.count = count;
	}

	void display() {
		System.out.println("Firstbit ID:" + this.fbID);
		System.out.println("Name:" + this.name);
		System.out.println("Distance travelled:" + this.distance);

	}

}// student ends here

class PlacedStudent extends Student
{
	
	String companyName;
	String designation;

	PlacedStudent() {
		super();
		companyName = "XYZ";
		designation = "PQR";
	}

	PlacedStudent(int fbID, String name, int distance, String companyName, String designation) {

		this.fbID = fbID;
		this.name = name;
		this.distance = distance;
		this.companyName = companyName;
		this.designation = designation;
	}


	int getDistance() {
		return distance;
	}

	void setDistance(int distance) {
		this.distance = distance;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	String getDesignation() {
		return designation;
	}

	void setDesignation(String designation) {
		this.designation = designation;
	}

	void display() {
		super.display();
		System.out.println("Company name:" + this.companyName);
		System.out.println("Designation:" + this.designation);

	}

}

class StudentInheritance {
	public static void main(String[] args) {
		Student s1=new Student();
		System.out.println("Student count total:" + Student.getCount());
		Student s2=new Student(102,"Utkarsh",100);
		System.out.println("Student count total:" + Student.getCount());
		PlacedStudent ps1=new PlacedStudent(78,"Rahul",500,"BCCI","Coach");
		ps1.display();
		System.out.println(ps1.getName());
		PlacedStudent ps2=new PlacedStudent();
		ps2.display();

	}
}
