#include "Item.hpp"

int Item :: totalRevenue = 0;
int Item :: totalItems = 0;

Item :: Item() : serialNum(totalItems+1) {
    this->stock = 0;
    this->price = 0;
    this->sold = 0;
    totalItems = totalItems + 1;
}

Item :: Item(int stock,int price) : serialNum(totalItems+1) {
    this->stock = stock;
    this->price = price;
    this->sold = 0;
    totalItems = totalItems +1;
}

Item::Item(const Item& var) : serialNum(totalItems+1){
    this->stock = var.stock;
    this->price = var.price;
    this->sold = var.sold;
    totalItems += 1;
}

Item::~Item(){
}

int Item :: getSerialNum() const {
    return this->serialNum;
}

int Item :: getSold() const {
    return this->sold;
}

int Item :: getPrice() const {
    return this->price;
}

void Item ::addStock(int addedStock){
    this->stock = this->stock + addedStock;
}

void Item :: sell (int soldStock){
    if(this->stock-soldStock>=0){
        this->stock = this->stock - soldStock;
        this->sold = this->sold + soldStock;
        totalRevenue = totalRevenue + (soldStock * this->price);
    }else{
        this->sold = this->sold + this->stock;
        totalRevenue = totalRevenue + (this->stock * this->price);
        this->stock = 0;
    }
}

void Item :: setPrice (int newPrice){
    this->price = newPrice;
}

