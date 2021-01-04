// hexoct1.cpp -- 16진 정수형 상수와 8진 정수형 상수를 보여 준다
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;         // 10진 정수형 상수
    int waist = 0x42;       // 16진 정수형 상수
    int inseam = 042;       // 8진 정수형 상수

    cout << "손님 몸매는 한마디로 끝내 줍니다!\n";
    cout << "가슴둘레 " << chest << "\n";
    cout << "어리둘레 " << waist << "\n";
    cout << "인심길이 " << inseam << "\n";
    return 0;
}