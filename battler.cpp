#include "./Die/die.h"
#include "./Die/die.cpp"
#include "./Attribute/attribute.h"
#include "./Attribute/attribute.cpp"
#include <iostream>
#include <ctime>
using namespace std;




int main(){

srand(time(0));
int times;
cout << "how many times do you want to play?";
cin >> times;



for (int i = 0; i < times; i++) {
    Attribute attribute;
    std::cout << "Base Score: " << attribute.getScore() << endl;
    std::cout << "Current Score: " << attribute.getCurrentScore() << endl << endl;
}




  

  return 0;
}