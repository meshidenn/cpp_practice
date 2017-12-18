#include "twostring.h"
#include <string>

void TwoStrings::setString1(string s)
{
  m_string1 = s;
}

void TwoStrings::setString2(string s)
{
  m_string2 = s;
}

string TwoStrings::getString1(){
  return m_string1;
}

string TwoStrings::getString2(){
  return m_string2;
}

string TwoStrings::getConnectedString(){
  return m_string1 + m_string2;
}

int TwoStrings::getConnectedLength(){
  string s;
  int c;
  s = getConnectedString();
  c = s.length();
  return c;
}
  
