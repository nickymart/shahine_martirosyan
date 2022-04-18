#include "human.h"

void Human::drink(Drink drink) {
  if(drink == Milk || drink == Water){
    _physical_health_level ++;
  } else if (drink == Gin) {
    _physical_health_level --;
  }
}

void Human::move() {
  _physical_health_level ++;
}

void Human::eat(Food food) {
  if(food == Apple) {
    _physical_health_level ++;
  } else if(food == Pizza || food == Spaghetti ) {
    if(_physical_health_level > 0 && _physical_health_level < 72) {
      _physical_health_level --;
    }
  }
}
