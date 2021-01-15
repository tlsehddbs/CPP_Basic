// twoswap.cpp -- 특수화는 템플릿을무시한다
#include <iostream>
template <typename T>
void Swap(T &a, T &b);
struct job
{
    char name[40];
    double salary;
    int floor;
};

// 명시적 특수화
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ",\n";
    cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
    Swap(i,j);      // void Swap(int &, int &)를 생성한다
    cout << "이제 i, j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "job 교환 전 : \n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);      // void Swap(job &, job &)
    cout << "job 교환 후 : \n";
    Show(sue);
    Show(sidney);
    // cin.get();
    return 0;
}

template <typename T>
void Swap(T &a, T &b)       // 일반 버전
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// job 구조체의 salary와 floor 멤버만 교환한다

template <> void Swap<job>(job &j1, job &j2)        // 특수화 버전
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << " : (" << j.floor << "층에 거주) "
         << "$" << j.salary << endl;
}