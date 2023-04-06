/**
 * Elang.java
 * class Elang anak dari Animal
 * @author 13521119 Muhammad Rizky Sya'ban
 */

public class Elang extends Animal {
    private int basePower;
    private int jumlahTelur;

    public Elang(int base){
        this.basePower = base;
        this.numberOfLegs = 2;
        this.children = 0;
        this.jumlahTelur = 0;
    }

    public int getJumlahTelur(){
        return this.jumlahTelur;
    }

    public void bertelur(){
        this.jumlahTelur += 1;
    }

    public int getAnimalPower(){
        return this.basePower*this.children - this.jumlahTelur;
    }


}
