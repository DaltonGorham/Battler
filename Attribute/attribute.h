#ifndef Attribute_H
#define Attribute_H
using namespace std;
#include "../Die/die.h"
#include <vector>


class Attribute{
  private:
    string name;
    int baseScore;
    int currentScore;
  public:
    Attribute();
    string getName()const;
    int getScore()const;
    int getModifier()const;
    void setName(string name);
    void modifyScore(int mod);
    void resetCurrentScore();
};





#endif