// swaps.cpp -- 참조를 이용한 교환과 포인터를 이용한 교환
#include <iostream>
void swapr(int & a, int & b);       // a, b는 int형 변수의 대용 이름
void swapp(int * p, int * q);       // p, q는 int 형을 지시하는 주소
void swapv(int a, int b);           // a, b는 새로운 변수
int main()
{
    using namespace std;
    int wallet1 = 3000;
    int wallet2 = 3500;

    cout << "지갑 1 = " << wallet1 << "원";
    cout << ", 지갑 2 = " << wallet2 << "원\n";

    cout << "참조를 이용하여 내용들을 교환 : \n";
    swapr(wallet1, wallet2);        // 변수를 전달
    cout << "지갑 1 = " << wallet1 << "원";
    cout << ", 지갑 2 = " << wallet2 << "원\n";

    cout << "포인터를 이용하여 내용들을 다시 교환 : \n";
    swapp(&wallet1, &wallet2);      // 변수의 주소를 전달
    cout << "지갑 1 = " << wallet1 << "원";
    cout << ", 지갑 2 = " << wallet2 << "원\n";

    cout << "값으로 전달하여 내용 교환 시도 : \n";
    swapv(wallet1, wallet2);        // 변수의 값을 전달
    cout << "지갑 1 = " << wallet1 << "원";
    cout << ", 지갑 2 = " << wallet2 << "원\n";
    return 0;
}

void swapr(int & a, int & b)        // 참조를 이용하여 교롼
{
    int temp;

    temp = a;   // 변수의 값으로 a, b를 사용
    a = b;
    b = temp;
}

void swapp(int * p, int * q)        // 포인터를 이용하여 교환
{
    int temp;

    temp = *p;  // 변수의 값으로 *p, *q를사용
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)            // 값으로 전달하여 교환 시도
{
    int temp;

    temp = a;   // 변수의 값으로 a, b를 사용
    a = b;
    b = temp;
}