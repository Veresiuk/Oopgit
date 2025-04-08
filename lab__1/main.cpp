#include "Price.h"

int main() {
    ifstream file("prices.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Price total{0, 0}; 
     int h, quantity;
     short int k;
    
    while (file >> h >> k >> quantity) {
        Price item{h, k};
        multiply(item, quantity);
        add(total, item);
    }
    
    file.close();

    cout << "Total amount: ";
    print(total);
    round(total);
    cout << "Amount to be paid (rounded): ";
    print(total);
    
    return 0;
}
