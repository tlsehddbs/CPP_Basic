// num_test.cpp -- for 루프의 조건 검사에 수치를 직접 사용한다
#include <iostream>
int main()
{
    using namespace std;
    cout << "카운트 시작값을 입력하십시오 : ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // i가 0이 되면 종료
        cout << "i = " << i << "\n";
    cout << "i = " << i << "이므로 루프를 종료합니다.\n";
    return 0;
}