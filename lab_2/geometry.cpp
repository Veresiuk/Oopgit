#include "geometry.h"
#include <cmath>

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double cross(const Point& A, const Point& B, const Point& C) {
    return (B.x - A.x)*(C.y - A.y) - (B.y - A.y)*(C.x - A.x);
}

bool isPointOnEdge(const Point& A, const Point& B, const Point& P) {
    double cp = cross(A, B, P);
    if (fabs(cp) > 1e-9) return false;

    double dotproduct = (P.x - A.x) * (B.x - A.x) + (P.y - A.y) * (B.y - A.y);
    if (dotproduct < 0) return false;

    double squaredlength = pow(B.x - A.x, 2) + pow(B.y - A.y, 2);
    if (dotproduct > squaredlength) return false;

    return true;
}

double Triangle::area() const {
    return fabs(cross(A, B, C)) / 2.0;
}

bool Triangle::isDegenerate() const {
    return area() < 1e-9;
}

bool vectorMethodContains(const Triangle& t, const Point& p) {
    double c1 = cross(t.A, t.B, p);
    double c2 = cross(t.B, t.C, p);
    double c3 = cross(t.C, t.A, p);

    bool has_neg = (c1 < 0) || (c2 < 0) || (c3 < 0);
    bool has_pos = (c1 > 0) || (c2 > 0) || (c3 > 0);

    if (!(has_neg && has_pos)) return true;

    return isPointOnEdge(t.A, t.B, p) || isPointOnEdge(t.B, t.C, p) || isPointOnEdge(t.C, t.A, p);
}

bool Triangle::contains(const Point& P) const {
    return vectorMethodContains(*this, P);
}