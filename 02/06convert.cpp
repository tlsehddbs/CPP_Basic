// convert.cpp -- 스톤을 파운드로 환산한다
#include <iostream>
int stonetolb(int);     // 함수 원형

int main()
{
    using namespace std;
    int stone;
    cout << "체중을 스톤 단위로 입력하시오 : ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " 스톤은 ";
    cout << pounds << " 파운드입니다." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}