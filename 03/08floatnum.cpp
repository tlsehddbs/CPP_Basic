// floatnum.cpp -- 부동 소수점형
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
                                    // 고정 소수점 형식으로 출력
    float tub = 10.0 / 3.0;         // 유효 숫자 6개                    
    double mint = 10.0 / 3.0;       // 유효 숫자 15개
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    return 0;
}