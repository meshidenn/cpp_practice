#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_
 
#include <iostream>
#include <string>
#include "airplane.h"
 
using namespace std;
 
//  譌�螳｢讖溘け繝ｩ繧ｹ
class PassengerPlane : public AirPlane {
private:
    string m_type;
public:
    //  コンストラクタ
    PassengerPlane();
    //  飛行する
    void fly();
    //  乗客を運ぶ
    void carryPassengers();
};
 
#endif // _PASSENGERPLANE_H_
