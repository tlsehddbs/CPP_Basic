// textin4.cpp -- cin.get() 으로 문자 읽기
#include <iostream>
int main(void)
{
    using namespace std;
    int ch;         // char형이 아니라 int형이어야 한다
    int count = 0;

    while((ch = cin.get()) != EOF)  // 파일 끝 검사
    {
        cout.put(char(ch));
        ++count;
    }
    cout << count << " 문자를 읽었습니다.\n";
    return 0;
}