class Date{
	int day,month,year;
	String dow;
	Date(int d,int m, int y,String dow){
		this.day=d;
		this.month=m;
		this.year=y;
		this.dow=dow;


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
}
public class ParameterizedTest{
	public static void main(String[] args){
	Date d1=new Date(26,06,2003,"Thursday");
	
	System.out.println(d1.getDay() + "-" + d1.getMonth() + "-" + d1.getYear()+"--"+d1.getDow());

	}
}
