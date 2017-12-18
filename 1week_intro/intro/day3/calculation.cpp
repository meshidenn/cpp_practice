#include "calculation.h"
#include <string>

void Calculation::setNumber1(int n){
  c_num1 = n;
}

void Calculation::setNumber2(int n){
  c_num2 = n;
}

int Calculation::getNumber1(){
  return c_num1;
}

int Calculation::getNumber2(){
  return c_num2;
}

int Calculation::add(){
  return c_num1 + c_num2;
}

int Calculation::sub(){
  return c_num1 - c_num2;
}
