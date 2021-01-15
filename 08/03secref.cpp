// secref.cpp -- 참조 변수의 정의와 사용
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;       // rodents는 참조이다

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats의 주소 = " << &rats;
    cout << ", rodents의 주소 = " << &rodents;

    int bunnies = 50;
    rodents = bunnies;          // 참조를 바꿀 수 있는가?
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl; 

    cout << "bunnies의 주소 = " << &bunnies;
    cout << ", rodents의 주소 = " << &rodents << endl;
    return 0;
}