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

cout << attribute.getScore();


  return 0;
}