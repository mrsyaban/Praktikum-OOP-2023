/**
 * Animal.java
 * baseclass dari seluruh hewan
 * @author 13521119 Muhammad Rizky Sya'ban
 */

public abstract class Animal implements Comparable<Animal> {
  public int compareTo(Animal a) {
    if (this.getAnimalPower() == a.getAnimalPower()){
        return 0;
    } else if (this.getAnimalPower() > a.getAnimalPower()){
        return 1;
    } else {
        return -1;
    }
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    
  }

  protected int numberOfLegs;
  protected int children;

  public int getNumberOfLegs(){
    return this.numberOfLegs;
  }

  public int getNumberOfChildren(){
    return this.children;
  }

  public void increaseChild(int inc){
    this.children += inc;
  }

  abstract int getAnimalPower();

}
