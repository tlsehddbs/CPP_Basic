// 프로그램은 출력할 행 수를 요구하고, 중첩 루프를 사용한다. 
// 첫 번째 행에 별표1개, 두 전째 행에 별표 2개, 이런 식으로 지정한 행 수만큼 출력한다.
// 각 행에 출력되는 별표 앞에는 모든 행이 같은 수의 문자를 출력하고록 마침표로 채운다. 
/* 프로그램 실행 예는 다음과 같아야 한다.
출력할 행 수를 입력하십시오 : 5
....*
...**
..***
.****
*****
*/

#include <iostream>
int main()
{
    using namespace std;
    int lines, i, j;
    cout << "출력할 행 수를 입력하시오 : ";
    cin >> lines;
    for (int i = 0; i <= lines; i++)
        for (int j = 1; j < lines-1; j++)
            cout << ".";
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;

    return 0;
}