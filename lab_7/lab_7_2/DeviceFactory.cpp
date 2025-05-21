#include "DeviceFactory.h"


class AppleLaptop : public Laptop {
public:
    std::string getInfo() const override {
        return "MacBook Pro";
    }
};

class AppleSmartphone : public Smartphone {
public:
    std::string getInfo() const override {
        return "iPhone 15";
    }
};

Laptop* AppleFactory::createLaptop() {
    return new AppleLaptop();
}

Smartphone* AppleFactory::createSmartphone() {
    return new AppleSmartphone();
}


class SamsungLaptop : public Laptop {
public:
    std::string getInfo() const override {
        return "Samsung Galaxy Book";
    }
};

class SamsungSmartphone : public Smartphone {
public:
    std::string getInfo() const override {
        return "Samsung Galaxy S24";
    }
};

Laptop* SamsungFactory::createLaptop() {
    return new SamsungLaptop();
}

Smartphone* SamsungFactory::createSmartphone() {
    return new SamsungSmartphone();
}
