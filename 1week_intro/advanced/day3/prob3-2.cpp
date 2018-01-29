#include <iostream>
#include "collection.h"
 
using namespace std;
 
int main(){
    //  配列変数の定義
    double array[] = { 1.2, 3.5, 8.1, 2.0, 2.2};
    Collection<double>* c = new Collection <double> (array,5);
    c->showArray();
    cout << "最大値 : " << c->getMax() << endl;
    cout << "最小値 : " << c->getMin() << endl;
    delete c;
    return 0;
}
