#ifndef PRICE_H
#define PRICE_H

#include <iostream>
#include <fstream>

using namespace std;

struct Price {
    int hryvnias;
    short kopiykas;
};

void add(Price& result, const Price& a, const Price& b);
void multiply(Price& result, const Price& price, int quantity);
void round(Price& price);
void print(const Price& price);

#endif
