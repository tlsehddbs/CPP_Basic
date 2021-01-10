// while.cpp -- while 루프 입문
#include <iostream>
const int ArSize = 30;
int main()
{
    using namespace std;char name[ArSize];

    cout << "영문 이름을 입력하십시오 : ";
    cin >> name;
    cout << "귀하의 영문 이름을 한 줄에 한 잤기\n";
    cout << "ASCII 코드와 함께 표시하면 이렇습니다.\n";
    int i = 0;                  // 문자열의 첫머리에서 시작
    while (name[i] != '\0')     // 문자열의 끝까지 처리
    {
        cout << name[i] << " : " << int(name[i]) << endl;
        i++;        // 이 단계를 정대 빠뜨리지 말 것
    }
    return 0;
}