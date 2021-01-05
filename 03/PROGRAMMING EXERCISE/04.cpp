// 초 수를 정수 값(long형 사용)으로 요청하고, 그에 상당하는 시간을 일, 시, 분, 초로 디스플레이하는 프로그램을 작성하라. 
// 1일의 시간 수, 1시간의 분 수, 1분의 초 수를 기호 상수를 사용하여 표현하라. 
/* 출력은 다음과 같아야 한다. 
초 수를 입력하십시오 : 31600000
31600000초 = 365일, 17시간, 46분, 40초
*/

#include <iostream>

int main()
{
    using namespace std;

    int Time, OTime;
    cout << "초 수를 입력하십시오 : ";
    cin >> Time;
    OTime = Time;

    int Day, Hrs, Min, Sec;
    Day = Time / 86400;
    Time = Time - (Day * 86400);    // 계산할 때마다 Time을 업데이트 안해줘도 되게끔 하자

    Hrs = Time / 3600;
    Time = Time - (Hrs * 3600);

    Min = Time / 60;
    Time = Time - (Min * 60);

    Sec = Time;

    cout << OTime << "초 = " << Day << "일, " << Hrs << "시간, " << Min << "분, " << Sec << "초" << endl;

    return 0;
}