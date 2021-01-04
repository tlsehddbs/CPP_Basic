// 시간 값과 문 값의 입력을 사용자에게 요청하는 프로그램을 작성하라. main() 함수는 이 두 값을 void형 함수에 전달한다. 그 void형 함수는 다음과 같은 실행 예가 보여 주는 형식으로 두 값을 표시한다. 
/*
시간 값을 입력하시오 : 9
분 값을 입력하시오 : 28
시각 : 9:28
*/

#include <iostream>

using namespace std;

void Time(int Hour, int Minute);

int main()
{
    int H, M;
    cout << "시간을 입력하시오 : ";
    cin >> H;
    cout << "분을 입력하시오 : ";
    cin >> M;

    Time(H, M); 
    return 0;
}

void Time(int Hour, int Minute)
{
    cout << "시각 : " << Hour << ":" << Minute;
}