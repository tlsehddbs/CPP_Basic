// namesp.h
#include <string>
// pers와 debts 이름 공간을 만든다
namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
        void getPerson(Person &);
        void showPerson(const Person &);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
}