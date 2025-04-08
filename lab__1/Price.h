#ifndef PRICE_H
#define PRICE_H

#include <iostream>
#include <fstream>

using namespace std;

struct Price {
    int hryvnias;
    short int kopiykas;
};

void add(Price& a, const Price& b);
void multiply(Price& price, int quantity);
void round(Price& price);
void print(const Price& price);

#endif
