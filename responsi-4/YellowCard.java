public class YellowCard extends Card {
    YellowCard(Double number){
        super(number);
    }

    public Double value(){
        return number*4+2;
    }

    public void printInfo(){
        System.out.println("Kartu Kuning: " + getNumber());
    }
}
