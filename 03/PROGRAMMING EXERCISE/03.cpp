// 위도를 도각, 분각, 초각 단위로 요청하여, 10진수 형식으로 출력하는 프로그램을 작성하라. 
// 1분각은 60초각이다. 1도각은 60분각이다. 이들을 기호 상수로 표현하라. 
// 각각의 입력 값을위해 별개의 변수를 사용해야 한다. 
/* 실행 예는 다음과 같아야 한다.
위도를 도, 분, 초 단위로 입력하시오 :
먼저, 도각을 입력하시오 : 37
다음에, 분각을 입력하시오 : 51
끝으로, 초각을 입력하시오 : 19
37도, 51분, 19초 = 37.8553도
*/

#include <iostream>

int main()
{
    using namespace std;
    int degree, minute, second;
    double latitude;    // 위도 : latitude
    const double DEG_MIN = 60;
    const double MIN_SEC = 60;

    cout << "위도를 도, 분, 초 단위로 입력하시오 : \n";
    cout << "먼저, 도각을 입력하시오 : ";
    cin >> degree;
    cout << "다음에, 분각을 입력하시오 : ";
    cin >> minute;
    cout << "끝으로, 초각을 입력하시오 : ";
    cin >> second;

    latitude = degree + (minute + second / DEG_MIN) / MIN_SEC;
    cout << degree << "도, " << minute << "분, " << second << "초 = " << latitude << "도";

    return 0;
}