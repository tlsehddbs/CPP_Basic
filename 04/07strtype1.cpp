// strtype1.cpp -- C++ string 클래스를 사용한다
#include <iostream>
#include <string>       // string 클래스를 사용하기 위해
int main()
{
    using namespace std;
    char charr1[20];                // 빈 배열을 샏성한다
    char charr2[20] = "jaguar";     // 초기화된 배열을 생성한다
    string str1;                    // 빈 string 객체를 생성한다
    string str2 = "panther";        // 초기화된 string 객체를 생성한다

    cout << "고양이과의 동물 한 종을 입력하시오 : ";
    cin >> charr1;
    cout << "고양이과의 또 다른 동뭉 한 종을 입력하시오 : ";
    cin >> str1;                    // 입력을 위해 cin을 사용한다
    cout << "아래 동물들은 모두 고양이과입니다 : \n";
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;  // 출력을 위해 cout을 사용한다
    cout << charr2 << "에서 세 번째 글자 : " << charr2[2] << endl;
    cout << str2 << "에서 세 번째 글자 : " << str2[2] << endl;      // 배열 표기를 사용한다 
    return 0;
}