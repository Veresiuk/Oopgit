#include "BuildingLib.h"
using namespace std;

void IBuildingCompany::SetWallCreator(IWallCreator* creator) {
    wallCreator = creator;
}

void BuildingCompany::BuildFoundation() {
    cout << "Building foundation.\n";
}

void BuildingCompany::BuildRoom() {
    wallCreator->BuildWallWithDoor();
    wallCreator->BuildWall();
    wallCreator->BuildWallWithWindow();
    wallCreator->BuildWall();
    cout << "Room finished.\n";
}

void BuildingCompany::BuildRoof() {
    cout << "Building roof.\n";
}

void ConcreteSlabWallCreator::BuildWallWithDoor() {
    cout << "Concrete slab wall with door.\n";
}

void ConcreteSlabWallCreator::BuildWallWithWindow() {
    cout << "Concrete slab wall with window.\n";
}

void ConcreteSlabWallCreator::BuildWall() {
    cout << "Concrete slab wall.\n";
}

void BrickWallCreator::BuildWallWithDoor() {
    cout << "Brick wall with door.\n";
}

void BrickWallCreator::BuildWallWithWindow() {
    cout << "Brick wall with window.\n";
}

void BrickWallCreator::BuildWall() {
    cout << "Brick wall.\n";
}
