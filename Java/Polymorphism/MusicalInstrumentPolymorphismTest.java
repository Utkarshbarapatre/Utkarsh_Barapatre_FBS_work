class MusicalInstrument{
    String name;
    double price;

    MusicalInstrument(){
        name="Unknown";
        price=0.0;
    }

    MusicalInstrument(String name,double price){
        this.name=name;
        this.price=price;
    }

    String getName(){
        return name;
    }

    void setName(String name){
        this.name=name;
    }

    double getPrice(){
        return price;
    }

    void setPrice(double price){
        this.price=price;
    }

    void play(){
        System.out.println("Instrument is playing...");
    }

    void display(){
        System.out.println("Name:"+name);
        System.out.println("Price:"+price);
    }
}

class Guitar extends MusicalInstrument{
    int numberOfStrings;

    Guitar(){
        super();
        numberOfStrings=6;
    }

    Guitar(String name,double price,int numberOfStrings){
        super(name,price);
        this.numberOfStrings=numberOfStrings;
    }

    int getNumberOfStrings(){
        return numberOfStrings;
    }

    void setNumberOfStrings(int numberOfStrings){
        this.numberOfStrings=numberOfStrings;
    }

    void play(){
        System.out.println(name+" guitar with "+numberOfStrings+" strings is strumming.");
    }

    void display(){
        super.display();
        System.out.println("Strings:"+numberOfStrings);
    }
}

class Piano extends MusicalInstrument{
    int numberOfKeys;

    Piano(){
        super();
        numberOfKeys=88;
    }

    Piano(String name,double price,int numberOfKeys){
        super(name,price);
        this.numberOfKeys=numberOfKeys;
    }

    int getNumberOfKeys(){
        return numberOfKeys;
    }

    void setNumberOfKeys(int numberOfKeys){
        this.numberOfKeys=numberOfKeys;
    }

    void play(){
        System.out.println(name+" piano with "+numberOfKeys+" keys is playing melodies.");
    }

    void display(){
        super.display();
        System.out.println("Keys:"+numberOfKeys);
    }
}

class Flute extends MusicalInstrument{
    String material;

    Flute(){
        super();
        material="Bamboo";
    }

    Flute(String name,double price,String material){
        super(name,price);
        this.material=material;
    }

    String getMaterial(){
        return material;
    }

    void setMaterial(String material){
        this.material=material;
    }

    void play(){
        System.out.println(name+" flute made of "+material+" is producing soothing sound.");
    }

    void display(){
        super.display();
        System.out.println("Material:"+material);
    }
}

public class MusicalInstrumentPolymorphismTest{
    public static void main(String[] args){
        MusicalInstrument m1;
        m1=new Guitar("Fender",45000,6);
        m1.play();
        m1.display();
        System.out.println();
        m1=new Piano("Yamaha",150000,88);
        m1.play();
        m1.display();
        System.out.println();
        m1=new Flute("Indian",3000,"Wood");
        m1.play();
        m1.display();
    }
}
