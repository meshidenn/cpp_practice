#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <iostream>
#include <string>

using namespace std;

class AirPlane{
 public:
  virtual string getType() { return m_type; }
 protected:
  string m_type;
};

#endif // _AIRPLANE_H_
  
