//# coding -*- utf-8 -*-
#ifndef _COLLECTION_H_
#define _COLLECTION_H_
#include <iostream>
#include "collection.h"

using namespace std;

template <typename T>
class Collection{
private:
    //  �z��f�[�^
    T* m_pArray;
    //  �z��̒���
    int m_length;
public:
    //  �R���X�g���N�^
    Collection(T* array, int length);
    //  �f�X�g���N�^
    ~Collection();
    //  �ő�l�̎擾
    T getMax();
    //  �ŏ��l�̎擾
    T getMin();
    //  �����̕\��
    void showArray();
};
 

 
//  コンストラクタ
template <typename T>
 Collection<T>::Collection(T* array,int length)
{
    m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < m_length ; i++){
        m_pArray[i] = array[i];
    }
}
//  デストラクタ
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
