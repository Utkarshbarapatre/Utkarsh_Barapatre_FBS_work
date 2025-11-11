class LibraryUser{
    private String name;
    private int daysLate;
    private static double finePerDay;

    LibraryUser(){
        this.name="";
        this.daysLate=0;
    }

    LibraryUser(String n,int d){
        this.name=n;
        this.daysLate=d;
    }

    // Setters
    void setName(String n){
        this.name=n;
    }

    void setDaysLate(int d){
        this.daysLate=d;
    }

    static void setFinePerDay(double f){
        finePerDay=f;
    }

    // Getters
    String getName(){
        return this.name;
    }

    int getDaysLate(){
        return this.daysLate;
    }

    static double getFinePerDay(){
        return finePerDay;
    }

    // Calculation
    double calculateFine(){
        return daysLate*finePerDay;
    }

    void display(){
        System.out.println("Name:"+name);
        System.out.println("Days Late:"+daysLate);
        System.out.println("Fine Per Day:"+finePerDay);
        System.out.println("Total Fine:"+calculateFine());
    }
}
class LibraryTest{
    public static void main(String[]args){
        LibraryUser.setFinePerDay(2.5);

        LibraryUser u1=new LibraryUser("Utkarsh",4);
        LibraryUser u2=new LibraryUser("Pratiksha",7);

        u1.display();
        u2.display();
    }
}
