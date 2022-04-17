#ifndef HOMOSAPIENCE_H
#define HOMOSAPIENCE_H

#include "human.h"

enum Religion {};
enum Race {};

class HomoSapience: Human {

  private:
    Religion religion;
    Race race;
  public:
    void Work() override;
    void  Read();

    Religion getReligion();
    void setReligion(Religion);
    Race getRace();
    void setRace(Race);
};

#endif
