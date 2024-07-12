#include "attribute.h"
#include <iostream>
using namespace std;



Attribute::Attribute() : baseScore(0)
{
  Die die;
  for (int i = 0; i < 3; i++){
    die.roll();
    cout << "Die " << i + 1 << ": " << die.getFaceValue() << endl;
    baseScore += die.getFaceValue();
    
  }

  currentScore = baseScore;
  
}

Attribute::Attribute(string n){
  name = n;
  Attribute();

}

Attribute::Attribute(string n, int value){
  name = n;
  baseScore = value;
  currentScore = value;

  Attribute();
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
