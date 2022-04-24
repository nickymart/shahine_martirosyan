#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "homosapience.h"

class Employee: HomoSapience {
  private:
    unsigned int _salary;

  protected:
    char* _work_place;
    int _lunch_time;
    char* _vacation;
    unsigned int _bonus;

    void goToWork();
    void goToHome();
    void toWork();
    void goToLunch();

  public:

    unsigned int getSalary();
    void setSalary(int salary);
};

#endif
