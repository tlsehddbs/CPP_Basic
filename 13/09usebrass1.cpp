// usebrass1.cpp -- 은행 당좌 클래스를 테스트한다
// brass.cpp와 함께 컴파일한다
#include <iostream>
#include "07brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "Hogg 시의 계좌에 $1000 입금 : \n";
    Hoggy.Deposit(1000.00);
    cout << "Hogg 씨의 현재 잔액 : $" << Hoggy.Balance() << endl;
    cout << "Pigg 씨의 계좌에서 $4200 인출 : \n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg 씨의 현재 잔액 : $" << Piggy.Balance() << endl;
    cout << "Hogg 씨의 계좌에서 $4200 인출 : \n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0;
}