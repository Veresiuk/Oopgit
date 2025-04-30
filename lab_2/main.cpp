#include <iostream>
#include "Geometry.h"
using namespace std;

int main() {
    Triangle t;
    cout << "Enter triangle coordinates :\n";
    cout << "A: "; cin >> t.A.x >> t.A.y;
    cout << "B: "; cin >> t.B.x >> t.B.y;
    cout << "C: "; cin >> t.C.x >> t.C.y;

    if (t.isDegenerate()) {
        cout << "The triangle is degenerate.\n";
    }

    int method;
    cout << "Choose method to check if a point belongs to triangle:\n";
    cout << "1 - Vector method\n";
    cout << "2 - Area method\n";
    cin >> method;

    int n;
    cout << "How many points do you want to check? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Point p;
        cout << "Enter point " << i + 1 << " (x y): ";
        cin >> p.x >> p.y;

        bool inside = t.contains(p);
        bool onEdge = isPointOnEdge(t.A, t.B, p) || isPointOnEdge(t.B, t.C, p) || isPointOnEdge(t.C, t.A, p);

        if (inside && onEdge) {
            cout << "The point is ON the edge of the triangle\n";
        } else if (inside) {
            cout << "The point is INSIDE the triangle\n";
        } else {
            cout << "The point is OUTSIDE the triangle\n";
        }
    }  

    return 0;
}
