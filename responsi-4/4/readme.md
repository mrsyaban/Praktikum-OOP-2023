## Responsi 4 | No. 4

Di dalam tugas besar OOP kali ini, masih banyak dari kalian yang tidak menerapkan `best practice OOP` atau masih “prosedural” banget lohh xixi. Nah agar kalian semakin paham pattern OOP seperti apa silahkan implementasikan skenario di bawah ini ya ^_^.

Terdapat interface `Calculable.java`, static class `Comparator.java`, dan abstract class `Card.java`. Implementasikanlah class `YellowCard` yang diturunkan dari class `Card` di dalam `YellowCard.java`. Begitu juga dengan class `GreenCard` , `RedCard`, dan `BlueCard` (bikin sendiri gaada template :p dan jangan lupa tiap kelas dipisah file). Ketentuan lebih detailnya silahkan simak poin-poin di bawah ini:

- Class-class tersebut akan merepresentasikan kartu yang memiliki sebuah angka (anggap tidak ada batasan nilai angka).

- Berat dari setiap kartu ditentukan dari angka dulu, baru warna. Dengan detail berat warna, Merah > Kuning > Biru > Hijau. Contoh, kartu berwarna hijau dengan angka 15 akan berbobot lebih besar dibanding kartu kuning dengan angka 7. Namun, kartu berwarna hijau dengan angka 15 akan lebih kecil dibanding kartu merah dengan angka 15.

- Setiap kartu dapat memprint informasi (method printInfo()) dengan ketentuan sebagai berikut:

1. Kartu biru => “Kartu Biru: <suatu_angka>”.

2. Kartu merah => “Kartu Merah: <suatu_angka>”

3. Kartu hijau => “Kartu Hijau: <suatu_angka>”

4. Kartu kuning => “Kartu Kuning: <suatu_angka>”

Silahkan implementasikan sendiri bagaimana rumus menghitung value agar kasus di atas terpenuhi :D.


> *input output di bawah ini hanya contoh, silahkan fokus dengan implementasi yang diperintahkan pada soal tidak perlu memikirkan bagaimana perintah dijalankan dari command line.

> **file yang perlu dikumpulkan cukup YellowCard.java, GreenCard.java, RedCard.java, dan BlueCard.java. Satukan keempat file tersebut ke dalam satu zip dan upload zip tersebut.

> ***untuk setiap operasi yang membutuhkan keluaran di command line, gunakan fungsi 'System.out.println()'

![lampiran](https://github.com/mrsyaban/Praktikum-OOP-2023/blob/main/responsi-4/4/lampiran.png)
