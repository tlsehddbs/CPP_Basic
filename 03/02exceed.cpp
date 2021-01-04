// exceed.cpp -- 상수 한계값을 초과한다
#include <iostream>
#define ZERO 0          // 값 0으로 대체될 기호 상수 ZERO를 정의한다
#include <climits>      // INT_MAX가 int형의 최대값으로 정의되아 있다
int main()
{
    using namespace std;
    short Dohee = SHRT_MAX;         // 변수를 최대값으로 초기화
    unsigned short Insuk = Dohee;   // Dohee가 정의되어 있으므로 맞다

    cout << "도희의 계좌에는 " << Dohee << "원이 들어 있고, ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl;
    cout << "각각의 계좌에 1원씩 입금한다." << endl << "이제 ";
    Dohee = Dohee + 1;
    Insuk = Insuk + 1;
    cout << "도희의 잔고는 " << Dohee << "웝이 되었고, ";
    cout << "인숙이의 잔고는 " << Insuk << "원이 되었다." << endl;
    cout << "이럴 수가! 도희가 나 몰래 대출을 했나?" << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "도희의 계좌에는 " << Dohee << "원이 들어 있고, ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl;
    cout << "각각의 계좌에서 1원씩 인출한다." << endl << "이제 ";
    Dohee = Dohee - 1;
    Insuk = Insuk - 1;
    cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
    cout << "인숙이의 잔고는 " << Insuk << "원이 됭었다." << endl;
    cout << "이럴 수가! 인숙이가 복권에 당첨되었나?" << endl;
    return 0;
}