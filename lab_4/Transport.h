#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

class Transport {
protected:
    std::string type;
    int speed;
    std::string fuel;

public:
    Transport();
    virtual void Info();
    void SetType(std::string t);
    void SetSpeed(int s);
    void SetFuel(std::string f);
};

class Car : public Transport {
public:
    Car();
    void Info() override;
};

class Bike : public Transport {
public:
    Bike();
    void Info() override;
};

class ElectricCar : public Transport {
protected:
    int batteryLife;

public:
    ElectricCar(int battery);
    void SetBattery(int b);
    void Info() override;
};

class AutopilotCar : public ElectricCar {
    bool autopilotEnabled;

public:
    AutopilotCar();
    void EnableAutopilot(bool status);
    void Info() override;
};

#endif
