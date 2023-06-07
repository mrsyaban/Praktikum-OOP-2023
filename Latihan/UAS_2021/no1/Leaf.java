package Latihan.UAS_2021.no1;

public abstract class Leaf implements GUI{
    String nama;
    public Leaf(String nama){
        this.nama = nama;
    }
    public void draw(){
        System.out.println("menggambarkan " + nama);
    }
}
