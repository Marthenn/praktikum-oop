public class BlueCard extends Card{
    BlueCard(Double number){
        super(number);
    }

    public Double value(){
        return number*4+1;
    }

    public void printInfo(){
        System.out.println("Kartu Biru: " + getNumber());
    }
}