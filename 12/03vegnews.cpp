// vegnews.cpp -- new와 delete를 클래스와 함께 사용한다
// strngbad.cpp와 함께 컴파일한다
#include <iostream>
using std::cout;
#include "01strngbad.h"

void callme1(StringBad &);      // 참조로 전달한다
void callme2(StringBad);        // 값으로 전달한다

int main()
{
    using std::endl;
    {
        cout << "내부 블록을 시작한다.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1 : " << headline1 << endl;
        cout << "headline2 : " << headline2 << endl;
        cout << "sports : " << sports << endl;
        callme1(headline1);
        cout << "headline1 : " << headline1 << endl;
        callme2(headline2);
        cout << "headline2 : " << headline2 << endl;
        cout << "하나의 객체를 다른 객체로 초기화 : \n";
        StringBad sailor = sports;
        cout << "sailor : " << sailor << endl;
        cout << "하나의 객체를 다른 객체에 대입 : \n";
        StringBad knot;
        knot = headline1;
        cout << "knot : " << knot << endl;
        cout << "이 블록을 빠져 나온다.\n";
    }
    cout << "main()의 끝\n";

    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "참조로 전달된 StringBad : \n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
    cout << "참조로 전달된 StringBad : \n";
    cout << "   \"" << sb << "\"\n";
}