// arrobj.cpp -- C++11의 array 객체에 대한 기능
#include <iostream>
#include <array>
#include <string>
// 상수(constant) 데이터

const int Seasons = 4;
const std::array<std::string, Seasons> Sname = {"spring", "Summer", "Fall", "Winter"};

// array 객체를 수정하는 기능
void fill(std::array<double, Seasons> *pa);

// 수정하지 않고 객체를 사용하는 기능
void show(std::array<double, Seasons> da);

int main()
{
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, Seasons> *pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << "에 소요되는 비용 : ";
        cin >> (*pa) [i];
    }
}

void show(std::array<double, Seasons> da)
{
    using namespace std;
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << " : $" << da[i] << endl;
        total += da[i];
    }
    cout << "총 비용 : $" << total << endl;
}