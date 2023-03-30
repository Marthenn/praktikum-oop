/**
 * Elang.java
 * Kelas Elang turunan Dari Animal
 * @author 13521144 Bintang Dwi Marthen
 */

 public class Elang extends Animal {
    private int basePower;
    private int jumlahTelur;
    public Elang(int basePower){
        super(2,0);
        this.jumlahTelur=0;
        this.basePower=basePower;
    }
    public int getJumlahTelur(){
        return this.jumlahTelur;
    }
    void bertelur(){
        this.jumlahTelur = this.jumlahTelur+1;
    }
    public int getAnimalPower(){
        return this.basePower*this.getNumberOfChildren()-this.jumlahTelur;
    }
 }
 