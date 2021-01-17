// file1.cpp -- 세 개의 파일로 구성된 프로그램의 예
#include <iostream>
#include "01coordin.h"      // 구조체 템플릿, 함수 원형
using namespace std;
int main()
{
    rect rplace;
    polar pplace;

    cout << "x값과 y값을 입력하십시오 : ";
    while (cin >> rplace.x >> rplace.y)     // 재치 있는 cin 사용
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력) : ";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}