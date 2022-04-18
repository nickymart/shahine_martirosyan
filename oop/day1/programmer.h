#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "employee.h"

enum QualificationLevel{Junior, Senior , Manager};
enum Role{Full_stack, Back_end, Front_end, Ddev_ops, Mobile, Data_engineer};
enum ProgLanguage{Cpp, Java, C, PHP, JS};
class Programmer: Employee{
  private:
    QualificationLevel _qualification_level;
    ProgLanguage* _prog_language;
    Role _role;
    float eyesight = 0;

  public:
    char* _company;
    void toWork(){
      eyesight -=0.0001;
    }

    ProgLanguage* getProgLanguage();
    Role getRole();
    QualificationLevel getQualificationLevel();

    void setProgLanguage(ProgLanguage&);
    void setQualificationLevel(QualificationLevel&);
    void setRole(Role&);
};

#endif