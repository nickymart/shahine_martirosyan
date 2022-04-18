#include "programmer.h"

void Programmer::setProgLanguage(ProgLanguage &progLanguage) {
  _prog_language = &progLanguage;
}
void Programmer::setQualificationLevel(QualificationLevel &qualification_level) {
  _qualification_level = qualification_level;
}
void Programmer::setRole(Role &role) {
  _role = role;
}

ProgLanguage* Programmer::getProgLanguage() {
  return _prog_language;
}
QualificationLevel Programmer::getQualificationLevel() {
  return _qualification_level;
}
Role Programmer::getRole() {
  return _role;
}
