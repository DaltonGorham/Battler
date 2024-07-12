#include "attribute.h"
#include <iostream>
using namespace std;

int Attribute::baseScore = 0;


Attribute::Attribute() : dice(3), currentScore(0)
{
  for (int i = 0; i < dice.size(); i++){
    dice[i].roll();
    cout << "die: " << i + 1 << " rolled: " << dice[i].getFaceValue() << endl;
    baseScore += dice[i].getFaceValue();
    currentScore += dice[i].getFaceValue();
  }


  
  
}

string Attribute::getName()const{
  return name;
}

int Attribute::getScore()const{
  return baseScore;
}

int Attribute::getCurrentScore()const{
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
