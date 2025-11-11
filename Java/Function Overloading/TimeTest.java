class Time{
    int hr;
    int min;
    int sec;

    Time(){
        this.hr=0;
        this.min=0;
        this.sec=0;
    }

    Time(int hr,int min,int sec){
        this.hr=hr;
        this.min=min;
        this.sec=sec;
        normalize();
    }

    // Normalize time to proper hh:mm:ss
    void normalize(){
        if(sec>=60){
            min+=sec/60;
            sec=sec%60;
        }
        if(min>=60){
            hr+=min/60;
            min=min%60;
        }
        if(hr>=24){
            hr=hr%24;
        }
    }

    // Add two Time objects
    Time add(Time t){
        Time result=new Time(this.hr+t.hr,this.min+t.min,this.sec+t.sec);
        result.normalize();
        return result;
    }

    // Add hours
    Time add(int hours){
        Time result=new Time(this.hr+hours,this.min,this.sec);
        result.normalize();
        return result;
    }

    // Add minutes
    Time addMinutes(int minutes){
        Time result=new Time(this.hr,this.min+minutes,this.sec);
        result.normalize();
        return result;
    }

    // Add seconds
    Time addSeconds(int seconds){
        Time result=new Time(this.hr,this.min,this.sec+seconds);
        result.normalize();
        return result;
    }

    void display(){
        System.out.printf("%02d:%02d:%02d\n",hr,min,sec);
    }
}

public class TimeTest{
    public static void main(String[] args){

        Time t1=new Time(10,45,50);
        Time t2=new Time(5,30,30);

        Time t3=t1.add(t2);            // Add two Time objects
        Time t4=t1.add(3);             // Add hours
        Time t5=t1.addMinutes(50);     // Add minutes
        Time t6=t1.addSeconds(75);     // Add seconds

        t3.display();
        t4.display();
        t5.display();
        t6.display();
    }
}
