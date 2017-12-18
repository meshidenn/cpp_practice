#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>
#include <string>

using namespace std;

class Calculation{
 private:
  int c_num1;
  int c_num2;
 public:
  void setNumber1(int n);
  void setNumber2(int n);
  int getNumber1();
  int getNumber2();
  int add();
  int sub();
};

#endif // Calculation_H
 
  
