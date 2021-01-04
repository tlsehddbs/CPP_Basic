// 섭씨 온도를 매개변수로 전달받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 프로그램을 작성하시오. 프로그램은 섭씨 온도로 입력할 것을 요구해야 하고, 다음과 같은 실행결과를 출력해야 한다.
/*
섭씨 온도를 입력하고 Enter 키를 누르십시오 : 20
섭씨 20도는 화씨로 68도입니다.
*/
// 참고로, 섭씨 온도를 화씨 온도로 변환하는 공식은 다음과 같다.
// 화씨 온도 = 1.8 X 섭씨 온도 + 32.0

#include <iostream>

float Fahrenheit(float);    // 함수 원형 : 화씨 온도를 소수점까지 나타내기 위해서 float형으로 정해줌

using namespace std;

int main()
{
    float Celsius;  // 섭씨 온도를 소수점으로도 받을 수 있도록 float형으로 정해줌
    cout << "섭씨 온도를 입력하시오 : ";
    cin >> Celsius;
    float Tmp = Fahrenheit(Celsius);
    cout << "섭씨" << Celsius << "℃는 화씨로" << Tmp << "℃입니다." << endl;

    return 0;
}

float Fahrenheit(float Cel)
{
    return 1.8 * Cel + 32.0;
}