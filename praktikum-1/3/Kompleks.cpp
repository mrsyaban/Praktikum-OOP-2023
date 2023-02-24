#include "Kompleks.h"
#include <iostream>
using namespace std;

int Kompleks::n_kompleks = 0;

Kompleks::Kompleks(){
	this->real = 0;
	this->imaginer =0;
	n_kompleks++;
}

Kompleks::Kompleks(int real, int imaginer){
	this->real = real;
	this->imaginer = imaginer;
	n_kompleks++;
}

int Kompleks::GetReal() const {
	return this->real;
}

int Kompleks::GetImaginer() const {
	return this->imaginer;
}

void Kompleks::SetReal(int real){
	this->real = real;
}

void Kompleks::SetImaginer(int imaginer){
	this->imaginer = imaginer;
}

Kompleks operator+(const Kompleks& k1, const Kompleks& k2){
	Kompleks res;
	int reall = k1.GetReal() + k2.GetReal();
	int ima = k1.GetImaginer() + k2.GetImaginer();
	res.SetReal(reall);
	res.SetImaginer(ima);
	return res;
}

Kompleks operator-(const Kompleks& k1, const Kompleks& k2){
	Kompleks res;
	int reall = k1.GetReal() - k2.GetReal();
	int ima = k1.GetImaginer() - k2.GetImaginer();
	res.SetReal(reall);
	res.SetImaginer(ima);
	return res;
}

Kompleks operator*(const Kompleks& k1, const Kompleks& k2){
	Kompleks res;
	int reall = (k1.GetReal()*k2.GetReal())-(k1.GetImaginer()*k2.GetImaginer());
	int ima = (k1.GetImaginer()*k2.GetReal()) + (k1.GetReal()*k2.GetImaginer());
	res.SetReal(reall);
	res.SetImaginer(ima);
	return res;
}

Kompleks operator*(const Kompleks& k1, const int k){
	Kompleks res;
	int reall = k1.GetReal()*k;
	int ima = k1.GetImaginer()*k;
	res.SetReal(reall);
	res.SetImaginer(ima);
	return res;
}

Kompleks operator*(const int k, const Kompleks& k1){
	Kompleks res;
	int reall = k1.GetReal()*k;
	int ima = k1.GetImaginer()*k;
	res.SetReal(reall);
	res.SetImaginer(ima);
	return res;
}

int Kompleks::CountKompleksInstance(){
	return n_kompleks;
}

void Kompleks::Print(){
	cout << this->real;
	if (this->imaginer > 0){
		cout << '+' << this->imaginer;
	} else {
		cout << this->imaginer;
	}
	cout << 'i' << endl;
}