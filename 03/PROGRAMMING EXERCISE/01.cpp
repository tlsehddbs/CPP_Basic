// 키를 정수형 센티미터 단위로 묻고 그 값을 미터와 센티미터 단위로 변환하는 간단한 프로그램을 작성하라. 
// 입력해야 할 곳을 사용자에게 지시하기 위해 밑줄 문자를 사용하고 환산 인수로 const 기호 상수를 사용하라.

#include <iostream>

int main()
{
    using namespace std;
    const int Meter = 100;
    int Height;

    cout << "키를 CM로 입력하시오 : ___\b\b\b";
    cin >> Height;

    int M = Height / Meter;
    int CM = Height % Meter;
    cout << Height << "cm는 " << M << "m " << CM << "cm 입니다." << endl;

    return 0;
}