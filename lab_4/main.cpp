#include <iostream>
#include "Transport.h"

int main() {
    Car myCar;
    myCar.Info();
    std::cout << "The car speeds along the highway.\n\n";

    Bike myBike;
    myBike.Info();
    std::cout << "The bike is eco-friendly and perfect for short trips.\n\n";

    ElectricCar myElectricCar(400);
    myElectricCar.Info();
    std::cout << "The electric car drives silently. Recharging...\n\n";

    AutopilotCar myAutoCar;
    myAutoCar.Info();
    std::cout << "The autopilot car navigates on its own.\n";

    return 0;
}
