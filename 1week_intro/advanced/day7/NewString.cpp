#include "NewString.h"
#include <cstdlib>
#include <string>
#include <algorithm>
 
//  コンストラクタ
NewString::NewString()
{
    m_value = "";
}
//  値を代入するコンストラクタ①（文字列から）
NewString::NewString(string value)
{
    m_value = value;
}
//  値を代入するコンストラクタ②（他のクラスから)
NewString::NewString(NewString& value)
{
    m_value = value.getValue();
}
//  値を代入
NewString& NewString::operator= (NewString& n)
{
    m_value = n.getValue();
    return *this;
}
//  stringで値を取得
string NewString::getValue()
{
    return m_value;
}

// ==
bool NewString::operator== (const NewString& n)
{
  //  std:: transform(m_value.begin(), m_value.end(), m_value.begin(), ::tolower);
  //std:: transform(n.m_value.begin(), n.m_value.end(), n.m_value.begin(), ::tolower);
  if (m_value.size() != n.m_value.size()) {
    return false;
  }
  for (int i = 0; i < m_value.size(); i++) {
    if (tolower(m_value[i]) != tolower(n.m_value[i])) {
      return false;
    }
  }
  return true;
}
