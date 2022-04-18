#ifndef HUMAN_H
#define HUMAN_H

#include "date.h"

enum Gender{Male, Female};
enum EyeColor {Brown, Green, blue, grey};
enum Drink{Water, Coffee, Gin, Milk};
enum Food{Apple, Pizza, Spaghetti};
enum HairColor{Black, White, Blonde};
enum Race {Negroes, Mongoloid, Australoid, Caucasians};

class Human {
    private:
      char* _name;
      unsigned int _physical_health_level;

      unsigned int _weight;
      unsigned int _height;
      Gender _gender;
      EyeColor _eye_color;
      HairColor _hair_color;
      Human* _mother;
      Human* _father;

      Race _race;
      Date _b_day;

    protected:
      virtual void Work() = 0;

      Human();

    public:
      Human(char *name, unsigned int physical_health_level, unsigned int weight,
            unsigned int height, Gender gender, EyeColor eye_color,
            HairColor hair_color, Human *mother, Human *father, Race race,
            Date b_day, Date bDay)
          : _b_day(bDay) {
        _name = name;
        _physical_health_level = physical_health_level;
        _weight = weight;
        _height = height;
        _gender = gender;
        _eye_color = eye_color;
        _hair_color = hair_color;
        _mother = mother;
        _father = father;
        _race = race;
        _b_day = b_day;
      };

      void setHeight(unsigned int);
      void setWeight(unsigned int);

      Gender getGender() const;
      unsigned int getHeight() const;
      unsigned int getWeight() const;

      bool digest();
      bool sleep();
      void eat(Food);
      void drink(Drink);
      void move();
};
#endif
