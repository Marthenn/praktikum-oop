/**
 * Animal.java
 * Kelas Binatang yang Mengimplementasikan Comparable
 * @author 13521144 Bintang Dwi Marthen
 */

 public abstract class Animal implements Comparable<Animal> {
    private int numberOfLegs;
    private int children;
    public Animal(){
        this.numberOfLegs = 0;
        this.children = 0;
    }
    public Animal(int numberOfLegs, int children){
        this.numberOfLegs = numberOfLegs;
        this.children = children;
    }
    public int getNumberOfLegs(){
        return this.numberOfLegs;
    }
    public int getNumberOfChildren(){
        return this.children;
    }
    void increaseChild(int inc){
        this.children = this.children+inc;
    }
    abstract int getAnimalPower();
    public int compareTo(Animal a) {
      // compareTo mengembalikan:
      // 0 bila this sama dengan m
      // 1 bila this lebih dari m
      // -1 bila this kurang dari m
      if(this.getAnimalPower()>a.getAnimalPower()){return 1;}
      if(this.getAnimalPower()==a.getAnimalPower()){return 0;}
      return -1;
    }
  }
  