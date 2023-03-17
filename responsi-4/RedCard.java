public class RedCard extends Card {
    RedCard(Double number){
        super(number);
    }

    public Double value(){
        return number*4+3;
    }

    public void printInfo(){
        System.out.println("Kartu Merah: " + getNumber());
    }
}
