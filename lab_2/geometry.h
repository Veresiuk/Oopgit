#ifndef GEOMETRY_H
#define GEOMETRY_H

struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;
    bool contains(const Point& P) const;
    double area() const;
    bool isDegenerate() const;
};

double distance(const Point& p1, const Point& p2);
bool isPointOnEdge(const Point& A, const Point& B, const Point& P);
double cross(const Point& A, const Point& B, const Point& C);
bool vectorMethodContains(const Triangle& t, const Point& p);

#endif
