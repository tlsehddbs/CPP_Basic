// funtemp.cpp -- 함수 템플릿 사용하기
#include <iostream>
// 함수 템플릿 원형
template <class Any>        // 또는 typename Any
void Swap(Any &a, Any &b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "컴파일러가 생성한 int형 교환기를 사용하려면\n";
    Swap(i,j);      // void Swap(int &,int &)를 생성한다
    cout << "이제 i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "컴파일러가 생성한 double형 교환기를 사용하면\n";
    Swap(x,y);      // void Swap(double &, double &)를 생성한다
    cout << "이제 x, y = " << x << ", " << y << ".\n";
    // cin.get();
    return 0;
}

// gkatn xpavmfflt wjddml
template <class Any>        // 또는 typename Any
void Swap(Any &a, Any &b)
{
    Any temp;       // temp는 Any형의 변수
    temp = a;
    a = b;
    b = temp;
}