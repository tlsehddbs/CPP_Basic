// init_ptr.cpp -- 포인터를 초기화한다
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;
    cout << "higgens의 값 = " << higgens << ", higgens의 주소 = " << &higgens << endl;
    cout << "*pt의 값 = " << *pt << ", pt의 값 = " << pt << endl;
    return 0;
}