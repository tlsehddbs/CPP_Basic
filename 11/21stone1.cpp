// stone1.cpp -- 사용자 정의 변환 함수
// stonewt1.cpp와 함께 컴파일한다
#include <iostream>
#include "19stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9,2.8);     // 9스톤, 2.8파운드
    double p_wt = poppins;      // 암시적 변환
    cout << "double형으로 변환 => ";
    cout << "Poppins : " << p_wt << "파운드\n";
    cout << "int형으로 변환 => ";
    cout << "Poppins : " << int (poppins) << "파운드\n";
    return 0;
}