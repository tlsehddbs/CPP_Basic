// carrots.cpp -- 음식물 처리 프로그램
// 하나의 변수를 사용하고 출력한다. 

#include <iostream>

int main()
{
    using namespace std;

    int carrots;    // 정수 변수를 선언한다

    carrots = 25;          // 변수에 값을 대입힌다. 
    cout << "나는 당근을 ";
    cout << carrots;            // 변수의 값을 출력한다
    cout << "개 가지고 있다.";
    cout << endl;
    carrots = carrots - 1;      // 변수의 값을 변경한다
    cout << "아삭아삭, 이제 당근은 " << carrots << "개이다." << endl;
    return 0;
}