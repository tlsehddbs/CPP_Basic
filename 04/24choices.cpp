// choices.cpp -- 배열 변형
#include <iostream>
#include <vector>   // STL, C++98
#include <array>    // C++11
int main()
{
    using namespace std;
// C, original C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
// C++98 STL
    vector<double> a2(4);   // 4개 요소로 벡터를 생성한다
// C++98 버전에서는 초기화하는 것이 복잡함
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
// C++11 -- array 객체를 생성하고 객체에 유효하다
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;    // 동일한 크기의 array 객체에 유효하다
// 배열 표시를 사용하라
    cout << "a1[2] : " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2] : " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2] : " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2] : " << a4[2] << " at " << &a4[2] << endl;
// 잘못됨
    a1[-2] = 20.2;
    cout << "a1[-2] : " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2] : " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2] : " << a4[2] << " at " << &a4[2] << endl;
    return 0;
}