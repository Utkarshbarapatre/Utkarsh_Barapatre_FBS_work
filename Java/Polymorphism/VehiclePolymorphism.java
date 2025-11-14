class Vehicle{
    String brand;
    String model;
    int speed;

    Vehicle(){
        brand="Unknown";
        model="None";
        speed=0;
    }

    Vehicle(String brand,String model,int speed){
        this.brand=brand;
        this.model=model;
        this.speed=speed;
    }

    String getBrand(){
        return brand;
    }

    void setBrand(String brand){
        this.brand=brand;
    }

    String getModel(){
        return model;
    }

    void setModel(String model){
        this.model=model;
    }

    int getSpeed(){
        return speed;
    }

    void setSpeed(int speed){
        this.speed=speed;
    }

    void display(){
        System.out.println("Brand:"+brand);
        System.out.println("Model:"+model);
        System.out.println("Speed:"+speed+"km/h");
    }
}

class Car extends Vehicle{
    int doors;

    Car(){
        super();
        doors=4;
    }

    Car(String brand,String model,int speed,int doors){
        super(brand,model,speed);
        this.doors=doors;
    }

    int getDoors(){
        return doors;
    }

    void setDoors(int doors){
        this.doors=doors;
    }

    void display(){
        super.display();
        System.out.println("Doors:"+doors);
    }
}

class Bike extends Vehicle{
    String type;

    Bike(){
        super();
        type="Standard";
    }

    Bike(String brand,String model,int speed,String type){
        super(brand,model,speed);
        this.type=type;
    }

    String getType(){
        return type;
    }

    void setType(String type){
        this.type=type;
    }

    void display(){
        super.display();
        System.out.println("BikeType:"+type);
    }
}

class Truck extends Vehicle{
    int loadCapacity;

    Truck(){
        super();
        loadCapacity=0;
    }

    Truck(String brand,String model,int speed,int loadCapacity){
        super(brand,model,speed);
        this.loadCapacity=loadCapacity;
    }

    int getLoadCapacity(){
        return loadCapacity;
    }

    void setLoadCapacity(int loadCapacity){
        this.loadCapacity=loadCapacity;
    }

    void display(){
        super.display();
        System.out.println("LoadCapacity:"+loadCapacity+"kg");
    }
}

public class VehiclePolymorphism{
    public static void main(String[] args){
        Vehicle d1;
        d1=new Car("Tesla","ModelS",250,4);
        d1.display();
        System.out.println();
        d1=new Bike("Yamaha","MT-15",150,"Sports");
        d1.display();
        System.out.println();
        d1=new Truck("Tata","Prima",120,10000);
        d1.display();
    }
}
