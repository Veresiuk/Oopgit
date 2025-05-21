#ifndef BUILDING_LIB_H
#define BUILDING_LIB_H

#include <iostream>

class IWallCreator {
public:
    virtual void BuildWallWithDoor() = 0;
    virtual void BuildWallWithWindow() = 0;
    virtual void BuildWall() = 0;
    virtual ~IWallCreator() {}
};

class IBuildingCompany {
protected:
    IWallCreator* wallCreator;
public:
    virtual void SetWallCreator(IWallCreator* creator);
    virtual void BuildFoundation() = 0;
    virtual void BuildRoom() = 0;
    virtual void BuildRoof() = 0;
    virtual ~IBuildingCompany() {}
};

class BuildingCompany : public IBuildingCompany {
public:
    void BuildFoundation() override;
    void BuildRoom() override;
    void BuildRoof() override;
};

class ConcreteSlabWallCreator : public IWallCreator {
public:
    void BuildWallWithDoor() override;
    void BuildWallWithWindow() override;
    void BuildWall() override;
};

class BrickWallCreator : public IWallCreator {
public:
    void BuildWallWithDoor() override;
    void BuildWallWithWindow() override;
    void BuildWall() override;
};

#endif
