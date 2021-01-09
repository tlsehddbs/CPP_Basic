// addpntrs.cpp -- 포인터 덧셈
#include <iostream>
int main()
{
    using namespace std;

    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

// 배열의 주소를 알아내는 두 가지 방법
    double * pw = wages;        // 배열 이름 = 주소
    short * ps = &stacks[0];    // 배열 원소에 주소 연산자 사용

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "pw 포인터에 1을 더함 : \n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "ps 포인터레 1을 더함 : \n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "배열 표기로 두 원소에 접근\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "포인터로 표기로 두 원소에 접근\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = wages 배열의 크기\n";
    cout << sizeof(pw) << " = pw 포인터 크기\n";
    return 0;
}