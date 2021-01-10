// equal.cpp -- '같다' 연산자와 대입 연산자
#include <iostream>
int main()
{
    using namespace std;
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "올바른 방법 : \n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << i << "번 퀴즈의 점수는 20입니다.\n";
        
    // 주의 : 직접 프로그램을 실행하지 않아도 문제점을 확인할 수 있다
    cout << "잘못된 방법 : \n";
    for (i = 0; quizscores[i] = 20; i++)
        cout << i << "번 퀴즈의 점수는 20입니다.\n";
    
    return 0;
}