#include "fermer.h"

FarmingTypes* Farmer::getFarmingTypes() {
  return _farming_types;
}
AgriculturalMachinery* Farmer::getAgriculturalMachinery() {
  return _agricultural_machinery;
}
char* Farmer::getFarmingOrganization() {
  return _farming_organizations;
}

void Farmer::setAgriculturalMachinery(AgriculturalMachinery *agricultural_machinery) {
  _agricultural_machinery = agricultural_machinery;
}
void Farmer::setFarmingOrganization(char *farming_organization) {
  _farming_organizations = farming_organization;
}
void Farmer::setFarmingTypes(FarmingTypes *farming_types) {
  _farming_types = farming_types;
}