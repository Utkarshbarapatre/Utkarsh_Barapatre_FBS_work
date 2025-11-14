class Defence {
    String nameOfHead;
    int noOfTroops;
    double budget;
    int noOfDept;
    int noOfVehicles;
    String locationOfHeadquarters;
    String countryName;
    int manpowerCount;
    int noOfBases;
    int noOfMissionsPerformed;
    int noOfCasualties;

    Defence() {
        nameOfHead = "not given";
        noOfTroops = 0;
        budget = 0.0;
        noOfDept = 0;
        noOfVehicles = 0;
        locationOfHeadquarters = "Not Set";
        countryName = "None";
        manpowerCount = 0;
        noOfBases = 0;
        noOfMissionsPerformed = 0;
        noOfCasualties = 0;
    }

    Defence(String nameOfHead, int noOfTroops, double budget, int noOfDept, int noOfVehicles,String locationOfHeadquarters, String countryName, int manpowerCount, int noOfBases,int noOfMissionsPerformed, int noOfCasualties) {

        this.nameOfHead = nameOfHead;
        this.noOfTroops = noOfTroops;
        this.budget = budget;
        this.noOfDept = noOfDept;
        this.noOfVehicles = noOfVehicles;
        this.locationOfHeadquarters = locationOfHeadquarters;
        this.countryName = countryName;
        this.manpowerCount = manpowerCount;
        this.noOfBases = noOfBases;
        this.noOfMissionsPerformed = noOfMissionsPerformed;
        this.noOfCasualties = noOfCasualties;
    }

    String getNameOfHead() {
        return nameOfHead;
    }

    void setNameOfHead(String nameOfHead) {
        this.nameOfHead = nameOfHead;
    }

    int getNoOfTroops() {
        return noOfTroops;
    }

    void setNoOfTroops(int noOfTroops) {
        this.noOfTroops = noOfTroops;
    }

    double getBudget() {
        return budget;
    }

    void setBudget(double budget) {
        this.budget = budget;
    }

    int getNoOfDept() {
        return noOfDept;
    }

    void setNoOfDept(int noOfDept) {
        this.noOfDept = noOfDept;
    }

    int getNoOfVehicles() {
        return noOfVehicles;
    }

    void setNoOfVehicles(int noOfVehicles) {
        this.noOfVehicles = noOfVehicles;
    }

    String getLocationOfHeadquarters() {
        return locationOfHeadquarters;
    }

    void setLocationOfHeadquarters(String locationOfHeadquarters) {
        this.locationOfHeadquarters = locationOfHeadquarters;
    }

    String getCountryName() {
        return countryName;
    }

    void setCountryName(String countryName) {
        this.countryName = countryName;
    }

    int getManpowerCount() {
        return manpowerCount;
    }

    void setManpowerCount(int manpowerCount) {
        this.manpowerCount = manpowerCount;
    }

    int getNoOfBases() {
        return noOfBases;
    }

    void setNoOfBases(int noOfBases) {
        this.noOfBases = noOfBases;
    }

    int getNoOfMissionsPerformed() {
        return noOfMissionsPerformed;
    }

    void setNoOfMissionsPerformed(int noOfMissionsPerformed) {
        this.noOfMissionsPerformed = noOfMissionsPerformed;
    }

    int getNoOfCasualties() {
        return noOfCasualties;
    }

    void setNoOfCasualties(int noOfCasualties) {
        this.noOfCasualties = noOfCasualties;
    }

    void display() {
        System.out.println("Head: " + nameOfHead);
        System.out.println("Troops: " + noOfTroops);
        System.out.println("Budget: " + budget);
        System.out.println("Departments: " + noOfDept);
        System.out.println("Vehicles: " + noOfVehicles);
        System.out.println("Headquarters: " + locationOfHeadquarters);
        System.out.println("Country: " + countryName);
        System.out.println("Manpower: " + manpowerCount);
        System.out.println("Bases: " + noOfBases);
        System.out.println("Missions Performed: " + noOfMissionsPerformed);
        System.out.println("Casualties: " + noOfCasualties);
    }
}

class Army extends Defence {
    int noOfTanks;
    int noOfGuns;
    int noOfGrenades;
    int noOfBattalions;

