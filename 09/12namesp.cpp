// namesp.cpp -- 이름 공간들
#include <iostream>
#include "11namesp.h"

namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person & rp)
    {
        cout << "이름을 입력하십시오 : ";
        cin >> rp.fname;
        cout << "성씨를 입력하십시오 : ";
        cin >> rp.lname;
    }
    void showPerson(const Person & rp)
    {
        std::cout << rp.lname << ", " << rp.fname;
    }
}

namespace debts
{
    void getDebt(Debt & rd)
    {
        getPerson(rd.name);
        std::cout << "부채를 입력하십시오 : ";
        std::cin >> rd.amount;
    }
    void showDebt(const Debt & rd)
    {
        pers::showPerson(rd.name);
        std::cout << " : $" << rd.amount << std::endl;
    }

    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; i++)
            total += ar[i].amount;
        return total;
    }
}