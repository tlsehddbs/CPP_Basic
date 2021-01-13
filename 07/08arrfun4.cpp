// arrfun4.cpp -- 배열 범위를 사용하는 함수
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
// 어떤 시스템에서는 앞에 static을 넣어야 배열을 초기화할 수 있다

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "먹은 과자 수 합계 : " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);        // 처음 3개의 원소
    cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
    sum = sum_arr(cookies + 4, cookies + 8);    // 마지막 4개의 원소
    cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다.\n";
    return 0;
}

// 정수 배열의 합계를 리턴한다
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
}