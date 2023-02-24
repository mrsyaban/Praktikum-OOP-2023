## Praktikum 1 | No. 2

Diberikan file berikut yang berisi sebuah kelas bernama Paper. Kelas Paper menyimpan dua buah atribut integer dan menghasilkan keluaran khusus setiap dilakukan pemanggilan constructor, copy constructor, copy assignment operator, dan destructor.

Perhatikan contoh program berikut:
```
#include "Paper.hpp"
int main() {
    Paper a('A');
    a.fold();
    a.fold();
    return 0;
}
```
Program di atas jika dijalankan dengan kelas Paper yang disediakan, akan mengeluarkan output:

ctor A
fold A(1)
fold A(2)
dtor A 

Sebagai seorang mahasiswa yang telah memahami konsep dasar OOP dengan baik, anda ditugaskan untuk membuat program utama dengan memanfaatkan kelas Paper yang mengeluarkan output sebagai berikut:

ctor A
ctor B
ctor C
cctor C
fold A(1)
fold B(1)
fold C(1)
glue C
fold C(2)
setName C => X
fold C(1)
glue C
fold C(2)
dtor C
dtor X
dtor B
dtor A
Unggahlah program utama tersebut dengan nama file main.cpp