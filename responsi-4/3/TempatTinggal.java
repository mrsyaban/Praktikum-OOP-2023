class TempatTinggal {
    protected int luas;
    protected double hargaBahanBangunan;
    
    public int getLuas() {
        return this.luas;
    }

    public double getHargaBahanBangunan() {
        return this.hargaBahanBangunan;
    }

    public void setHargaBahanBangunan(double hargaBahanBangunan) {
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public void setLuas(int luas) {
        this.luas = luas;
    }

    public double hitungBiayaBangun(){
        return this.luas*this.hargaBahanBangunan;
    }
}

class Rumah extends TempatTinggal {
    public void setLuas(int panjang, int lebar) {
        this.luas = panjang * lebar;
    }

    public Rumah(int luas, double harga){
        this.luas = luas;
        this.hargaBahanBangunan = harga;
    }

    public Rumah(int lebar, int panjang, double harga){
        this.luas = lebar*panjang;
        this.hargaBahanBangunan = harga;
    }

    public double hitungBiayaBangun(double biayaOrmas){
        return (this.luas*this.hargaBahanBangunan) + biayaOrmas;
    }
}

interface Kendaraan {
    public float hitungJarakTempuh();
}


class Karavan extends TempatTinggal implements Kendaraan {
    public float bensin;
    public float pemakaianBensin;

    public float getBensin() {
        return this.bensin;
    }
    public float getPemakaianBensin() {
        return this.pemakaianBensin;
    }
    public void setBensin(float bensin) {
        this.bensin = bensin;
    }
    public void setPemakaianBensin(float pemakaianBensin) {
        this.pemakaianBensin = pemakaianBensin;
    }
    public double hitungBiayaBangun() {
        return (double) this.luas * this.hargaBahanBangunan * 3;
    }
    public float hitungJarakTempuh() {
        return this.bensin * this.pemakaianBensin;
    }
}