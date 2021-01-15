// strc_ref.cpp -- 구조체에 대한 참조
#include <iostream>
#include <string>
struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & aource);

int main()
{
// 부분 초기화 - 멤버는 0에 세팅된 상태로 남는다
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};
// 초기화 하지 않음
    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
// 리턴 값을 매개변수로 사용한다
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);
// 리턴 값을 대입 값으로 사용한다
    dup = accumulate(team, five);
    std::cout << "team 출력 : \n";
    display(team);
    std::cout << "대입 이후 dup 출력 : \n";
    display(dup);
    set_pc(four);
// 문제의 소지가 있는 대입
    accumulate(dup, five) = four;
    std::cout << "문제 소지가 있는 대입 이후 dup 출력 : \n";
    display(dup);
    return 0;
}

void display(const free_throws & ft)
{
    using std::cout;
    cout << "Name : " << ft.name << '\n';
    cout << "Made : " << ft.made << '\t';
    cout << "Attempts : " << ft.attempts << '\t';
    cout << "Percent : " << ft.percent << '\n';
}

void set_pc(free_throws & ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
