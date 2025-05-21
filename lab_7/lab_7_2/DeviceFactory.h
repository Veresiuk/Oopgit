#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H

#include "Device.h"

class IDeviceFactory {
public:
    virtual Laptop* createLaptop() = 0;
    virtual Smartphone* createSmartphone() = 0;
    virtual ~IDeviceFactory() {}
};

class AppleFactory : public IDeviceFactory {
public:
    Laptop* createLaptop() override;
    Smartphone* createSmartphone() override;
};

class SamsungFactory : public IDeviceFactory {
public:
    Laptop* createLaptop() override;
    Smartphone* createSmartphone() override;
};

#endif 
