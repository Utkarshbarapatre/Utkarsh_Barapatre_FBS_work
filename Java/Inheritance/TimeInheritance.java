class Time {
    int hr;
    int min;
    int sec;

    // Default constructor
    Time() {
        this.hr = 0;
        this.min = 0;
        this.sec = 0;
    }

    // Parameterized constructor
    Time(int hr, int min, int sec) {
        this.hr = hr;
        this.min = min;
        this.sec = sec;
        normalize();
    }

    // Normalize time to proper hh:mm:ss
    void normalize() {
        if (sec >= 60) {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min >= 60) {
            hr += min / 60;
            min = min % 60;
        }
        if (hr >= 24) {
            hr = hr % 24;
        }
    }

    // Display time
    void display() {
        System.out.printf("Time: %02d:%02d:%02d\n", hr, min, sec);
    }
}

// Subclass to add two time objects
class AddTime extends Time {
    AddTime(Time t1, Time t2) {
        super(t1.hr + t2.hr, t1.min + t2.min, t1.sec + t2.sec);
    }

    void display() {
        System.out.printf("Added Time: %02d:%02d:%02d\n", hr, min, sec);
    }
}

// Subclass to add hours
class AddHour extends Time {
    AddHour(Time t, int hours) {
        super(t.hr + hours, t.min, t.sec);
    }

    void display() {
        System.out.printf("Time after adding hours: %02d:%02d:%02d\n", hr, min, sec);
    }
}

// Subclass to add minutes
class AddMinute extends Time {
    AddMinute(Time t, int minutes) {
        super(t.hr, t.min + minutes, t.sec);
    }

    void display() {
        System.out.printf("Time after adding minutes: %02d:%02d:%02d\n", hr, min, sec);
    }
}

// Subclass to add seconds
class AddSecond extends Time {
    AddSecond(Time t, int seconds) {
        super(t.hr, t.min, t.sec + seconds);
    }

    void display() {
        System.out.printf("Time after adding seconds: %02d:%02d:%02d\n", hr, min, sec);
    }
}

// Main Test class
public class TimeInheritance {
    public static void main(String[] args) {

        Time t1 = new Time(10, 45, 50);
        Time t2 = new Time(5, 30, 30);

        AddTime at = new AddTime(t1, t2);
        at.display();

        AddHour ah = new AddHour(t1, 3);
        ah.display();

        AddMinute am = new AddMinute(t1, 50);
        am.display();

        AddSecond as = new AddSecond(t1, 75);
        as.display();
    }
}
