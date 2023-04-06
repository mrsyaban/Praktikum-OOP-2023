/***
 * 13521119 / Muhammad Rizky Sya'ban
 */

import java.lang.Comparable;

class MataKuliah implements Comparable<MataKuliah> {
    private String nama;
    private int kodeJurusan;
    private int tahunPengambilan;
    private float rating;

    public MataKuliah(String nama, int kodeJurusan, int tahunPengambilan, float rating) {
        this.nama = nama;
        this.kodeJurusan = kodeJurusan;
        this.tahunPengambilan = tahunPengambilan;
        this.rating = rating;
    }

    public String getNama() {
        return this.nama;
    }

    public int getKodeJurusan() {
        return this.kodeJurusan;
    }

    public int getTahunPengambilan() {
        return this.tahunPengambilan;
    }

    public float getRating() {
        return this.rating;
    }

    public int compareTo(MataKuliah m) {
        if (this.kodeJurusan < m.kodeJurusan) {
            return -1;
        } else if (this.kodeJurusan > m.kodeJurusan) {
            return 1;
        } else {
            if (this.tahunPengambilan < m.tahunPengambilan) {
                return -1;
            } else if (this.tahunPengambilan > m.tahunPengambilan) {
                return 1;
            } else {
                if (this.rating < m.rating) {
                    return -1;
                } else if (this.rating > m.rating) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }

    public static void main(String[] args){
        System.out.println("halooo");
    }
}