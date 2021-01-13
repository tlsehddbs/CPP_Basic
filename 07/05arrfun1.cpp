// arrfun1.cpp -- 배열 매개변수를 사용하는 함수
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);      // 함수 원형
int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
// 어떤 시스템에서는 앞에 static을 넣어야 배열을 초기화할 수 있다

    int sum = sum_arr(cookies, ArSize);
    cout << "먹은 과자 수 합계 : " << sum << "\n";
    return 0;
}

// 정수 배열의 합계를 리턴한다
int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}