// arrayone.cpp -- 정수형의 작은 배열
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];        // 3개의 원소를 가진 배열을 생성한다
    yams[0] = 7;        // 첫 번째 원소에 값을 대입한다
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {200, 300, 50};   // 배열을 생성하고 초기화한다
    // 참고 : 사용하는 C++ 컴파일러나 번역기가 이 배열을 초기화할 수 없다면
    // int yamcosts[3] 대신에 static int yamcosts[3]을 사용하라

    cout << "고구마 합계 = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << yams[1] << "개가 들어 있는 포장은 ";
    cout << "개당 " << yamcosts[1] << "원씩입니다.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "세 포장의 총 가격은 " << total << "원입니다.\n";
    cout << "\nyams 배열의 크기는 " << sizeof yams;
    cout << "바이트입니다.\n";
    cout << "원소 하나의 크기는 " << sizeof yams[0];
    cout << "바이트입니다.\n";
    return 0;
}