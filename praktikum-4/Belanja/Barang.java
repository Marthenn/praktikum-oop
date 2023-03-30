public class Barang{
    private String nama;
    private int amount;
    public Barang(String nama, int amount){
        this.nama = nama;
        this.amount = amount;
    }
    @Override
    public String toString(){
        return this.amount + " " + this.nama;
    }
}