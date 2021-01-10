// dowhile.cpp -- 탈출 조건 루프
#include <iostream>
int main()
{
    using namespace std;
    int n;

    cout << "1부터 10까지의 수 중에서 ";
    cout << "내가 좋아하는 수를 한번 맞추어 보십시오.\n";
    do
    {
        cin >> n;           // 먼저 루프 몸체를 실행한다
    } while (n != 7);       // 나중에 조건을 검사한다
    cout << "맞았습니다. 내가 좋아하는 수는 럭키 세븐 7입니다.\n";
    return 0;
}