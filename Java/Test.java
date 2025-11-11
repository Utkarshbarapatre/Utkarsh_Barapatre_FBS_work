class Date{
	int day,month,year;
	String dow;
	
	Date(){
		this.day=11;
		this.month=06;
		this.year=2008;
		this.dow="Thursday";
	}
	Date(int day, int month, int year, String dow) {
        this.day = day;
        this.month = month;
        this.year = year;
        this.dow = dow;
    }
	void setDow(String dow){
		this.dow=dow;
	}
	void setDay(int d){
		this.day=d;
	}
	void setMonth(int m){
		this.month=m;
	}
	void setYear(int y){
		this.year=y;
	}
	int getDay(){
		return this.day;
	}
	int getMonth(){
		return this.month;
	}
	int getYear(){
		return this.year;
	}
	String getDow(){
		return this.dow;
	}
	void Display(){
		System.out.println(this.getDay() + "/" + this.getMonth() + "/" + this.getYear()+"--"+this.getDow());
	}
}
public class Test{
	public static void main(String[] args){
	Date arr[]=new Date[3];
	arr[0]=new Date();
	arr[1]=new Date(7,11,2025,"Friday");
	for (int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
}
}
	

