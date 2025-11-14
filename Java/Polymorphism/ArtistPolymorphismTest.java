class Artist{
    String name;
    int experience;

    Artist(){
        name="Unknown";
        experience=0;
    }

    Artist(String name,int experience){
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

    void perform(){
        System.out.println("Artist performing...");
    }

    void display(){
        System.out.println("Name:"+name);
        System.out.println("Experience:"+experience+" years");
    }
}

class Singer extends Artist{
    String genre;

    Singer(){
        super();
        genre="Classical";
    }

    Singer(String name,int experience,String genre){
        super(name,experience);
        this.genre=genre;
    }

    String getGenre(){
        return genre;
    }

    void setGenre(String genre){
        this.genre=genre;
    }

    void perform(){
        System.out.println(getName()+" is singing "+genre+" music.");
    }

    void display(){
        super.display();
        System.out.println("Genre:"+genre);
    }
}

class Painter extends Artist{
    String style;

    Painter(){
        super();
        style="Abstract";
    }

    Painter(String name,int experience,String style){
        super(name,experience);
        this.style=style;
    }

    String getStyle(){
        return style;
    }

    void setStyle(String style){
        this.style=style;
    }

    void perform(){
        System.out.println(getName()+" is painting in "+style+" style.");
    }

    void display(){
        super.display();
        System.out.println("Style:"+style);
    }
}

class Actor extends Artist{
    String roleType;

    Actor(){
        super();
        roleType="Drama";
    }

    Actor(String name,int experience,String roleType){
        super(name,experience);
        this.roleType=roleType;
    }

    String getRoleType(){
        return roleType;
    }

    void setRoleType(String roleType){
        this.roleType=roleType;
    }

    void perform(){
        System.out.println(getName()+" is acting in "+roleType+" roles.");
    }

    void display(){
        super.display();
        System.out.println("Role Type:"+roleType);
    }
}

public class ArtistPolymorphismTest{
    public static void main(String[] args){

        Artist a1;
        a1=new Singer("Arijit Singh",15,"Melody");
        a1.perform();
        a1.display();
        System.out.println();
        a1=new Painter("MF Hussain",40,"Modern Art");
        a1.perform();
        a1.display();
        System.out.println();
        a1=new Actor("Shah Rukh Khan",30,"Romantic");
        a1.perform();
        a1.display();
    }
}
