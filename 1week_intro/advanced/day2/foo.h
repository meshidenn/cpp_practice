#ifndef _FOO_H_
#define _FOO_H_

class Bar;

class Foo{
private:
  Bar* m_pBar;
public:
  Foo();
  void hoge();
  void fuga(Bar* pBar);
};

#endif // _FOO_H_
