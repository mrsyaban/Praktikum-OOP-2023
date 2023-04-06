/**
 * Gajah.java
 * kelas gajah
 * @author 13521119 Muhammad Rizky Sya'ban
 */

public class Gajah extends Animal {
    private int basePower;
    private int age;

    public Gajah(int base, int jumlahGading){
        this.numberOfLegs = 4;
        this.basePower = base;
        this.age = jumlahGading;
        this.children = 0;
    }

    public int getAge(){
        return this.age;
    }

    public int getAnimalPower(){
        return 3* (this.basePower + this.age + this.children);
    }
}
