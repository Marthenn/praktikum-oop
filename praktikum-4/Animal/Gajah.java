/**
 * Gajah.java
 * Kelas Gajah turunan Animal
 * @author 13521144 Bintang Dwi Marthen
 */

 public class Gajah extends Animal {
    private int basePower;
    private int age;
    public Gajah(int basePower, int age){
        super(4,0);
        this.basePower = basePower;
        this.age = age;
    }
    public int getAge(){
        return this.age;
    }
    public int getAnimalPower(){
        return 3*(this.basePower+this.getAge()+this.getNumberOfChildren());
    }
 }
 