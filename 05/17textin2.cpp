// textin2.cpp -- cin.get(char) 사용하기
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오 : \n";
    cin.get(ch);        // cin.get(ch) 함수를 사용한다
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " 문자를 읽었습니다.\n";
    return 0;
}