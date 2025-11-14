class Headphone{
    String brand;
    String model;
    double price;
    String color;
    int warranty;
    boolean noiseCancellation;

    Headphone(){
        brand="Unknown";
        model="NotSet";
        price=0.0;
        color="Black";
        warranty=0;
        noiseCancellation=false;
    }

    Headphone(String brand,String model,double price,String color,int warranty,boolean noiseCancellation){
        this.brand=brand;
        this.model=model;
        this.price=price;
        this.color=color;
        this.warranty=warranty;
        this.noiseCancellation=noiseCancellation;
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

    double getPrice(){
        return price;
    }

    void setPrice(double price){
        this.price=price;
    }

    String getColor(){
        return color;
    }

    void setColor(String color){
        this.color=color;
    }

    int getWarranty(){
        return warranty;
    }

    void setWarranty(int warranty){
        this.warranty=warranty;
    }

    boolean getNoiseCancellation(){
        return noiseCancellation;
    }

    void setNoiseCancellation(boolean noiseCancellation){
        this.noiseCancellation=noiseCancellation;
    }

    void display(){
        System.out.println("Brand: "+brand);
        System.out.println("Model: "+model);
        System.out.println("Price: "+price);
        System.out.println("Color: "+color);
        System.out.println("Warranty: "+warranty+" months");
        System.out.println("Noise Cancellation: "+noiseCancellation);
    }
}

class WirelessHeadphone extends Headphone{
    int batteryLife;
    boolean fastCharging;
    double bluetoothVersion;

    WirelessHeadphone(){
        super();
        batteryLife=0;
        fastCharging=false;
        bluetoothVersion=0.0;
    }

    WirelessHeadphone(String brand,String model,double price,String color,int warranty,boolean noiseCancellation,
                      int batteryLife,boolean fastCharging,double bluetoothVersion){
        super(brand,model,price,color,warranty,noiseCancellation);
        this.batteryLife=batteryLife;
        this.fastCharging=fastCharging;
        this.bluetoothVersion=bluetoothVersion;
    }

    int getBatteryLife(){
        return batteryLife;
    }

    void setBatteryLife(int batteryLife){
        this.batteryLife=batteryLife;
    }

    boolean getFastCharging(){
        return fastCharging;
    }

    void setFastCharging(boolean fastCharging){
        this.fastCharging=fastCharging;
    }

    double getBluetoothVersion(){
        return bluetoothVersion;
    }

    void setBluetoothVersion(double bluetoothVersion){
        this.bluetoothVersion=bluetoothVersion;
    }

    void display(){
        super.display();
        System.out.println("Battery Life: "+batteryLife+" hrs");
        System.out.println("Fast Charging: "+fastCharging);
        System.out.println("Bluetooth Version: "+bluetoothVersion);
    }
}

class WiredHeadphone extends Headphone{
    double cableLength;
    String connectorType;
    boolean mic;

    WiredHeadphone(){
        super();
        cableLength=0.0;
        connectorType="None";
        mic=false;
    }

    WiredHeadphone(String brand,String model,double price,String color,int warranty,boolean noiseCancellation,
                   double cableLength,String connectorType,boolean mic){
        super(brand,model,price,color,warranty,noiseCancellation);
        this.cableLength=cableLength;
        this.connectorType=connectorType;
        this.mic=mic;
    }

    double getCableLength(){
        return cableLength;
    }

    void setCableLength(double cableLength){
        this.cableLength=cableLength;
    }

    String getConnectorType(){
        return connectorType;
    }

    void setConnectorType(String connectorType){
        this.connectorType=connectorType;
    }

    boolean getMic(){
        return mic;
    }

    void setMic(boolean mic){
        this.mic=mic;
    }

    void display(){
        super.display();
        System.out.println("Cable Length: "+cableLength+" m");
        System.out.println("Connector Type: "+connectorType);
        System.out.println("Has Mic: "+mic);
    }
}

class GamingHeadphone extends Headphone{
    String rgbLighting;
    boolean surroundSound;
    String microphoneType;

    GamingHeadphone(){
        super();
        rgbLighting="None";
        surroundSound=false;
        microphoneType="Normal";
    }

    GamingHeadphone(String brand,String model,double price,String color,int warranty,boolean noiseCancellation,
                    String rgbLighting,boolean surroundSound,String microphoneType){
        super(brand,model,price,color,warranty,noiseCancellation);
        this.rgbLighting=rgbLighting;
        this.surroundSound=surroundSound;
        this.microphoneType=microphoneType;
    }

    String getRgbLighting(){
        return rgbLighting;
    }

    void setRgbLighting(String rgbLighting){
        this.rgbLighting=rgbLighting;
    }

    boolean getSurroundSound(){
        return surroundSound;
    }

    void setSurroundSound(boolean surroundSound){
        this.surroundSound=surroundSound;
    }

    String getMicrophoneType(){
        return microphoneType;
    }

    void setMicrophoneType(String microphoneType){
        this.microphoneType=microphoneType;
    }

    void display(){
        super.display();
        System.out.println("RGB Lighting: "+rgbLighting);
        System.out.println("Surround Sound: "+surroundSound);
        System.out.println("Microphone Type: "+microphoneType);
    }
}

public class HeadphonePolymTest{
    public static void main(String[] args){
        Headphone h1;
        h1=new WirelessHeadphone("Sony","WH-1000XM4",25000,"Black",12,true,30,true,5.0);
        h1.display();
        System.out.println();
        h1=new WiredHeadphone("JBL","Tune 500",1500,"Blue",6,false,1.2,"3.5mm",true);
        h1.display();
        System.out.println();
        h1=new GamingHeadphone("Razer","Kraken V3",8500,"Green",24,true,"RGB Spectrum",true,"Detachable Mic");
        h1.display();
    }
}
