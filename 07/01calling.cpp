// calling -- 함수 정의, 함수 원형, 함수 호출
#include <iostream>

void simple();      // 함수 원형

int main()
{
    using namespace std;
    cout << "main()에서 simple()함수를 호출합니다 : \n";
    simple();       // 함수 호출
    cout << "main()이 simple() 함수와 종료됩니다.\n";
//cin.get()
    return 0;
}

// 함수 정의
void simple()
{
    using namespace std;
    cout << "여기는 simple() 함수입니다.\n";
}