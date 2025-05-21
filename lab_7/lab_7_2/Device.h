#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Laptop {
public:
    virtual std::string getInfo() const = 0;
    virtual ~Laptop() {}
};

class Smartphone {
public:
    virtual std::string getInfo() const = 0;
    virtual ~Smartphone() {}
};

#endif 
