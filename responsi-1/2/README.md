## Responsi 1 | No. 2

Berikut adalah implementasi dari kelas A, yaitu kelas yang menyimpan suatu karakter dan menghasilkan keluaran khusus jika constructor, copy constructor, copy assignment operator, destructor, dan fungsi show dipanggil.

Sebagai contoh, program sebagai berikut:
```
int main() {
    A x('1');
    x.show();
    return 0;
}
```
Akan menghasilkan keluaran berikut (angka 1 adalah nilai yang dimasukkan ke constructor):
```
cons 1
show 1
dest 1
```

Tugas anda: Unggah file main.cpp yang isinya adalah main program, yang menggunakan kelas A untuk menghasilkan keluaran berikut:

```
cons 1
cons 2
ccons 1
cassign 1 = 2
show 2
dest 2
dest 2
dest 1
```