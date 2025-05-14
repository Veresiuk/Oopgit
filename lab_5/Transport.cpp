#include <iostream>
#include "Transport.h"

using namespace std;

Transport::Transport() : type("Unknown"), speed(0), fuel("None") {
    cout << "[Transport constructor]\n";
}

Transport::~Transport() {
    cout << "[Transport destructor]\n";
}

void Transport::SetType(string t) { type = t; }
void Transport::SetSpeed(int s) { speed = s; }
void Transport::SetFuel(string f) { fuel = f; }

void Transport::Info() {
    cout << "Type: " << type << ", Speed: " << speed << " km/h, Fuel: " << fuel << endl;
}

LandVehicle::LandVehicle() {
    cout << "[LandVehicle constructor]\n";
}
LandVehicle::~LandVehicle() {
    cout << "[LandVehicle destructor]\n";
}

ElectricDevice::ElectricDevice() {
    cout << "[ElectricDevice constructor]\n";
}
ElectricDevice::~ElectricDevice() {
    cout << "[ElectricDevice destructor]\n";
}

SmartCar::SmartCar() {
    cout << "[SmartCar constructor]\n";
}
SmartCar::~SmartCar() {
    cout << "[SmartCar destructor]\n";
}
void SmartCar::Info() {
    cout << "[SmartCar] ";
    Transport::Info();
    cout << "Smart features enabled.\n";
}

LandRobot::LandRobot() {
    cout << "[LandRobot constructor]\n";
}
LandRobot::~LandRobot() {
    cout << "[LandRobot destructor]\n";
}

RaceModule::RaceModule() {
    cout << "[RaceModule constructor]\n";
}
RaceModule::~RaceModule() {
    cout << "[RaceModule destructor]\n";
}

FlightAddon::FlightAddon() {
    cout << "[FlightAddon constructor]\n";
}
FlightAddon::~FlightAddon() {
    cout << "[FlightAddon destructor]\n";
}

AutonomousHybrid::AutonomousHybrid() {
    cout << "[AutonomousHybrid constructor]\n";
}
AutonomousHybrid::~AutonomousHybrid() {
    cout << "[AutonomousHybrid destructor]\n";
}
void AutonomousHybrid::Info() {
    cout << "[AutonomousHybrid] ";
    Transport::Info();
    cout << "Fully integrated autonomous hybrid system.\n";
}
