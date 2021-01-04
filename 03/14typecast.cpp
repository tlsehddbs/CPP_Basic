// typecast.cpp -- 강제 데이터 변환
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    // 다음 구문은 두 값을 double형으로 더한 후에 
    // 그 합을 int형으로 변환하여 대입한다
    auks = 19.99 + 11.99;

    // 다음 두 구문은 두 값을 int형으로 변환한 후에 더한다
    bats = (int) 19.99 + (int) 11.99;   // 구식 C 스타일  
    coots = int (19.99) + int (11.99);  // 신식 C++ 스타일
    cout << "바다오리 = " << auks << ", 박쥐 = " << bats;
    cout << ", 검둥오리 = " << coots << endl;

    char ch = 'Z';
    cout << "코드 " << ch << " 의 값은 ";   // char형으로 출력
    cout << int(ch) << endl;               // int형으로 출력
    cout << "네, 코드 Z의 값은 ";
    cout << static_cast<int>(ch) << endl;  // int형으로 출력
    return 0;
}