#ifndef DYHOTOMIA_CLASS_H
#define DYHOTOMIA_CLASS_H

class Dyhotomia_class {
    public:
    Dyhotomia_class();
    ~Dyhotomia_class();

    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    int count(double &x);
    int newton(double &x);

    private:
    double a;
    double b;
    double eps;

    double function(double x);
    double derivative(double x);
};


#endif
