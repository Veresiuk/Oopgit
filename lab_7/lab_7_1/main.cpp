#include "BuildingLib.h"

int main() {
    BrickWallCreator brick;
    ConcreteSlabWallCreator concrete;

    BuildingCompany company;

    company.BuildFoundation();
    company.SetWallCreator(&concrete);
    company.BuildRoom();

    company.SetWallCreator(&brick);
    company.BuildRoom();
    company.BuildRoom();

    company.BuildRoof();

    return 0;
}
