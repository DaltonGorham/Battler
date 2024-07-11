#ifndef Die_H
#define Die_H


class Die{
  private:
    int faceValue;
    const int SIDES;
  public:
    Die();
    int getFaceValue()const;
    int getSides()const;
    string printDie()const;
    void roll();
};








#endif