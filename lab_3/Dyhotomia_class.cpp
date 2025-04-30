#include "Dyhotomia_class.h"
#include <iostream>
#include <cmath>

Dyhotomia_class::Dyhotomia_class() {
    a = 0;
    b = 0;
    eps = 0.0001;
}

Dyhotomia_class::~Dyhotomia_class() {

}

void Dyhotomia_class::setVolumes(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Dyhotomia_class::setTolerance(double vol_eps) {
    eps = vol_eps;
}

double Dyhotomia_class::function(double x) {
    return (x * x) / 4.0 + x - 1.2502;
}

double Dyhotomia_class::derivative(double x) {
    return (x / 2.0) + 1.0;
}


int Dyhotomia_class::count(double &x) {
    double left = a, right = b, mid;

    if (function(left) * function(right) > 0) {
        std::cout << "No root on the interval [" << a << ", " << b << "] or even number of roots." << std::endl;
        return -1;
    }

    while ((right - left) / 2 > eps) {
        mid = (left + right) / 2.0;
        if (function(mid) == 0.0) {
            x = mid;
            return 0;
        } else if (function(left) * function(mid) < 0) {
            right = mid;
        } else {
            left = mid;
        }
    }

    x = (left + right) / 2.0;
    return 0;
}

int Dyhotomia_class::newton(double &x) {
    x = (a + b) / 2.0;

    int iterations = 0;
    while (fabs(function(x)) > eps) {
        double der = derivative(x);

        if(fabs(der) < 1e-10) {
            std::cout << "Derivative is too small. Cannot continue Newton's method." << std::endl;
            return -1;
        }

        x = x - function(x) / der;
        iterations++;

        if (iterations > 1000) {
            std::cout << "Too many iterations. Newton's method did not converge." << std::endl;
            return -1;
        }
    }

    return 0;
}
