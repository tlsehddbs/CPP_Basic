// autoscp.cpp -- 자동 변수의 사용 범위를 설명한다
#include <iostream>
void oil(int x);
int main()
{
    using namespace std;

    int texas = 31;
    int year = 2011;
    cout << "main()에서, texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "main()에서, year = " << year << ", &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "main()에서, texas = " << texas << ", &texasa = ";
    cout << &texas << endl;
    cout << "main()에서, year = " << year << ", &year = ";
    cout << &year << endl;
    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "oil()에서, texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "oil()에서, x = " << x << ", &x = ";
    cout << &x << endl;
    {                                           // 블록 시작
        int texas = 113;
        cout << "블록에서, texas = " << texas;
        cout << ", &texas = " << &texas << endl;
                cout << "블록에서, x = " << x << ", &x = ";
        cout << &x << endl;
    }                                           // 블록 끝
    cout << "블록을 통과한 후, texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}