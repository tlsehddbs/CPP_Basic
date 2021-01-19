// usetime2.cpp -- Time 클래스의 세 번재 드래프트 버전을 사용한다
// usetime2.cpp와 mytime2.cpp를 함께 컴파일한다
#include <iostream>
#include "07mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2,47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;       // operator+() 사용
    total.Show();
    cout << endl;

    diff = weeding - waxing;        // operator-() 사용
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;         // operator*() 사용
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;

    return 0;
}