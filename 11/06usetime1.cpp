// usetime1.cpp -- Time 클래스의 두 번재 그래프트 버전을 사용한다
// usetime1.cpp와 mytime1.cpp를 함께 컴파일한다
#include <iostream>
#include "04mytime1.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    // 연산자 표기
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    // 함수 표기
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;
    
    return 0;
}