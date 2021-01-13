// ifeles.cpp -- if else 구문
#include <iostream>
int main()
{
    char ch;

    std::cout << "타이핑하시면, 반복 수행하겠습니다.\n";
    std::cin.get(ch);
    while(ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;    // 개행 문자일 때 수행
        else
            std::cout << ++ch;  // 그 밖의 문자일 때 수행
        std::cin.get(ch);
    }
    // ++ch 대신 ch + 1을 사용하면 어떨게 될까>
    std::cout << "\n혼란스럽게 해서 죄송합니다\n";
    // std::cin.get();
    // std::cin.get();
    return 0;
}