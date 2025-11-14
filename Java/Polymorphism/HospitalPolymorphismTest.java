class HospitalStaff{
    String name;
    int experience;

    HospitalStaff(){
        name="Unknown";
        experience=0;
    }

    HospitalStaff(String name,int experience){
        this.name=name;
        this.experience=experience;
    }

    String getName(){
        return name;
    }

    void setName(String name){
        this.name=name;
    }

    int getExperience(){
        return experience;
    }

    void setExperience(int experience){
        this.experience=experience;
    }

    void work(){
        System.out.println("Staff working...");
    }

    void display(){
        System.out.println("Name:"+name);
        System.out.println("Experience:"+experience+" years");
    }
}

class Doctor extends HospitalStaff{
    String specialization;

    Doctor(){
        super();
        specialization="General";
    }

    Doctor(String name,int experience,String specialization){
        super(name,experience);
        this.specialization=specialization;
    }

    String getSpecialization(){
        return specialization;
    }

    void setSpecialization(String specialization){
        this.specialization=specialization;
    }

    void work(){
        System.out.println(name+" is treating patients in "+specialization+" specialization.");
    }

    void display(){
        super.display();
        System.out.println("Specialization:"+specialization);
    }
}

class Nurse extends HospitalStaff{
    String shift;

    Nurse(){
        super();
        shift="Day";
    }

    Nurse(String name,int experience,String shift){
        super(name,experience);
        this.shift=shift;
    }

    String getShift(){
        return shift;
    }

    void setShift(String shift){
        this.shift=shift;
    }

    void work(){
        System.out.println(name+" is nursing patients in "+shift+" shift.");
    }

    void display(){
        super.display();
        System.out.println("Shift:"+shift);
    }
}

class Surgeon extends HospitalStaff{
    String surgeryType;

    Surgeon(){
        super();
        surgeryType="General Surgery";
    }

    Surgeon(String name,int experience,String surgeryType){
        super(name,experience);
        this.surgeryType=surgeryType;
    }

    String getSurgeryType(){
        return surgeryType;
    }

    void setSurgeryType(String surgeryType){
        this.surgeryType=surgeryType;
    }

    void work(){
        System.out.println(name+" is performing "+surgeryType+" surgeries.");
    }

    void display(){
        super.display();
        System.out.println("Surgery Type:"+surgeryType);
    }
}

public class HospitalPolymorphismTest{
    public static void main(String[] args){
        HospitalStaff hs1;
        hs1=new Doctor("Dr. Mehta",20,"Cardiology");
        hs1.work();
        hs1.display();
        System.out.println();
        hs1=new Nurse("Nurse Pooja",10,"Night");
        hs1.work();
        hs1.display();
        System.out.println();
        hs1=new Surgeon("Dr. Arjun",15,"Neurosurgery");
        hs1.work();
        hs1.display();
    }
}
