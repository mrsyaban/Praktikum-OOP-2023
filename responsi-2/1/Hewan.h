#include <iostream>
using namespace std;

class Hewan {
	public:
		Hewan(string namahewan) {nama = namahewan;} 
        ~Hewan(){cout << "Hewan mati "<<nama<<endl;}
        virtual void print(){
            cout << "Hewan ini namanya " <<nama<<endl;
        }
    protected:
		string nama;
};

class Kucing: public Hewan {
	public:
		Kucing(string namaKucing) : Hewan(namaKucing) {};
        virtual ~Kucing(){cout<<"Kucing mati "<<nama<<endl;};

};

class Anjing: public Hewan {
	public:
		Anjing(string namaAnjing) : Hewan(namaAnjing) {};
        ~Anjing(){cout<<"Anjing mati "<<nama<<endl;};
        void print(){
            cout << "Anjing ini namanya "<<nama<<endl;
        }

};

class AnjingBulldog : public Anjing{
	public:
		AnjingBulldog(string nm, string milik) : Anjing(nm) {pemilik = milik;}
        ~AnjingBulldog(){cout << "Anjing bulldog mati "<<nama<<endl;}
		void print() {cout <<"Anjing bulldog ini namanya " << nama <<". Pemiliknya adalah "<<pemilik <<endl;}
	protected:
		string pemilik;
};

class KucingAnggora : public Kucing{
	public:
		KucingAnggora(string nm, string milik) : Kucing(nm) {pemilik = milik;}
        ~KucingAnggora(){cout << "Kucing anggora mati "<<nama<<endl;}
		void print() {cout <<"Kucing anggora ini namanya " << nama <<". Pemiliknya adalah "<<pemilik<<endl;}
	protected:
		string pemilik;
};