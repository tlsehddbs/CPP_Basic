// brass.cpp -- 은행 당좌 클래스의 메서드들
#include <iostream>
#include "07brass.h"
using std::cout;
using std::endl;
using std::string;

// 포맷팅 관련
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore (format f, precis p);

// Brass 메서드들

Brass::Brass(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "마이너스 입금은 허용되지 않습니다.\n"
             << "그래서 입금이 취소되었습니다.\n";
    else 
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    // ###.## 형식으로 설정한다
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0)
        cout << "마이너스 인출은 허용되지 않습니다.\n"
             << "그래서 인ㄴ출이 취소되었습니다.\n";
    else if (amt <= balance)
        balance -= amt;
    else 
        cout << "인출을 요구한 금액 $" << amt
             << "가 현재 잔액을 초과합니다.\n"
             << "그래서 인출이 취소되었습니다.\n";
    restore(initialState, prec);
}
double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
        // ###.## 형식으로 출력한다
    format initialState = setFormat();
    precis prec = cout.precision(2);
        cout << "고객 이름 : " << fullName << endl;
        cout << "계좌 번호 : " << acctNum << endl;
        cout << "현재 잔액 : $" << balance << endl;
    restore(initialState, prec);    // 원래 형식을 복원한다
}

// BrassPlus 메서드들
BrassPlus::BrassPlus(const string & s, long an, double bal,
                double ml, double r) : Brass(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
                : Brass(ba)         // 임시적 복사 생성자를 사용한다
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

// ViewAcct()의 동작을 다시 정의한다
void BrassPlus::ViewAcct() const
{
    // ###.## 형식으로 설정한다
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();              // 기초 부분을 출력한다
    cout << "당좌 대월 한도액 : $" << maxLoan << endl;
    cout << "상환할 원리금 : $" << owesBank << endl;
    cout.precision(3);              // ###.## 형식
    cout << "당좌 대월 이자율 : $" << 100 * rate << "%\n";
    restore(initialState, prec);
}

// Withdraw()의 동작을 다시 정의한다
void BrassPlus::Withdraw(double amt)
{
    // ###.## 형식으로 설정한다
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "당좌 대월 금액 : $" << advance << endl;
        cout << "당좌 대월 이자 : $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else 
            cout << "당좌 대월 한도가 초과되어 거래가 취소되었습니다.\n";
        restore(initialState, prec);
}

format setFormat()
{
    // ###.## 형식으로 설정한다
    return cout.setf(std::ios_base::fixed, 
                    std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f,std::ios_base::floatfield);
    cout.precision(p);
}