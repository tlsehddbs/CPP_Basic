// bondini.cpp --이스케이프 시퀀스를 사용한다
#include <iostream>
int main()
{
    using namespace std;
    cout << "\a암호명 \"화려한 외출\" 작전이 방금 개시되었습니다!\n";
    cout << "8자리 비밀번호를 입력하십시오 : ________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\a입력하신 비밀번호는 " << code << "입니다.\n";
    cout << "\a비밀번호가 맞습니다! Z3 계획을 진행하십시오!\n";
    return 0;
}