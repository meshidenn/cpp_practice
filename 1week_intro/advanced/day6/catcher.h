#ifndef _CACHER_H_
#define _CACHER_H_
 
#include "BaseballPlayer.h"
 
class Catcher : public BaseballPlayer{
public:
    //  コンストラクタ
    Catcher(string name,int number);
    //  野手がプレイする
    void play();
};
 
#endif // _FIELDER_H_
