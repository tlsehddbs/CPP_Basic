// 사용자에게 수를 입력하라고 요구하는 프로그램을 작성하라. 
// 수를 입력할 때마다 프로그램은 그때까지 입력된 수들의 누계를 출력해야 한다. 
// 사용자가 0을 입력하면 프로그램은 종료된다.

#include <iostream>
int main()
{
    using namespace std;
    int sum = 0;
    int input;

    cout << "수를 입력하십시오(끝내려면 0을 입력하십시오) : ";
    cin >> input;

    while (input != 0)
    {
        sum += input;
        cout << "현재까지 입력된 수의 합 = " << sum << endl;
        cout << "더할 값 입력(끝내려면 0) : ";
        cin >> input;
    }
    return 0;
}