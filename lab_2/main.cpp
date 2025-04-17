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

    int n;
    cout << "How many points do you want to check? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Point p;
        cout << "Enter point " << i + 1 << " (x y): ";
        cin >> p.x >> p.y;

        if (t.contains(p)) {
            cout << "The point is inside the triangle\n";
        } else {
            cout << "The point is NOT inside the triangle\n";
        }
    }

    return 0;
}
