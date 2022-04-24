#ifndef HOMOSAPIENCE_H
#define HOMOSAPIENCE_H

#include "human.h"

enum Religion {Christianity, Islam, Atheism, Judaism};
enum Nationality{};
enum Hobby{};
enum Language{};

class HomoSapience: Human {

  private:
    char* _address;
    char* _surname;
    unsigned int _mental_health_level;
    Religion _religion;
    Nationality _nationality;
    Hobby* _hobby;
    HomoSapience* _family;
    Language* _language;


  public:
    HomoSapience(char* address, char* surname, unsigned int mental_health_level,Religion religion,  Nationality nationality, Hobby* hobby, HomoSapience* family, Language* language) {
      _address = address;
      _religion = religion;
      _mental_health_level = mental_health_level;
      _nationality = nationality;
      _hobby = hobby;
      _surname = surname;
      _family = family;
      _language = language;
    }

    void work();
    void read();
    void think();
    void goToGym();
    void meditate();
    void learnLanguage(Language);
    char* speak();


    char* getAddress();
    void setAddress(char*);

    Religion getReligion();
    void setReligion(Religion);

};

#endif
