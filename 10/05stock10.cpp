// stock10.cpp -- 생성자들과 파괴자가 추가된 Stock 클래스 구현
#include <iostream>
#include "04stock10.h"

// 생성자들 (메시지를 출력하는 버전)
Stock::Stock()  // 디폴트 생성자
{
    std::cout << "디폴트 생성자가 호출되었습니다.\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val =  0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << co << "를 사용하는 생성자가 호출되었습니다.\n";
    company = co;

    if (n < 0)
    {
        std::cout << "주식 수는 음수가 될 수 없으므로, "
                  << company << " shares를 0으로 설정합니다.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
// 클래스 파괴자
Stock::~Stock() // 메시지를 출력하는 클래스 파괴자
{
    std::cout << "안녕, " << company << "!\n";
}
// 다른 메서드들
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "매입 주식 수는 음수가 될 수 없으므로, "
                  << "거래가 취소되었습니다.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "매도 주식 수는 음수가 될 수 없으므로, "
             << "거래가 취소되었습니다.\n";
    }
    else if (num > shares)
    {
        cout << "보유 주식보다 많은 주식을 매도할 수 없으므로, "
             << "거래가 취소되었습니다.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "회사명 : " << company
         << " 주식 수 : " << shares << '\n';
    cout << " 주가 : $" << share_val;
    // set format to #.##
    cout.precision(2);
    cout << " 주식 총 가치 : $" << total_val << '\n';

    // 원본 포맷을 저장한다
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}