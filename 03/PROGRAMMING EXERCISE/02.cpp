// 키를 피트와 인치 단위로 묻고, 체중을 파운드 단위로 묻는 간단한 프로그램을 작성하라. (정보를 세 개의 변수를 사용하여 저장하라.)
/* 프로그램은 BMI(비만 지수; Body Mass Index)를 보고해야 한다. 
BMI를 계산하려면 먼저 피트와 인치 단위로 주어진 키를 인치 단위릐 키로 변환한다. (1피트는 12인치이다.)
그러고 나서 인치 단위의 키에 0.0254를 곱하여 미터 단위의 키로 변환한다. 
그리고 파운드 단위의 체중에 2.2를 나누어 킬로그램 단위의 질량으로 변환한다. 
마지막으로 킬로그램 단위의 질량을 미터 단위의 키의 제곱으로 나누어 BMI를 계산한다. 
*/
//여러 가지 환산 인수를 나타내기 위해 기호 상수를 사용하라.

#include <iostream>

int main()
{
    using namespace std;
    float feet, inches, pound;
    const float FEET_INCHES = 12;
    const float MITER_INCHES = 0.0254;
    const float KG_POUND = 2.2;

    cout << "키 중 피트 단위만 입력하시오 : ";
    cin >> feet;
    cout << "키 중 인치 단위만 입력하시오 : ";
    cin >> inches;
    cout << "체중을 파운드 단위로 입력하시오 : ";
    cin >> pound;

    double height = ((feet * FEET_INCHES) + inches) * MITER_INCHES;
    double kilogram = pound * KG_POUND;
    double BMI = kilogram / (height * height);

    cout << "BMI지수는 " << BMI << "입니다.";
    return 0;
}