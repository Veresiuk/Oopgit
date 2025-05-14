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
    virtual ~Transport();

    void SetType(std::string t);
    void SetSpeed(int s);
    void SetFuel(std::string f);
    virtual void Info();
};

class LandVehicle : virtual public Transport {
public:
    LandVehicle();
    virtual ~LandVehicle();
};

class ElectricDevice : virtual public Transport {
public:
    ElectricDevice();
    virtual ~ElectricDevice();
};

class SmartCar : public LandVehicle, public ElectricDevice {
public:
    SmartCar();
    virtual ~SmartCar();
    void Info() override;
};

class LandRobot : virtual public SmartCar {
public:
    LandRobot();
    virtual ~LandRobot();
};

class RaceModule : virtual public SmartCar {
public:
    RaceModule();
    virtual ~RaceModule();
};

class FlightAddon : virtual public SmartCar {
public:
    FlightAddon();
    virtual ~FlightAddon();
};

class AutonomousHybrid : public LandRobot, public RaceModule, public FlightAddon {
public:
    AutonomousHybrid();
    ~AutonomousHybrid();
    void Info() override;
};

#endif 
