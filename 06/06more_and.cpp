// more_and.cpp -- 논리곱 연산자
#include <iostream>
const char * Qualify[4] =           // 문자열을 지시하는 포인터의 배열
{
    "만미터 달리기",
    "모래사장 씨름",
    "비치 발리",
    "부메랑 던지기"
};
int main()
{
    using namespace std;
    int age;
    cout << "나이를 입력하십시오 : ";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;

    cout << "당신은 " << Qualify[index] << "에 참가할 수 있습니다.\n";
    return 0;    
}