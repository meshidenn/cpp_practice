//# coding -*- utf-8 -*-
#ifndef _COLLECTION_H_
#define _COLLECTION_H_
#include <iostream>
#include "collection.h"

using namespace std;

template <typename T>
class Collection{
private:
    //  z๑f[^
    T* m_pArray;
    //  z๑ฬทณ
    int m_length;
public:
    //  RXgN^
    Collection(T* array, int length);
    //  fXgN^
    ~Collection();
    //  ลๅlฬๆพ
    T getMax();
    //  ลฌlฬๆพ
    T getMin();
    //  ฌชฬ\ฆ
    void showArray();
};
 

 
//  ใณใณในใใฉใฏใฟ
template <typename T>
 Collection<T>::Collection(T* array,int length)
{
    m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < m_length ; i++){
        m_pArray[i] = array[i];
    }
}
//  ใในใใฉใฏใฟ
template <typename T>
 Collection<T>::~Collection()
{
    delete[] m_pArray;
}

template <typename T>
 T Collection<T>::getMax()
{
    T max = m_pArray[0];
    for(int i = 0; i < m_length ; i++){
        if(max < m_pArray[i]){
            max = m_pArray[i];
        }
    }
    return max;
}

template <typename T>
 T Collection<T>::getMin()
{
    T min = m_pArray[0];
    for(int i = 0; i < m_length ; i++){
        if(min > m_pArray[i]){
            min = m_pArray[i];
        }
    }
    return min;
}

template <typename T>
 void Collection<T>::showArray()
{
    for(int i = 0; i < m_length ; i++){
        cout << m_pArray[i] << " ";
    }
    cout << endl;
}

#endif // _COLLECTION_H_
