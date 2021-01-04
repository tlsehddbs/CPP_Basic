// morechar.cpp -- char형과 int형의 비교
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';      // M에 해당하는 ASCII 코드를 char형 변수 ch에 대입
    int i = ch;         // 같은 코드를 int형 변수 i에 저장
    cout << ch << "의 ASCII 코드는 "<< i << "입니다." << endl;

    cout << "이 문자 코드에 1을 더해 보겠습니다." << endl;
    ch = ch + 1;
    i = ch;
    cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;

    // cout.put() 멤버 함수를 사용하여 char형 변수 ch를 출력한다
    cout << "cout.put(ch)를 사용하여 char형 변수 ch를 화면에 출력 : ";
    cout.put(ch);

    // cout.put()을 사용하여 문자 상수를 출력한다
    cout.put('!');

    cout << endl << "종료" << endl;
    return 0;
}