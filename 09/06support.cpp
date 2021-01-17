// support.cpp -- 외부 변수를 사용한다
// external.cpp와 컴파일한다
#include <iostream>
extern double warming;  // 다른 파일로부터 warming;을 사용

// 함수 원형
void update(double dt);
void local();

using std::cout;

void update(double dt)  // 전역 변수를 갱신한다
{
    extern double warming;  // 선택적 재선언
    warming += dt;  // 전역 warming을 사용한다
    cout << "전역 warming이 " << warming;
    cout << "도로 갱신되었습니다. \n";
}

void local()    // 지역 변수를 사용한다
{
    double warming = 0.8;   // 새 변수로 외부 변수 warming을 가린다

    cout << "지역 warming은 " << warming << "도입니다. \n";
        // 사용 변위 결정 연산자를 사용하여
        // 전역 변수에 접근한다
    cout << "그러나, 전역 warming은 " << ::warming;
    cout << "도입니다. \n";
}