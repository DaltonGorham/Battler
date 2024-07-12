#ifndef Attribute_H
#define Attribute_H
using namespace std;
#include "../Die/die.h"
#include <vector>


class Attribute{
  private:
    string name;
    static int baseScore;
    int currentScore;
    vector<Die> dice;
  public:
    Attribute();
    string getName()const;
    int getScore()const;
    int getCurrentScore()const;
    int getModifier()const;
    void setName(string name);
    void modifyScore(int mod);
    void resetCurrentScore();
};





#endif