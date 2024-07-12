#include "die.h"
#include <string>



Die::Die() :
SIDES(6)
{
  roll();
}

int Die::getSides()const{
  return SIDES;
}

int Die::getFaceValue()const{
  return faceValue;
}

void Die::roll(){
  faceValue = rand() % SIDES + 1;
}

string Die::printDie()const{
  string result = "A " + to_string(SIDES) + "-sided Die showing a " + to_string(faceValue);
  return result;
}

