// arith.cpp -- C++의 산술 연산
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;      // 고정 소수점 형식으로 출력

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "수를 하나 입력하십시오 : ";
    cin >> hats;
    cout << "다른 수를 입력하십시오 : ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}