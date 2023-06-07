## Ujian Praktikum - UTS | No. 3

Pak William adalah seorang guru matematika SD yang juga mempunyai hobi membuat program. Pada suatu hari, Pak William tidak sengaja merusak kalkulator miliknya. Untuk menanggulangi hal tersebut sembari mengasah kemampuan koding, Pak William berniat untuk membuat program kalkulator sederhana demi menggantikan beberapa fungsionalitas dari kalkulator yang rusak. 

Program  kalkulator yang ingin dibuat dapat menerima dan mengevaluasi hasil dari ekspresi aritmetika yang mengandung operator “(”, ”)”, “+”, “-”, “*”, dan “/”. Program hanya dapat menerima dan memproses integer (bukan float/double). Berikut adalah contoh evaluasi ekspresi aritmetika 


Contoh Ekspresi Aritmetika Pada Kalkulator
```

2*(1+3) = 2 * (4) = 8

(2-3)*(5/2) = (-1) * (2) = -2

4*(5-1)/3 = 4*4/3 = 16/3 = 5
```

Kalkulator akan memanfaatkan salah satu STL yaitu stack untuk membuat 2 stack, satu stack berisikan operator dan satu stack berisikan operand. Penjelasan dari algoritma kalkulator dapat dibaca pada header yang disediakan.


Berikut adalah beberapa batasan atau catatan dari program yang akan diimplementasikan

Simbol yang valid pada ekspresi aritmetika adalah angka, “(”, ”)”, “+”, “-”, “*”, dan “/”.

 - Operator “+” tidak akan digunakan untuk operasi unary (simbol “+1” atau “+(2+1)” bukanlah ekspresi yang valid).

 - Operator “-” tidak akan digunakan untuk operasi unary (simbol “-1” atau “-(2+1)” bukanlah ekspresi yang valid).

Tidak akan ada dua operator yang muncul berurutan (“(“ dan “)” tidak termasuk) dan tidak akan ada dua operand yang muncul berurutan.
 
Operand yang muncul pada ekspresi aritmetika dipastikan selalu satuan (di rentang “0-9”, tidak mungkin puluhan keatas)

Setiap “(“ mempunyai “)” yang berkorespondensi.

Setiap angka yang masuk adalah integer dan kalkulasi dilakukan secara integer (tidak perlu menambahkan floor atau ceiling saat melakukan pembagian, ikuti saja behaviour c++ saat terjadi pembagian integer/integer).


Disediakan header `CException.hpp`, `Calculator.hpp`, dan `Calculator.cpp`. Kumpulkan dan lengkapi implementasi method-method pada kelas Calculator di `Calculator.cpp`.

Perhatikan bahwa terdapat exception yang harus ditangani yaitu 

Saat ditemukan simbol yang tidak valid, semisal “^” (pangkat) atau “ ” (spasi).

Terjadi pembagian oleh angka 0. 

Sefruit Tips: Buatlah main program untuk menguji kebenaran kode yang sudah kalian buat


Penjelasan STL Stack

Stack adalah kontainer data dengan mekanisme LIFO (Last In First Out). Elemen paling puncak pada stack disebut sebagai TOP. Penyisipan pada stack selalu dilakukan “di atas” TOP dan penghapusan selalu dilakukan pada TOP. TOP adalah satu-satunya alamat tempat terjadi operasi.

Stack mempunyai beberapa method dasar seperti

bool empty() – Mengembalikan apakah stack sedang kosong.

size_type size() – Mengembalikan ukuran stack. 

reference top() – Mengembalikan reference kepada element TOP pada stack.  

void push(value_type g) – Menambahkan elemen ‘g’ diatas TOP pada stack.  

void pop() – Menghapus element TOP pada stack.
