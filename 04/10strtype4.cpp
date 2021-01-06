// strtype4.cpp -- 행 단위 입력
#include <iostream> 
#include <string>       // string 클래스를 사용하기 위해
#include <cstring>      // C 스타일 문자열 라이브러리
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "입력 이전에 charr에 있는 문자열의 길이 : " << strlen(charr) << endl;
    cout << "입력 이전에 str에 있는 문자열의 길이 : " << str.size() << endl;
    cout << "텍스트 한 행을 입력하시오 : \n";
    cin.getline(charr, 20);     // 최대 길이를 나타낸다
    cout << "입력한 텍스트 : " << charr << endl;
    cout << "또 다른 텍스트 한 행을 입력하시오 : \n";
    getline(cin, str);          // 이제 cin은 길이 지정자가 아니라 매개변수
    cout << "입력한 텍스트 : " << str << endl;
    cout << "입력 후에 charr에 있는 문자열의 길이 : " << strlen(charr) << endl;
    cout << "입력 후에 str에 있는 문자열의 길이 : " << str.size() << endl;
    
    return 0;
}