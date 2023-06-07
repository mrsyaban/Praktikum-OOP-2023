## Ujian Praktikum - UTS | No. 2

**Kebun Kelompok Arsa & Akbar**

Saat mengerjakan tugas besar yang bertemakan program kebun, terdapat sebuah bug yang membuat bingung satu kelompok. Arsa dan Akbar yang sudah mengcarry kelompok meminta anda membantu untuk mengimplementasikan fungsi print dan print2 pada setiap kelas agar mereka berdua dapat melakukan debugging. Sebagai anggota kelompok yang baik (jangan gak dikerjain >:(), bantulah mereka membuat fungsi debugging.

Diberikan sekumpulan kelas Tumbuhan yang bisa dilihat pada `Tumbuhan.hpp`.

Saat melihat kelas-kelas tersebut, anda memiliki firasat ada yang kurang... Apakah itu??? Silakan ditambahkan keyword yang kurang, dan sesuaikan implementasinya dengan keluaran berikut.

Kumpulkan `Tumbuhan.hpp` yang sudah disertai dengan implementasi dan pengubahan terhadap keyword yang kurang.

Hint: letakkan keyword yang kurang pada tempat yang membutuhkan saja.

Constructor tidak perlu diubah/ditambah print.

Contoh Program:
```
int main() {
	Tumbuhan *array_tumbuhan[3];
	Tumbuhan a("a");
	TumbuhanMakan b("b", "6");
	TumbuhanObat c("c", "7");
	array_tumbuhan[0] = &a;
	array_tumbuhan[1] = &b;
	array_tumbuhan[2] = &c;

	for(int i=0;i<3;i++) {
		array_tumbuhan[i]->print();
        array_tumbuhan[i]->print2();
	}
	array_tumbuhan[1] = &c;
	array_tumbuhan[1]->print();

    TumbuhanMakan *p = new Padi("i", "8");
    p->print();
    p->print2();

	TumbuhanMakan *d = new Jagung("d","1");
	TumbuhanObat *e = new Jahe("e","2");;
    delete p;
	d->print();
	e->print();
    d->print2();
    e->print2();
	Jagung f("f","3");
	Jahe g("g","4");

	f.print();
	g.print();
    f.print2();
    g.print2();
    TumbuhanObat *array_obat[3];
    array_obat[0] = &c;
    array_obat[1] = new Kencur("h", "5");
    array_obat[2] = &g;

    for (int i=0; i < 3; i++) {
        array_obat[i]->print2();
        array_obat[i]->print();
    }
    delete array_obat[1];
	delete e;
	delete d;
	return 0;
}
```

Contoh Keluaran:
```
(1) Tumbuhan ini milik 'a'
(2) Tumbuhan ini milik 'a'
(1) Tumbuhan Makan ditanam di pot '6'
(2) Tumbuhan ini milik 'b'
(1) Tumbuhan Obat ditanam di pot '7'
(2) Tumbuhan ini milik 'c'
(1) Tumbuhan Obat ditanam di pot '7'
(1) Padi pot '8' tumbuh tinggi
(2) Tumbuhan Makan ditanam di pot '8'
Padi pot '8' mati
TumbuhanMakan pot '8' mati
Tumbuhan milik 'i' mati
(1) Jagung pot '1' tumbuh segar
(1) Jahe pot '2' terlihat aman
(2) Tumbuhan Makan ditanam di pot '1'
(2) Tumbuhan Obat ditanam di pot '2'
(1) Jagung pot '3' tumbuh segar
(1) Jahe pot '4' terlihat aman
(2) Jagung pot '3' tumbuh segar
(2) Jahe pot '4' terlihat aman
(2) Tumbuhan Obat ditanam di pot '7'
(1) Tumbuhan Obat ditanam di pot '7'
(2) Tumbuhan Obat ditanam di pot '5'
(1) Kencur pot '5' terlihat sehat
(2) Tumbuhan Obat ditanam di pot '4'
(1) Jahe pot '4' terlihat aman
Kencur pot '5' mati
TumbuhanObat pot '5' mati
Tumbuhan milik 'h' mati
Jahe pot '2' mati
TumbuhanObat pot '2' mati
Tumbuhan milik 'e' mati
Jagung pot '1' mati
TumbuhanMakan pot '1' mati
Tumbuhan milik 'd' mati
Jahe pot '4' mati
TumbuhanObat pot '4' mati
Tumbuhan milik 'g' mati
Jagung pot '3' mati
TumbuhanMakan pot '3' mati
Tumbuhan milik 'f' mati
TumbuhanObat pot '7' mati
Tumbuhan milik 'c' mati
TumbuhanMakan pot '6' mati
Tumbuhan milik 'b' mati
Tumbuhan milik 'a' mati
```