// firstref.cpp -- 참조 변수의 정의와 사용
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;       // redents는 참조 변수이다

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

// 어떤 시스템에서는 다음 주소들을 unsigned형으로 변환해 주어야 한다
    cout << "rats의 주소 = " << &rats;
    cout << ", rodents의 주소 = " << &rodents << endl;
    return 0;
}