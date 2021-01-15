// inline.cpp -- 인라인 함수 사용하기
#include <iostream>

// 인라인 함수 정의
inline double square (double x) { return x * x; }

int main()
{
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b =  square(4.5 + 7.5);     // 수식도 전달할 수 있다
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c;
    cout << ", c의 제곱 = " << square(c++) << endl;
    cout << "현재 c = " << c << endl;
    return 0;
}