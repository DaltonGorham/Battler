#include "attribute.h"
#include <iostream>
using namespace std;



Attribute::Attribute() 
{
  Die die;

  for (int i = 0; i < 3; i++){
    die.roll();

    baseScore += die.getFaceValue();
  }

  currentScore = baseScore;
  
}

string Attribute::getName()const{
  return name;
}

int Attribute::getScore()const{
  return currentScore;
}


int Attribute::getModifier()const{
  return (currentScore - 10) / 2;
}

void Attribute::setName(string n){
  name = n;
}

void Attribute::modifyScore(int mod){
  currentScore += mod;
}

void Attribute::resetCurrentScore(){
  currentScore = baseScore;
}
