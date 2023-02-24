#include <string>
#include <iostream>
using namespace std;

class Hewan {
    protected:
        string nama;

    public:
        Hewan(string nama){
            this->nama = nama;
        }
        virtual ~Hewan(){
            cout << "Hewan mati " << nama << endl;
        }
        virtual void print(){
            cout << "Hewan ini namanya" << nama << endl;
        }
};

class Kucing : public Hewan{
    public:
        Kucing(string nama) : Hewan(nama){};
        virtual ~Kucing(){
            cout << "Kucing mati " << nama << endl;
        };
};

class Anjing : public Hewan{
    public:
        Anjing(string nama): Hewan(nama){};
        virtual ~Anjing(){
            cout << "Anjing mati " << nama << endl;
        };

        virtual void print(){
            cout << "Anjing ini namanya" << nama << endl;
        }
};

class KucingAnggora : public Kucing {
    protected:
        string pemilik;
    
    public: 
        KucingAnggora(string nama, string pemilik) : Kucing(nama){
            this->pemilik = pemilik;
        }

        virtual void print(){
            cout << "Kucing anggora ini namanya " << nama << ". Pemiliknya adalah " << pemilik << endl;
        }

        virtual ~KucingAnggora(){
            cout << 
        };
};

class AnjingBulldog : public Anjing {
    protected:
        string pemilik;
    
    public:
        AnjingBulldog(string nama, string pemilik) : Anjing(nama) {
            this->pemilik = pemilik;
        }

        virtual void print(){
            cout << "Anjing bulldog ini namanya " << nama << ". Pemiliknya adalah " << pemilik << endl;
        }

        virtual ~AnjingBulldog(){};
};

// int main() {
// 	Hewan *array_hewan[3];
// 	Hewan a("a");
// 	Kucing b("b");
// 	Anjing c("c");
// 	array_hewan[0] = &a;
// 	array_hewan[1] = &b;
// 	array_hewan[2] = &c;
	
// 	for(int i=0;i<3;i++) {
// 		array_hewan[i]->print(); //Keluaran = "[Makhluk] ini namanya [nama]\n"
// 	}
// 	array_hewan[1] = &c;
// 	array_hewan[1]->print();
// 	Kucing *d = new KucingAnggora("d","1");
// 	Anjing *e = new AnjingBulldog("e","2");;
// 	d->print();
// 	e->print();
// 	KucingAnggora f("f","3");
// 	AnjingBulldog g("g","4");
// 	f.print();
// 	g.print();
// 	delete e;
// 	delete d;
// 	return 0;
// }
