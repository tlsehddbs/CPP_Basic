// 다음과 같은 요구대로 String 클래스 선언을 개선하라. (즉, string1.h를 string2.h로 업그레이드하라.)
// a. 두 문자열을 하나로 결합할 수 있도록 + 연산자를 오버로딩하라.
// b. 문자열에 있는 모든 영문자를 소문자로 변환하는 stringlow() 멤버 함수를 제공하라. (문자 처리 함수들을 위한 cctype을 잊지 마라.)
// c. 문자열에 있는 모든 영문자를 대문자로 변환하는 stringup() 멤버 함수를 제공하라.
// d. char형의 매개변수를 사용하여, 그 무자열에 주어지는 문자가 출현하는 횟수를 리턴하는 멤버 함수를 제공하라.

/* 다음과 같은 프로그램을 사용하여 자신의 업그레이드 결과를 테스트하라. (string2.h, string2.cpp, pe12-02.cpp)
// pe-12-02.cpp -- 12장 프로그래밍 연습 2
#incldue <iostream>
using namespace std;
#include "string2.h"
int main()
{
    String s1(" and I am a C++ student.");
    String s2 = "영문 이름을 입력하십시오 : ";
    String s3;
    cout << s2;                 // 오버로딩된 << 연산자
    cin >> s3;                  // 오버로딩된 >> 연산자
    s2 = "My name is " + s3;    // 오버로딩된 =, + 연산자
    cout << s2 << ".\n";
    s2 = s2 + s3;
    s2.stringup();              // 문자열을 대문자로 변환한다
    cout << "다음 문자열에는\n" << s2 << "\n문자 'A'가 "
         << s2.has('A') << " 개 들어 있습니다.\n";
    s1 = "red"; // String(const char *)와,
         // String & operator=(const String &)를 사용한다
    String rgb[3] = { String(s1), String("green"), String("blue") };
    cout << "빛의 삼원색의 이름을 하나만 입력하십시오 : ";
    String has;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow();            // 문자열을 소문자로 변환한다
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])      // 오버로딩된 == 연산자
            {
                cout << "맞았습니다.\n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "다시 입력하십시오 : ";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
} */

/* 프로그램의 출력은 다음 실행 예와 같아야 한다
영문 이름을 입력하십시오 : Seung-il Yoon
My name is Seung-il Yoon.
다음 문자열에는
MY NAME IS SEUNG-IL YOON AND I AM A C++ STUDENT.
문자 'A'가 4개 들어 있습니다.
빛의 삼원색의 이름을 하나만 입력하십시오 : yellow
다시 입력하십시오 : BLUE
맞았습니다!
프로그램을 종료합니다.
*/