// enum.cpp -- enum(열거체) 사용
#include <iostream>
// 0부터 6까지 대응하는 이름이 있는 상수를 만든다
enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    using namespace std;
    cout << "컬러 코드(0, 1, 2, 3, 4, 5, 6)를 입력하십시오 : ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red    : cout << "입술은 붉었습니다.\n"; break;
            case orange : cout << "머리카락은 귤색이었습니다.\n"; break;
            case yellow : cout << "신발은 노랑색이었습니다.\n"; break;
            case green  : cout << "손톱은 초록색이었습니다.\n"; break;
            case blue   : cout << "스웨터는 파랑색이었습니다.\n"; break;
            case violet : cout << "눈은 보라색이었습니다.\n"; break;
            case indigo : cout << "분위기는 쪽빛이었습니다.\n"; break;  
        }
        cout << "컬러 코드(0, 1, 2, 3, 4, 5, 6)를 입력하십시오 : ";
        cin >> code;
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}