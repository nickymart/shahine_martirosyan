#include "./date.h"
#ifndef HUMAN_H
#define HUMAN_H

enum Gender{Male, Female};
enum EyeColor {Brown, Green, blue, grey};
enum Drink{Water, Coffee, Gin, Milk};
enum Food{Apple, Pizza, Spaghetti};
enum HairColor{Black, White, Blonde};

class Human {
    private:
      Gender gender;
      EyeColor eyeColor;
      HairColor hairColor;
      int healthLevel;
      Human mother;
      Human father;
      Date bDay;

    public:
      string library = "";
      char * Speak(string word);
      void Work();
      void Eat(Food);
      void Drink(Drink);
      Date getBDay();
      void setBDay(int day, int month, int year);
};
#endif
