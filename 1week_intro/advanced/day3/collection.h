#ifndef _COLLECTION_H_
#define _COLLECTION_H_
#include <iostream>

using namespace std;


template <typename T> class Collection{
private:
    //  ����ǡ���
    T* m_pArray;
    //  �����Ĺ��
    int m_length;
public:
    //  ���󥹥ȥ饯��
    Collection(T* array, int length);
    //  �ǥ��ȥ饯��
    ~Collection();
    //  �����ͤμ���
    T getMax();
    //  �Ǿ��ͤμ���
    T getMin();
    //  ��ʬ��ɽ��
    void showArray();
};

//  �⎳�㎳�⎹��妫�⎯�⎿
template <typename T>
 Collection<T>::Collection(T* array,int length)
{
    m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < m_length ; i++){
        m_pArray[i] = array[i];
    }
}
//  ��夻��妫�⎯�⎿
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
