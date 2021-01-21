// randwalk.cpp -- Vector 클래스를 사용한다
// vect.cp 파일과 함께 컴파일한다
#include <iostream>
#include <cstdlib>      // rand(), srand()의 원형
#include <ctime>        // time() 의 원형
#include "13vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // 난수 발생기에 씨를 뿌린다
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "목표 거리를 입력하십시오(끝내려면 q) : ";
    while (cin >> target)
    {
        cout << "보폭을 입력하십시오 : ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << steps << " 걸음을 걸은 후 술고래의 현재 위치 : \n";
        cout << result << endl;
        result.polar_mode();
        cout << " 또는\n" << result << endl;
        cout << "걸음당 기둥에서 벗어난 평균 거리 = "
             << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "목표 거리를 입력하십시오(끝내려면 q) : ";
    }
    cout << "프로그램을 종료합니다.\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}