    Army() {
        super();
        noOfTanks = 0;
        noOfGuns = 0;
        noOfGrenades = 0;
        noOfBattalions = 0;
    }

    Army(String nameOfHead, int noOfTroops, double budget, int noOfDept, int noOfVehicles,String locationOfHeadquarters, String countryName, int manpowerCount, int noOfBases,int noOfMissionsPerformed, int noOfCasualties, int noOfTanks, int noOfGuns,int noOfGrenades, int noOfBattalions) {
        super(nameOfHead, noOfTroops, budget, noOfDept, noOfVehicles, locationOfHeadquarters,countryName, manpowerCount, noOfBases, noOfMissionsPerformed, noOfCasualties);
        this.noOfTanks = noOfTanks;
        this.noOfGuns = noOfGuns;
        this.noOfGrenades = noOfGrenades;
        this.noOfBattalions = noOfBattalions;
    }

    void display() {
        super.display();
        System.out.println("Tanks: " + noOfTanks);
        System.out.println("Guns: " + noOfGuns);
        System.out.println("Grenades: " + noOfGrenades);
        System.out.println("Battalions: " + noOfBattalions);
    }
}

class Navy extends Defence {
    int noOfShips;
    int noOfSubmarines;
    int noOfTorpedoes;

    Navy() {
        super();
        noOfShips = 0;
        noOfSubmarines = 0;
        noOfTorpedoes = 0;
    }

    Navy(String nameOfHead, int noOfTroops, double budget, int noOfDept, int noOfVehicles,
         String locationOfHeadquarters, String countryName, int manpowerCount, int noOfBases,
         int noOfMissionsPerformed, int noOfCasualties, int noOfShips, int noOfSubmarines,
         int noOfTorpedoes) {

        super(nameOfHead, noOfTroops, budget, noOfDept, noOfVehicles, locationOfHeadquarters,
              countryName, manpowerCount, noOfBases, noOfMissionsPerformed, noOfCasualties);

        this.noOfShips = noOfShips;
        this.noOfSubmarines = noOfSubmarines;
        this.noOfTorpedoes = noOfTorpedoes;
    }

    void display() {
        super.display();
        System.out.println("Ships: " + noOfShips);
        System.out.println("Submarines: " + noOfSubmarines);
        System.out.println("Torpedoes: " + noOfTorpedoes);
    }
}

class AirForce extends Defence {
    int noOfMissiles;
    int noOfAircrafts;
    int noOfSquadrons;

    AirForce() {
        super();
        noOfMissiles = 0;
        noOfAircrafts = 0;
        noOfSquadrons = 0;
    }

    AirForce(String nameOfHead, int noOfTroops, double budget, int noOfDept, int noOfVehicles,String locationOfHeadquarters, String countryName, int manpowerCount, int noOfBases,int noOfMissionsPerformed, int noOfCasualties, int noOfMissiles, int noOfAircrafts,int noOfSquadrons) {

        super(nameOfHead, noOfTroops, budget, noOfDept, noOfVehicles, locationOfHeadquarters,countryName, manpowerCount, noOfBases, noOfMissionsPerformed, noOfCasualties);
        this.noOfMissiles = noOfMissiles;
        this.noOfAircrafts = noOfAircrafts;
        this.noOfSquadrons = noOfSquadrons;
    }

    void display() {
        super.display();
        System.out.println("Missiles: " + noOfMissiles);
        System.out.println("Aircrafts: " + noOfAircrafts);
        System.out.println("Squadrons: " + noOfSquadrons);
    }
}

public class DefencePolymorphismDemo {
    public static void main(String[] args) {

        Defence d1;

        d1 = new Army("General Rawat", 50000, 250000000, 10, 2000,"Delhi", "India", 60000, 15, 120, 200,300, 1000, 5000, 40);
        d1.display();

        System.out.println();
        d1 = new Navy("Admiral Kumar", 30000, 180000000, 8, 1000,"Mumbai", "India", 35000, 10, 60, 120,40, 10, 100);
        d1.display();

        System.out.println();

        d1 = new AirForce("Air Chief Chaudhari", 40000, 200000000, 9, 1500,"Bangalore", "India", 50000, 12, 80, 150,500, 120, 20);
        d1.display();
    }
}
