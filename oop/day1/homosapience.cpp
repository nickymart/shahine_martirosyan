#include "homosapience.h"

char* HomoSapience::getAddress() {
    return _address;
}
void HomoSapience::setAddress(char* address) {
  _address = address;
}
Religion HomoSapience::getReligion() {
  return _religion;
}
void  HomoSapience::setReligion(Religion religion) {
  _religion = religion;
}
