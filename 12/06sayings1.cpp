// sayings1.cpp -- 확대 개선된 String 클래스를 사용한다
// string1.cpp와 함께 컴파일한다
#include <iostream>
#include "04string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    String name;
    cout << "안녕하십니까? 성함이 어떻게 되십니까?\n>> ";
    cin >> name;

    cout << name << " 씨! 간단한 영어 속담 " << ArSize
         << "개만 입력해 주십시오(끝내려면 Enter) : \n";
    String sayings[ArSize];         // 객체들의 배열
    char temp[MaxLen];              // 문자열 보관을 위한 임시 공간
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << " : ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')    // 입력이 실패했거나 빈 중 입력이면
            break;                      // i를 증가시키지 않는다
        else
            sayings[i] = temp;          // 오버로딩 대입 연산자를 사용한다
    }
    int total = i;                      // 읽어 들인 총 줄 수
    if ( total > 0)
    {

        cout << "(다음과 같은 속담들을 입력하셨습니다.)\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << " : " << sayings[i] << endl;
    
        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "가장 짧은 속담 : \n" << sayings[shortest] << endl;
        cout << "사전순으로 가장 앞에 나오는 속담 : \n" << sayings[first] << endl;
        cout << "이 프로그램은 " << String::HowMany()
             << "개의 String 객체를 사용하였습니다,  이상!\n";
    }
    else
        cout << "입력 금지! 이상.\n";
    return 0;
}