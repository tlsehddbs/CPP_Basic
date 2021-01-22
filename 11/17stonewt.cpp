// stonewt.cpp -- Stonewt 클래스의 메서드
#include <iostream>
using std::cout;
#include "16stonewt.h"

// double형 값으로 Stonewt 객체를 생성한다
Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;     // 정수 나눗셈
    pds_left = int(lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

// int형 값과 double형 값으로 Stonewt 객체를 생성한다
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()      // 디폴트 생성자, 무게 = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()     // 파괴자
{
}

// 무게를 스톤과 파운드의 조합 형식으로 출력한다
void Stonewt::show_stn() const
{
    cout << stone << "스톤, " << pds_left << "파운드\n";
}

// 무게를 파운드 형식으로 출력한다
void Stonewt::show_lbs() const
{
    cout << pounds << "파운드\n";
}