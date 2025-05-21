#include <iostream>
#include "DeviceFactory.h"

void showDevices(IDeviceFactory* factory) {
    Laptop* laptop = factory->createLaptop();
    Smartphone* smartphone = factory->createSmartphone();

    std::cout << "Laptop: " << laptop->getInfo() << std::endl;
    std::cout << "Smartphone: " << smartphone->getInfo() << std::endl;

    delete laptop;
    delete smartphone;
}

int main() {
    std::cout << "Using AppleFactory:\n";
    IDeviceFactory* appleFactory = new AppleFactory();
    showDevices(appleFactory);
    delete appleFactory;

    std::cout << "\nUsing SamsungFactory:\n";
    IDeviceFactory* samsungFactory = new SamsungFactory();
    showDevices(samsungFactory);
    delete samsungFactory;

    return 0;
}
