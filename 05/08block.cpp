// block.cpp -- 복합 구문(블록) 사용
#include <iostream>
int main()
{
    using namespace std;
    cout << "값 5개의 합계와 평균을 구합니다.\n";
    cout << "값 5개를 입력하십오.\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {                               // 블록 시작
        cout << "값 " << i << ": ";
        cin >> number;
        sum += number;
    }                               // 블록 끝
    cout << "값 5개가 모두 입력되었습니다.\n";
    cout << "입력한 값 5개의 합계는 " << sum << "입니다.\n";
    cout << "입력한 값 5개의 평균은 " << sum / 5 << "입니다.\n";
    cout << "감사합니다.\n";
    return 0;
}