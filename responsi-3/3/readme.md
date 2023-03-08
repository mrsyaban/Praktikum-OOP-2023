## Responsi 3 | No. 3

Kariya Ramen adalah sebuah restoran ramen milik Kariya-san. Seorang engineer dari restoran lain yang baru saja pensiun menyarankan Kariya-san untuk menghubungi anda untuk menyelesaikan masalahnya.

Terdapat banyak sekali meja di restoran Kariya Ramen sehingga Kariya-san kesulitan untuk mencatat berapa total yang dihabiskan oleh sebuah meja. Kariya-san meminta anda untuk membuat program yang dapat membantu untuk mengatasi persoalan pada restoran tersebut.

Implementasikan kelas RestoranRamen pada header file RestoranRamen.hpp yang diberikan berikut ini dengan menggunakan STL map

Map merupakan sebuah tipe data yang menyimpan nilai key dan value secara berpasangan. Jika didapatkan nilai key maka dapat diambil nilai value. Key pada bersifat unik.

Pada STL map didefinisikan juga sebuah tipe data pair yang menggambarkan pasangan nilai (a,b). Terdapat dua pointer atribut pada pair, yaitu first dan second untuk mendapatkan nilai a dan b.

```
#include<map>
#include<iostream>
using namespace std;
// Membuat sebuah pair dengan nilai (1,2)
pair<int,int> sample_pair(1,2);

cout << "Hasil:" << sample.first << endl; // Hasil:1
cout << "Hasil:" << sample.second << endl; // Hasil:2
```
Berikut merupakan beberapa method dasar pada map
```
#include<map>
#include<iostream>
using namespace std;

// Membuat sebuah map kosong dengan key bertipe int dan value bertipe int
map<int,int> test_map;

test_map.insert(pair<int,int>(1,5)); // Memasukkan pasangan nilai key 1 dan value 5
test_map.insert(pair<int,int>(2,6)); // Memasukkan pasangan nilai key 2 dan value 6
test_map.insert(pair<int,int>(3,7)); // Memasukkan pasangan nilai key 3 dan value 7

cout << test_map[1] << endl; // Mengambil nilai dengan key 1 (nilai key 1 = 5)
test_map[2] = 3; // Mengubah nilai dengan key 2 menjadi 3
test_map.erase(3); // Menghapus entry map dengan key 3

cout << test_map.size() << endl; // Mengembalikan jumlah entry pada map (jumlah entry tersisa = 2)
```
Seperti halnya STL lain, juga terdapat iterator pada STL map. Akibatnya terdapat juga fungsi seperti begin(), end(), dan find(T key) untuk mengembalikan iterator. Iterator akan mengembalikan pair<A,B>* sehingga untuk mengakses key dan value digunakan ->
```
#include<map>
#include<iostream>
using namespace std;

// Membuat sebuah map kosong dengan key bertipe int dan value bertipe int
map<int,int> test_map;

test_map.insert(pair<int,int>(1,5));
test_map.insert(pair<int,int>(2,6));
test_map.insert(pair<int,int>(3,7));

map<int,int>::iterator itr = test_map.begin(); // Mengambil iterator untuk elemen pertama pada map
cout << itr->first << "," << itr->second << endl; // Mencetak 1,5

itr = test_map.find(2); // Mencari data dengan key 2
if(itr != test_map.end()){ // Jika tidak ditemukan .find() akan mengembalikan iterator pada .end()
  cout << itr->first << "," << itr->second << endl; // Mencetak 2,6  
} else {
  cout << "Tidak ketemu" << endl;
}
```