#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

int main(){
  Foo foo;
  Foo* pfoo;
  Bar bar(pfoo);
  Bar* pbar;
  foo.hoge();
  bar.func2();
  foo.fuga(pbar);
  foo.hoge();
  return 0;
}
