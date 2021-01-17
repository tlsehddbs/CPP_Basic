// external.cpp -- 외부 변수들
// support.cpp와 컴파일한다
#include <iostream>
using namespace std;
// 외부 변수
double warming = 0.3;   // warming을 선언한다
// 함수 원형
void update(double dt);
void local();

int main()  // 전역 변수를 사용한다
{
    cout << "전역 warming은 " << warming << "도입니다. \n";
    update(0.1);    // warming을 갱신하는 함수를 호출한다
    cout << "전역 warming은 " << warming << "도입니다. \n";
    local();    // 지역 warming으로 함수 호출
    cout << "전역 warming은 " << warming << "도입니다. \n";
    return 0;
}