## Responsi 4 | No. 2

Java sudah menyediakan beberapa interface untuk dapat diimplementasikan. Salah satunya adalah interface Comparable. Dengan mengimplementasikan interface Comparable, Anda dapat menggunakan library Java untuk sort, dan lain-lainnya.

Untuk mengimplemen interface Comparable, sebuah kelas harus mendefinisikan method compareTo(). Sebagai contoh, ini adalah kelas MataKuliah yang mengimplementasikan Comparable.

```
import java.lang.Comparable;

class MataKuliah implements Comparable<MataKuliah> {
  private float rating;

  public MataKuliah(float rating) {
    this.rating = rating;
  }

  public int compareTo(MataKuliah m) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    if (this.rating == m.rating) {
      return 0;
    } else if (this.rating > m.rating) {
      return 1;
    } else {
      return -1;
    }
  }
}
```

Di soal ini, Anda diminta mengubah kelas MataKuliah di atas. Anda perlu menambahkan atribut `nama` (String), `kodeJurusan` (int), dan `tahunPengambilan` (int). Lalu, buatlah juga method berikut:

- constructor yang menerima 4 parameter dengan urutan (String nama, int kodeJurusan, int tahunPengambilan, float rating)
- getter untuk tiap atribut, dengan nama getNama, getKodeJurusan, getTahunPengambilan, dan getRating
- method compareTo(MataKuliah m) yang membandingkan dua MataKuliah.

MataKuliah A disebut kurang dari MataKuliah B bila:

- kode jurusan MataKuliah A lebih kecil dari MataKuliah B
- kode jurusan MataKuliah A sama dengan MataKuliah B, tapi tahun pengambilannya lebih kecil
- kode jurusan dan tahun pengambilan MataKuliah A sama dengan MataKuliah B, tapi rating nya lebih kecil

MataKuliah A sama dengan MataKuliah B bila kode jurusan, tahun pengambilan, dan rating kedua MataKuliah bernilai sama.
Selain itu, MataKuliah A disebut lebih dari MataKuliah B

Kumpulkan `MataKuliah.java`