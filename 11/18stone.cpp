// stone.cpp -- 사용자 정의 데이터형 변환
// stonewt.cpp와 함께 컴파일한다
#include <iostream>
using std::cout;
#include "16stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt pavarotti = 275;    // 생성자를 사용하여 초기화한다
    Stonewt wolfe(285.7);       // Stonewt wolfe = 285.7;과 같다
    Stonewt taft(21, 8);

    cout << "테너 가수의 몸무게 : ";
    pavarotti.show_stn();
    cout << "탐정의 몸무게 : ";
    wolfe.show_stn();
    cout << "대통령의 몸무게 : ";
    taft.show_lbs();
    pavarotti = 276.8;      // 변환을 위해 생성자를 사용한다
    taft = 325;             // taft = Stonewt(325);와 같다
    cout << "저녁 식사를 마친 후 테너 가수의 몸무게 : ";
    pavarotti.show_stn();
    cout << "저녁 식사를 마친 후 대통령의 몸무게 : ";
    taft.show_lbs();
    display(taft, 2);
    cout << "레슬링 선수는 그보다 더 무겁다.\n";
    display(422, 2);
    cout << "비만은 건강의 최대의 적이다.\n";
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "와! ";
        st.show_stn();
    }
}