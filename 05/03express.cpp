// express.cpp -- 표현식의 값
#include <iostream>
int main()
{
    using namespace std;
    int x;

    cout << "대입 표현식 x = 100의 값은 ";
    cout << (x = 100) << endl;
    cout << "현재 x의 값은 " << x << endl;
    cout << "관계 표현식 x < 3의 정수값은 ";
    cout << (x < 3) << endl;
    cout << "관계 표현식 x > 3의 정수값은 ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);     // 최신 C++ 기능
    cout << "관계 표현식 x < 3의 bool값은 ";
    cout << (x < 3) << endl;
    cout << "관계 표현식 x > 3의 bool값은 ";
    cout << (x > 3) << endl;
    return 0;
}