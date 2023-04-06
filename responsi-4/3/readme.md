## Responsi 4 | No. 3

Mas Nopek merupakan seorang komedian yang membutuhkan tempat tinggal, namun Mas Nopek sedang galau karena dia juga sering bepergian untuk tur komedi, sehingga takut jika langsung membangun rumah diatas tanah akan jarang ditempati. Sehingga Mas Nopek memiliki alternatif lain untuk tinggal di karavan. Bantu Mas Nopek untuk menghitung dan mensimulasikan memilih tempat tinggal di rumah atau di karavan.

Tuliskan tiga buah kelas dimana dua kelas merupakan turunan dari kelas TempatTinggal. Kemudian salah satu kelas turunan mengimplementasi sebuah interface.

1. Spesifikasi kelas TempatTinggal :

    a. Memiliki atribut luas (integer; luas bangunan dalam meter persegi) dan hargaBahanBangunan (double; harga per meter persegi)

    b. Mengandung method:
    ```
    hitungBiayaBangun = luas * hargaBahanBangunan
    ```

2. Spesifikasi kelas Rumah yang merupakan turunan kelas TempatTinggal :

    a. Mempunyai dua buah konstruktor dengan parameter: 
       1. `luas` dan `hargaBahanBangunan`

       2. `Lebar tanah`, `panjang tanah`, dan `hargaBahanBangunan`. Pada konstruktor ini luas tanah akan dihitung dengan cara `luas = lebar x panjang tanah`.

    b. Memiliki method `hitungBiayaBangun` yang menghasilkan `biayaBangun (biayaBangun = luas * hargaBahanBangunan)`

    c. Di beberapa daerah, untuk membangun rumah terkadang ada “ormas” yang meminta setoran, sehingga akan dibuat method `hitungBiayaBangun` yang memasukkan variabel setoran ormas sebagai perhitungan. Sehingga ada method `hitungBiayaBangun` yang memiliki input parameter `biayaOrmas: double`. Rumus perhitungan akan menjadi, `biayaBangun = (luas * hargaBahanBangunan) + biayaOrmas`

    d. untuk setter luas, gunakan dua varian:

    Varian dengan input luas bangunan

    Varian dengan input panjang dan lebar bangunan.

3. Spesifikasi interface Kendaraan :

    Mempunyai sebuah method yaitu hitungJarakTempuh

4. Spesifikasi kelas Karavan yang merupakan turunan kelas TempatTinggal dan akan mengimplement interface Kendaraan 

    a. Dalam kelas Karavan terdapat atribut tambahan yaitu:

    bensin (float) : jumlah bensin yang ada di tanki dalam satuan liter

    pemakaianBensin (float) : jarak tempuh yang dapat dilakukan per liter

    b. Berikut ini merupakan spesifikasi penerapan method pada kelas ini:

    hitungBiayaBangun :  BiayaBangun = (luas * hargaBahanBangunan) * 3

    hitungJarakTempuh : JarakTempuh = (bensin * pemakaianBensin)

Tugas Anda : Tuliskan semua kelas dan interface yang didefinisikan dalam persoalan di atas dalam 1 file bernama TempatTinggal.java. Semua nama-nama yang digunakan (termasuk nama file) harus sama persis seperti yang diminta dalam soal, termasuk type case-nya. 

Selektor untuk semua kelas yang terdefinisi pada soal ini ditentukan dengan gaya penulisan camelCase dengan format `get<attribut>`  atau `set<attribut>` dengan `<attribut>` diganti dengan nama atribut ybs.