public class GreenCard extends Card {
    GreenCard(Double number){
        super(number);
    }

    public Double value(){
        return number*4;
    }

    public void printInfo(){
        System.out.println("Kartu Hijau: " + getNumber());
    }
}
