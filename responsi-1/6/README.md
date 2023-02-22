## Responsi 1 | No. 6

Kelas BigNumber merupakan kelas yang digunakan untuk melakukan komputasi pada angka yang sangat besar, biasanya digunakan ketika tidak muat dalam tipe data int atau long int (misal 10^10000). Cara kerja kelas ini adalah menyimpan setiap digit angka dalam sebuah array. Dalam contoh kelas ini, banyak digit maksimal yang dapat disimpan adalah 20.

Berikut adalah contoh penyimpanan bilangan desimal dalam BigNumber.

| Angka	| BigNumber |
|-------|-----------|
| 123	| [3, 2, 1, 0, 0, 0, 0, 0, ...] |
| 2210	| [0, 1, 2, 2, 0, 0, 0, 0, ...] |

Operator yang perlu diimplementasikan adalah ==, <, >, dan +.
Operasi perbandingan (==, <, >) diimplementasikan dengan membandingkan digit di posisi yang sama:
Contoh perbandingan 123 < 2210:

| Angka	| BigNumber |
|-------|------------|
| 123	[3, 2, 1, 0, 0, 0, 0, 0, ...] |
| 2210	[0, 1, 2, 2, 0, 0, 0, 0, ...] |

Lakukan perulangan dari digit ke-20, bandingkan nilainya apakah lebih besar, lebih kecil, atau sama. Jika sama, maka lanjutkan ke digit selanjutnya (digit 19), dan seterusnya. Pada tabel diatas, kita sedang membandingkan digit 0 dan 2, karena 0 < 2, maka 123 < 2210.


Operasi penambahan (+), yaitu penjumlahan setiap digit dari 2 BigNumber
Contoh penjumlahan 123 + 2210:

| Angka |	BigNumber |
|-------|-------------|
| 123	|[3, 2, 1, 0, 0, 0, 0, 0, ...] |
| 2210	|[0, 1, 2, 2, 0, 0, 0, 0, ...] |
| 123 + 2210 = 2333 |	[3, 3, 3, 2, 0, 0, 0, 0, ...] |


BigNumber juga punya aksesor [i] untuk mengakses digit ke i sesuai indeks array BigNumber. Operator [] ini kalian gunakan sebagai getter dan setter.
Berikut adalah contoh penggunaannya

```
BigNumber bn(123);
cout << bn[0] << endl; // 3
cout << bn[1] << endl; // 2
cout << bn[2] << endl; // 1
cout << bn[3] << endl; // 0
bn[0] = 5;
cout << bn[0] << endl; // 5
```

Silahkan gunakan main sederhana berikut untuk membantu menguji kode kalian.
```
#include <iostream>
#include "BigNumber.hpp"
using namespace std;

ostream& operator<<(ostream& os, const BigNumber& bn) {
  bool foundNonZero = false;
  for (int i = BigNumber::max_digit - 1; i >= 0; i--) {
    if (bn[i] > 0) {
      foundNonZero = true;
    }
    if (foundNonZero) {
      os << bn[i];
    }
  }
  if (!foundNonZero) {
    os << "0";
  }
  return os;
}

int main() {
  BigNumber a(123), b("2210");
  cout << a << endl; // 123
  cout << b << endl; // 2210
  cout << (a < b) << endl; // 1
  cout << (a > b) << endl; // 0
  cout << (a + b) << endl; // 2333
  return 0;
}
```

Diberikan definisi dan sebagian realisasi BigNumber, lengkapilah bagian BigNumber.cpp yang masih kosong (operator ==, <, >, dan +)! Perhatikan hint yang sudah ada juga.

Kumpulkan `BigNumber.cpp`