#ifndef FARMER_H
#define FARMER_H

#include "employee.h"

enum FarmingTypes{Agrivoltaic, Aquaculture, Ranch, Terrace};
enum AgriculturalMachinery{Aquamog, FarmBot, Decorticator};

class Farmer{
  private:
    FarmingTypes* _farming_types;
    AgriculturalMachinery* _agricultural_machinery;
    char* _farming_organizations;

  public:
    FarmingTypes* getFarmingTypes();
    AgriculturalMachinery* getAgriculturalMachinery();
    char* getFarmingOrganization();

    void setFarmingTypes(FarmingTypes*);
    void setAgriculturalMachinery(AgriculturalMachinery*);
    void setFarmingOrganization(char*);
};

#endif
