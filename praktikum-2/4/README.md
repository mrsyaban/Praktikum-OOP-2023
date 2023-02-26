## Praktikum 2 | No. 4

Berikut adalah implementasi dari kelas Tool, Pickaxe, dan ReinforcedAxe. Kelas-kelas tersebut merepresentasikan peralatan yang mempunyai turunan beliung dan kapak kuat. Atribut dan method dari kelas-kelas tersebut dapat dilihat pada kode implementasi tersebut, di mana setiap method akan menghasilkan keluaran khusus jika dipanggil.

Berikut adalah header untuk kelas Tool, Pickaxe, dan ReinforcedAxe (terlampir).

Contoh Main
```
int main() {
  Pickaxe p;
  p.use();
  return 0;
}
```
Contoh Output

```
tool crafted! 3 2
pickaxe crafted! 3 2
swing! swing! diamonds found!
pickaxe destroyed! 3 2
tool destroyed! 3 2
```

Unggahlah file main.cpp yang berisi main program, untuk menghasilkan keluaran sebagai berikut:
```
tool crafted! 3 2
pickaxe crafted! 3 2
swing! swing! diamonds found!
pickaxe enchanted!
tool copy crafted! 3 2
pickaxe copy crafted! 3 2
tool crafted! 3 2
pickaxe crafted! 3 2
pickaxe copied! 3 2
tool crafted! 3 4
reinforced axe crafted! 3 4
chip chop chip chop! 3 4
tool crafted! 3 4
reinforced axe copy crafted! 3 4
reinforced axe's grip enchanted! 3 4
tool crafted! 3 4
reinforced axe copy crafted! 3 4
reinforcing axe! 6 8
tool crafted! 6 8
reinforced axe copy crafted! 6 8
reinforced axe is repaired! 6 8
reinforced axe destroyed! 3 4
tool destroyed! 3 4
reinforced axe destroyed! 3 4
tool destroyed! 3 4
reinforced axe destroyed! 6 8
tool destroyed! 6 8
pickaxe destroyed! 3 2
tool destroyed! 3 2
pickaxe destroyed! 3 2
tool destroyed! 3 2
```