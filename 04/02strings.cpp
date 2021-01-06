// strings.cpp -- 배열에 문자열을 저장한다
#include <iostream>
#include <cstring>      // strlen() 함수를 사용하기 위해
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // 비어 있는 배열
    char name2[Size] = "C++owboy";  // 문자열 상수로 초기화된 배열
    // 참고 : 어떤 C++에서는 name2 배열을 초기화하기 위해
    // static 키워드를 사용해야 한다

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 실례지만 성함이?\n";
    cin >> name1;
    cout << "아, " << name1 << " 씨! 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만 \n";
    cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";
    cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
    name2[3] = '\0';        //  널 문자
    cout << "제 이름의 처음 세 문자는 다음과 같습니다 : ";
    cout << name2 << endl;
    return 0;
}