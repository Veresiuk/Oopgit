#include <iostream>
#include "Price.h"

void add(Price& a, const Price& b) {
    int totalKopiykas = (a.hryvnias + b.hryvnias) * 100 + a.kopiykas + b.kopiykas;
    a.hryvnias = totalKopiykas / 100;
    a.kopiykas = totalKopiykas % 100; 
}
void multiply(Price& price, int quantity) {
    int totalKopiykas = (price.hryvnias * 100 + price.kopiykas) * quantity;
    price.hryvnias = totalKopiykas / 100;
    price.kopiykas = totalKopiykas % 100;
}
void round(Price& price) {
    if (price.kopiykas % 10 < 5) {
        price.kopiykas -= price.kopiykas % 10;
    } else {
        price.kopiykas += (10 - price.kopiykas % 10);
        cout <<"Amount to 10 kop\n" ;
    }
    if (price.kopiykas >= 100) {
        price.hryvnias += price.kopiykas / 100;
        price.kopiykas %= 100; 
        cout << "Amount finish\n";
    }
}
void print(const Price& price) {
    cout << price.hryvnias << " UAH " << price.kopiykas << " kop" << endl;
}

