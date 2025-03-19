#include <iostream>
#include "Price.h"
void add(Price& result, const Price& a, const Price& b) {
    int totalKopiykas = (a.hryvnias + b.hryvnias) * 100 + a.kopiykas + b.kopiykas;
    result.hryvnias = totalKopiykas / 100;
    result.kopiykas = static_cast<short>(totalKopiykas % 100);
}
void multiply(Price& result, const Price& price, int quantity) {
    int totalKopiykas = (price.hryvnias * 100 + price.kopiykas) * quantity;
    result.hryvnias = totalKopiykas / 100;
    result.kopiykas = static_cast<short>(totalKopiykas % 100);
}
void round(Price& price) {
    if (price.kopiykas % 10 < 5) {
        price.kopiykas -= price.kopiykas % 10;
    } else {
        price.kopiykas += (10 - price.kopiykas % 10);
    }
    if (price.kopiykas >= 100) {
        price.hryvnias += price.kopiykas / 100;
        price.kopiykas %= 100;
    }
}
void print(const Price& price) {
    cout << price.hryvnias << " UAH " << price.kopiykas << " kop" << endl;
}
