// textin1.cpp -- while 루프로 문자 읽기
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;      // 카운터를 0으로 설정한다
    cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오 : \n";
    cin >> ch;          // 문자를 넘겨받는다
    while (ch != '#')
    {
        cout << ch;     // 문자를 화면으로 에코한다
        ++count;        // 문자 카운터를 증가시킨다
        cin >> ch;      // 다음 문자를 넘겨받는다
    }
    cout << endl << count << " 문자를 읽었습니다.\n";
    return 0;
}