#include "./Die/die.h"
#include "./Die/die.cpp"
#include "./Attribute/attribute.h"
#include "./Attribute/attribute.cpp"
#include <iostream>
#include <ctime>
using namespace std;




int main(){


srand(time(0));
Attribute attribute;

cout << "Curret Score: " << attribute.getScore() << endl;


Die die(7);
cout << die.printDie();







  return 0;
}