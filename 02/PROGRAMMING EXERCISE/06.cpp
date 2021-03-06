// 거리를 매개변수로 전달받아 천문 단위로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 프로그램을 작성하시오. 프로그램은 사용자에게 거리를 광년으로 입력할 것을 요구해야 하고, 다음과 같은 실행 결과를 출력해야 한다.
/*
광년 수를 입력하고 Enter 키를 누르십시오 : 4.2
4.2 광년은 265608 천문 단위입니다.
*/
// 천문 단위는 지구에서 태양까지의 평균 거리이다. (약 150,000,000km 또는 93,000,000miles) 광년은 빛이 1년 동안에 지나는 거리이다. (약 10조km 또는 6조miles) 1광년 = 63240 천문 단위이다. 태양을 지나 가장 가까운 별이 4.2광년 떨어져 있다. (listing 2.4와 같이) double형 변수를 사용하라.

#include <iostream>

using namespace std;

void unit(double);

int main()
{
    double LightYears;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오 : ";
    cin >> LightYears;
    unit(LightYears);
    return 0;
}

void unit(double n)
{
    cout << n << "광년은 " << n * 63240 << "천문 단위입니다.";
}