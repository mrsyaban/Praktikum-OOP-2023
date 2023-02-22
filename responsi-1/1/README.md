## Responsi 1 | No. 1

Berikut adalah implementasi dari kelas Hello.cpp yang isinya hanya sebuah konstruktor, dan konstruktor tersebut mencetak "Hello World!!". Jika sebuah objek kelas Hello dideklarasikan, maka konstruktor akan dihidupkan dan tercetaklah "Hello World!!" secara otomatis tanpa perlu dilakukan pemanggilan

```
#include "Hello.h"
#include <iostream>
using namespace std;

// Hello constructor
Hello::Hello() {
  cout << "Hello World!!" << endl;
}
```

Dengan program utama:

```
#include "Hello.h"

int main () {
  Hello h;
  return 0;
}
```

Tugas anda: Unggah file Hello.cpp yang isinya seperti di atas, yang akan dikompilasi dan dieksekusi dengan program utama yang disediakan oleh sistem.