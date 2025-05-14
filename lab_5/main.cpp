#include <iostream>
#include "Transport.h"

int main() {
    std::cout << "--- Creating AutonomousHybrid ---\n";
    AutonomousHybrid hybrid;
    hybrid.SetType("NextGen Hybrid");
    hybrid.SetSpeed(250);
    hybrid.SetFuel("Electric+Hydrogen");
    hybrid.Info();
    std::cout << "--- Done ---\n";
    return 0;
}
