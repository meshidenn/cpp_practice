#ifndef _COLLECTION_H_
#define _COLLECTION_H_
#include <iostream>

using namespace std;


template <typename T> class Collection{
private:
    //  配列データ
    T* m_pArray;
    //  配列の長さ
    int m_length;
public:
    //  コンストラクタ
    Collection(T* array, int length);
    //  デストラクタ
    ~Collection();
    //  最大値の取得
    T getMax();
    //  最小値の取得
    T getMin();
    //  成分の表示
    void showArray();
};

//  繧ｳ繝ｳ繧ｹ繝医Λ繧ｯ繧ｿ
template <typename T>
 Collection<T>::Collection(T* array,int length)
{
    m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < m_length ; i++){
        m_pArray[i] = array[i];
    }
}
//  繝�紊糸祕絋�繧ｯ繧ｿ
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
