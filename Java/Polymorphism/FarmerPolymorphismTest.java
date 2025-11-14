class Farmer{
    int farmerId;
    String farmerName;
    double landArea;
    String city;
    double annualIncome;
    int noOfEquipment;
    double insuranceAmt;

    Farmer(){
        farmerId=0;
        farmerName="Unknown";
        landArea=0.0;
        city="NotSet";
        annualIncome=0.0;
        noOfEquipment=0;
        insuranceAmt=0.0;
    }

    Farmer(int farmerId,String farmerName,double landArea,String city,double annualIncome,int noOfEquipment,double insuranceAmt){
        this.farmerId=farmerId;
        this.farmerName=farmerName;
        this.landArea=landArea;
        this.city=city;
        this.annualIncome=annualIncome;
        this.noOfEquipment=noOfEquipment;
        this.insuranceAmt=insuranceAmt;
    }

    int getFarmerId(){
        return farmerId;
    }
    void setFarmerId(int farmerId){
        this.farmerId=farmerId;
    }

    String getFarmerName(){
        return farmerName;
    }
    void setFarmerName(String farmerName){
        this.farmerName=farmerName;
    }

    double getLandArea(){
        return landArea;
    }
    void setLandArea(double landArea){
        this.landArea=landArea;
    }

    String getCity(){
        return city;
    }
    void setCity(String city){
        this.city=city;
    }

    double getAnnualIncome(){
        return annualIncome;
    }
    void setAnnualIncome(double annualIncome){
        this.annualIncome=annualIncome;
    }

    int getNoOfEquipment(){
        return noOfEquipment;
    }
    void setNoOfEquipment(int noOfEquipment){
        this.noOfEquipment=noOfEquipment;
    }

    double getInsuranceAmt(){
        return insuranceAmt;
    }
    void setInsuranceAmt(double insuranceAmt){
        this.insuranceAmt=insuranceAmt;
    }

    void display(){
        System.out.println("FarmerID:"+farmerId);
        System.out.println("FarmerName:"+farmerName);
        System.out.println("LandArea:"+landArea);
        System.out.println("City:"+city);
        System.out.println("AnnualIncome:"+annualIncome);
        System.out.println("NoOfEquipment:"+noOfEquipment);
        System.out.println("InsuranceAmt:"+insuranceAmt);
    }
}

class DairyFarmer extends Farmer{
    int noOfCattle;
    double milkProducedPerDay;
    int dairyLicenseNo;

    DairyFarmer(){
        super();
        noOfCattle=0;
        milkProducedPerDay=0.0;
        dairyLicenseNo=0;
    }

    DairyFarmer(int farmerId,String farmerName,double landArea,String city,double annualIncome,int noOfEquipment,double insuranceAmt,int noOfCattle,double milkProducedPerDay,int dairyLicenseNo){
        super(farmerId,farmerName,landArea,city,annualIncome,noOfEquipment,insuranceAmt);
        this.noOfCattle=noOfCattle;
        this.milkProducedPerDay=milkProducedPerDay;
        this.dairyLicenseNo=dairyLicenseNo;
    }

    int getNoOfCattle(){
        return noOfCattle;
    }
    void setNoOfCattle(int noOfCattle){
        this.noOfCattle=noOfCattle;
    }

    double getMilkProducedPerDay(){
        return milkProducedPerDay;
    }
    void setMilkProducedPerDay(double milkProducedPerDay){
        this.milkProducedPerDay=milkProducedPerDay;
    }

    int getDairyLicenseNo(){
        return dairyLicenseNo;
    }
    void setDairyLicenseNo(int dairyLicenseNo){
        this.dairyLicenseNo=dairyLicenseNo;
    }

    void display(){
        super.display();
        System.out.println("NoOfCattle:"+noOfCattle);
        System.out.println("MilkPerDay:"+milkProducedPerDay);
        System.out.println("DairyLicenseNo:"+dairyLicenseNo);
    }
}

class PoultryFarmer extends Farmer{
    int noOfChickens;
    int noOfHens;
    int noOfSheds;
    int eggsProducedPerDay;
    int shedCapacity;
    String poultryFarmName;

    PoultryFarmer(){
        super();
        noOfChickens=0;
        noOfHens=0;
        noOfSheds=0;
        eggsProducedPerDay=0;
        shedCapacity=0;
        poultryFarmName="NotSet";
    }

    PoultryFarmer(int farmerId,String farmerName,double landArea,String city,double annualIncome,int noOfEquipment,double insuranceAmt,int noOfChickens,int noOfHens,int noOfSheds,
                  int eggsProducedPerDay,int shedCapacity,String poultryFarmName){
        super(farmerId,farmerName,landArea,city,annualIncome,noOfEquipment,insuranceAmt);
        this.noOfChickens=noOfChickens;
        this.noOfHens=noOfHens;
        this.noOfSheds=noOfSheds;
        this.eggsProducedPerDay=eggsProducedPerDay;
        this.shedCapacity=shedCapacity;
        this.poultryFarmName=poultryFarmName;
    }

    void display(){
        super.display();
        System.out.println("NoOfChickens:"+noOfChickens);
        System.out.println("NoOfHens:"+noOfHens);
        System.out.println("NoOfSheds:"+noOfSheds);
        System.out.println("EggsPerDay:"+eggsProducedPerDay);
        System.out.println("ShedCapacity:"+shedCapacity);
        System.out.println("PoultryFarmName:"+poultryFarmName);
    }
}

class OrganicFarmer extends Farmer{
    int organicCertId;
    String cropType;
    String fertilizerUsed;

    OrganicFarmer(){
        super();
        organicCertId=0;
        cropType="None";
        fertilizerUsed="None";
    }

    OrganicFarmer(int farmerId,String farmerName,double landArea,String city,double annualIncome,int noOfEquipment,double insuranceAmt,int organicCertId,String cropType,String fertilizerUsed){
        super(farmerId,farmerName,landArea,city,annualIncome,noOfEquipment,insuranceAmt);
        this.organicCertId=organicCertId;
        this.cropType=cropType;
        this.fertilizerUsed=fertilizerUsed;
    }

    int getOrganicCertId(){
        return organicCertId;
    }
    void setOrganicCertId(int organicCertId){
        this.organicCertId=organicCertId;
    }

    String getCropType(){
        return cropType;
    }
    void setCropType(String cropType){
        this.cropType=cropType;
    }

    String getFertilizerUsed(){
        return fertilizerUsed;
    }
    void setFertilizerUsed(String fertilizerUsed){
        this.fertilizerUsed=fertilizerUsed;
    }

    void display(){
        super.display();
        System.out.println("OrganicCertId:"+organicCertId);
        System.out.println("CropType:"+cropType);
        System.out.println("FertilizerUsed:"+fertilizerUsed);
    }
}

public class FarmerPolymorphismTest{
    public static void main(String[] args){
        Farmer f1;
        f1=new DairyFarmer(101,"Ramesh",5.5,"Pune",450000,8,20000,15,120,9876);
        f1.display();
        System.out.println();
        f1=new PoultryFarmer(102,"Suresh",3.0,"Nashik",350000,6,15000,200,150,2,500,400,"FeatherNest");
        f1.display();
        System.out.println();
        f1=new OrganicFarmer(103,"Mahesh",4.2,"Kolhapur",400000,7,18000,555,"Vegetables","Natural Compost");
        f1.display();
    }
}
