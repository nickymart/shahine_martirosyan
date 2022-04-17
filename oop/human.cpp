#include "./human.h"
#include "./date.h"

void Human::Speak(string word) {
    library += word;
    library += " ";
}

void Human::Drink(Drink drink) {
  if(drink == Milk || drink == Water){
    healthLevel++;
  } else if (drink == Gin) {

  }
}

void Human::Walk() {
  healthLevel++;
}

void Human::Eat(Food food) {
  if(food == Apple) {
    healthLevel++;
  } else if(food == Pizza || food == Spaghetti ) {
    if(healthLevel > 0 && healthLevel < 72) {
      healthLevel--;
    }
  }
}
