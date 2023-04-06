public class DaftarBelanja {
    private Barang[] listBelanja;
    int isi;
    int max;

    public DaftarBelanja(int max){
        this.listBelanja = new Barang[max];
        this.isi = 0;
        this.max = max;
    }

    public void belanja(int lorong, String keterangan){
        belanja(lorong, 1, keterangan);
    }

    public void belanja(int lorong, int qty, String keterangan){
        if (this.isi < this.max){
            String namaBarang = keterangan + " (lorong " + lorong + ")";
            Barang barang = new Barang(namaBarang, qty);
            this.listBelanja[this.isi] = barang;
            this.isi += 1;
        }
    }

    public void belanja(String barang){
        belanja(barang, 1);
    }

    public void belanja(String barang, int qty){
        if (this.isi < this.max){
            Barang barangg = new Barang(barang, qty);
            this.listBelanja[this.isi] = barangg;
            this.isi += 1;
        }
    }

    public void print(){
        for (int i =0; i< this.isi; i++){
            System.out.println(i+1 + ". " + this.listBelanja[i].toString());
        }
    }
}