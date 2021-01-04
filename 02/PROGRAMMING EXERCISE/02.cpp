// 거리에 대해 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오. (1마일은 1.60934킬로미터이다.)

#include <iostream>

int main()
{
    using namespace std;
    int miles;
    cin >> miles;
    double km;
    km = miles * 1.60934;
    cout << miles << "마일은 " << km << "킬로미터 입니다." << endl;

    return 0;
}