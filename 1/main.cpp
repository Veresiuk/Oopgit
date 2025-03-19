#include "Price.h"

int main() {
    ifstream file("prices.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Price total{0, 0}; 
    int h, k, quantity;
    
    while (file >> h >> k >> quantity) {
        Price item{h, static_cast<short>(k)};
        Price temp; 
        multiply(temp, item, quantity);
        add(total, total, temp);
    }
    
    file.close();

    cout << "Total amount: ";
    print(total);
    round(total);
    cout << "Amount to be paid (rounded): ";
    print(total);
    
    return 0;
}
