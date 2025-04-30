#include <iostream>
#include "Dyhotomia_class.h"

int main() {
    Dyhotomia_class* dyh = new Dyhotomia_class();

    dyh->setVolumes(0, 2);
    dyh->setTolerance(0.0001);

    int choice;
    std::cout << "Choose the method to solve the equation:" << std::endl;
    std::cout << "1. Bisection Method (Dyhotomia)" << std::endl;
    std::cout << "2. Newton's Method" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    double root;
    int status = -1;

    if (choice == 1) {
        status = dyh->count(root);
        if (status == 0) {
            std::cout << "Root found by Bisection Method: " << root << std::endl;
        } else {
            std::cout << "Root not found by Bisection Method." << std::endl;
        }
    } else if (choice == 2) {
        status = dyh->newton(root);
        if (status == 0) {
            std::cout << "Root found by Newton's Method: " << root << std::endl;
        } else {
            std::cout << "Root not found by Newton's Method." << std::endl;
        }
    } else {
        std::cout << "Invalid choice. Please enter 1 or 2." << std::endl;
    }

    delete dyh;
    return 0;
}
