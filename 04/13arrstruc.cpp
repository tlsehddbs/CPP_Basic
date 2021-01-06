// arrstruc.cpp -- 구조체의 배열
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =              // 구조체의 배열 초기화
    {
        {"Bambi", 0.5, 21.99},          // 배열에 있는 첫 번째 구조체
        {"Godzilla", 2000, 565.99}      // 배열에 있는 그 다음 구조체
    };

    cout << guests[0].name << "와 " << guests[1].name << "의 부피를 합하면\n" 
        << guests[0].volume + guests[1].volume << " 세제곱피트입니다.\n";
    return 0;
}