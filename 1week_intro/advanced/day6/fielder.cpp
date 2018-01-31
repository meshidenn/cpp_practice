#include "fielder.h"
 
Fielder::Fielder(string name,int number) 
{
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}
//  ピッチャーがプレイする
void Fielder::play()
{
    cout << "ピッチャーの球を受ける" << endl;
}
