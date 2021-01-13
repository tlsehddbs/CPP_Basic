// protos.cpp -- 함수 원형과함수 호출
#include <iostream>
void cheers(int);       // 함수 원형 : 리턴 값이 없다
double cube(double x);  // 함수 원형 : double형을 리턴한다
int main(void)
{
    using namespace std;
    cheers(5);      // 함수 호출
    cout << "하나의 수를 입력하십시오 : ";
    double side;
    cin >> side;
    double volume = cube(side);     // 함수 호출
    cout << "한 변의 길이가" << side << " 센티미터인 정육면체의 부피는 ";
    cout << volume << " 세제곱센티미터입니다.\n";
    cheers(cube(2));        // 원형 보호에 의해 작동한다
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}