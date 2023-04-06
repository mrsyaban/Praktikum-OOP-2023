public class Barang {
    String nama;
    int amount;

    public Barang(String nama, int amount){
        this.nama = nama;
        this.amount = amount;
    }

    public String toString(){
        String string = amount + " " + nama;
        return string;
    }
}