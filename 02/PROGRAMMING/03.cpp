// 실행 결과가 다음과 같은 프로그램을 작성하시오. 다만, main() 함수를 포함하여 세 개의 사용자 정의 함수를 사용해야 한다. 

/* 실행 결과 : 
Three blind mice
Three blind mice
See how they run
See how they run
*/

#include <iostream>

using namespace std;

void mice();
void run();

int main()
{
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice()
{
    cout << "Three blind mice" << endl;
}

void run()
{
    cout << "See how they run" << endl;
}