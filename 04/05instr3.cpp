// instr3.cpp -- get() & get()으로 여러 단어를 읽는다
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "이름을 입력하십시오 : \n";
    cin.get(name, ArSize).get();       // 문자열, 개행 문자를 읽는다
    cout << "좋아하는 디저트를 입력하십시오 : \n";
    cin.get(dessert, ArSize).get();
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << " 님\n";
    return 0;
}