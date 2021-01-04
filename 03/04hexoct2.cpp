// hexoct2.cpp -- 갑승ㄹ 16진수와 8진수로 디스플레이한다
#include <iostream>
using namespace std;
int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "손님 몸매는 한마디로 끝내 줍니다!" << endl;
    cout << "가슴둘레" << chest << " (10진수)" << endl;
    cout << hex;    // 진법을 바꾸는 조정자
    cout << "허리둘레" << waist << " (16진수)" << endl;
    cout << oct;    // 진법을 바꾸는 조정자
    cout << "인심길이" << chest << " (8진수)" << endl;
    return 0;
}