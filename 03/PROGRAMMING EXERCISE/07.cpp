// 휘발유 소비량을 유럽 스타일(100킬로미터당 리터 수)로 묻고, 미국 스타일(갤런당 마일 수)로 변환하는 프로그램을 작성하라.
// 두 스타일은 측정 단위가 서로 다를뿐만 아니라, 미국 스타일(거리/연료)은 유럽 스타일(연료/거리)의 역수이다. 
// 여기서 100킬로미터는 62.14마일이고, 1갤런은 3.875리터이다. 그러므로 19mpg(miles per gallon)는 약 12.4liters/100km이고, 27mpg는 약 8.7liters/100km이다.

#include <iostream>

int main()
{
    using namespace std;
    double liters, mpg;
    const double KM_Miles = 62.14;
    const double G_Liter = 3.875; 

    cout << "100킬로미터당 리터 수를 입력하시오 : ";
    cin >> liters;
    mpg = KM_Miles * G_Liter / liters;
    cout << "갤런당 마일 수는" << mpg << "입니다.";
    return 0;
}