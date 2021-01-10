// forstr1.cpp -- for 루프를 사용한 문자열 처리
#include <iostream>
#include <string>
int main()
{
    using namespace std;cout << "단어 하나를 입력하십시오 : ";
    string word;
    cin >> word;

    // 문자열을 거꾸로 출력한다
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\n종료.\n";
    return 0;
}