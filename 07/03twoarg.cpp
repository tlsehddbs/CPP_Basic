// twoarg.cpp -- 매개변수를 2개 사용하는 함수
#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;

    cout << "문자를 하나 입력하십시오 : ";
    cin >> ch;
    while (ch != 'q')           // 끝내려면 q를 입력한다
    {
        cout << "정수를 하나 입력하십시오 : ";
        cin >> times;
        n_chars(ch, times);     // 매개변수 2개를 사용하는 함수
        cout << "\n 계속하려면 다른 문자를 입력하고, "
                "끝내려면 q를 누르십시오 : ";
        cin >> ch;
    }
    cout << "현재 times의 값은 " << times << "입니다.\n";
    cout << "프로그램을 종료합니다.\n";
    return 0;
}

void n_chars(char c, int n)     // c를 n번 출력한다
{
    while (n-- > 0)     // n이 0이 될 때까지 반복한다
        cout << c;
}