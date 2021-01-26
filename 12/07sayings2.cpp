// sayings2.cpp -- 객체를 지시하는 포인터를 사용한다
// string1.cpp와 함께 컴파일한다
#include <iostream>
#include <cstdlib>          // (또는 stdlib.h 사용) rand(), srand()를 위해
#include <ctime>            // (또는 math.h 사용) time()을 위해
#include "04string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using namespace std;
    String name;
    cout << "안녕하십니까? 성함이 어떻게 되십니까?\n>> ";
    cin >> name;

    cout << name << " 씨! 간단한 우리 속담 " << ArSize
         << "개만 입력해 주십시오(끝내려면 Enter) : \n";
    String sayings[ArSize];
    char temp[MaxLen];              // 문자열 보관을 위한 임시 공간
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << " : ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')    // 빈 줄 입력이면
            break;                      // i를 증가시키지 않는다
        else 
            sayings[i] = temp;          // 오버로딩 대입 연산자를 사용한다
    }
    int total = i;                      // 읽어들인 총 줄 수

    if (total > 0)
    {
        cout << "(다음과 같은 속담들을 입력하셨습니다._\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << "\n";

    // 가장 짧은 문자열과, 사전순으로 가장 앞에 나오는 문자열을 추적하는 포인터
        String * shortest = &sayings[0];    // 첫 번째 객체로 초기화한다
        String * first = &sayings[0];       // 첫 번째 객체로 초기화한다
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)    // 값들을 비교한다
                first = &sayings[i];    // 주소를 대입한다
        }
        cout << "가장 잛은 속담 : \n" << *shortest << endl;
        cout << "사전순으로 가장 앞에 나오는 속담 : \n" << *first << endl;
        srand(time(0));
        int choice = rand() % total;    // 배열 인덱스를 무작위로 선택한다
    // new를 사용하여, 새로운 String 객체를 생성하고 초기화한다
        String * favorite = new String(sayings[choice]);
        cout << "내가 가장 좋아하는 속담 : \n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "알고 있는 속담이 하나도 없어요?\n";
    cout << "프로그램을 종료합니다.\n";
    return 0;
}