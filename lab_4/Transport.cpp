#include "Transport.h"
#include <iostream>

using namespace std;

Transport::Transport() : type("Unknown"), speed(0), fuel("None") {}

void Transport::SetType(string t) { type = t; }
void Transport::SetSpeed(int s) { speed = s; }
void Transport::SetFuel(string f) { fuel = f; }

void Transport::Info() {
    cout << "Type: " << type << ", Speed: " << speed << " km/h, Fuel: " << fuel << endl;
}

Car::Car() {
    SetType("Car");
    SetSpeed(120);
    SetFuel("Gasoline");
}

void Car::Info() {
    cout << "[Car] ";
    Transport::Info();
}

Bike::Bike() {
    SetType("Bike");
    SetSpeed(25);
    SetFuel("None");
}

void Bike::Info() {
    cout << "[Bike] ";
    Transport::Info();
}

ElectricCar::ElectricCar(int battery) : batteryLife(battery) {
    SetType("Electric Car");
    SetSpeed(150);
    SetFuel("Electricity");
}

void ElectricCar::SetBattery(int b) {
    batteryLife = b;
}

void ElectricCar::Info() {
    cout << "[ElectricCar] ";
    Transport::Info();
    cout << "Battery life: " << batteryLife << " km" << endl;
}

AutopilotCar::AutopilotCar() : ElectricCar(300), autopilotEnabled(true) {
    SetType("Autopilot Car");
}

void AutopilotCar::EnableAutopilot(bool status) {
    autopilotEnabled = status;
}

void AutopilotCar::Info() {
    cout << "[AutopilotCar] ";
    Transport::Info();
    cout << "Battery life: " << batteryLife << " km, Autopilot: "
         << (autopilotEnabled ? "Enabled" : "Disabled") << endl;
}
