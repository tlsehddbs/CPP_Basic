/* 다음과 같은 클래스 선언을 가지고 시작하라.
// 기초 클래스
class Cd        // CD 디스크를 나타낸다
{
private:
    char performars[50];
    char label[20];
    int selections;     // 수록 곡목 수
    double playtime;    // 분 단위의 연주 시간
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    void Report() const;    // CD의 모든 데이터를 보고한다
    Cd & operator=(const Cd & d);
}; */

// 그 CD의 대표곡을 나타내는 문자열을 저장하기 위한 char형의 배열을 하나 추가시켜, Classic 클래스를 파생시켜라. 
// 기초 클래스의 어떤 함수가 가상일 것을 요구한다면, 그렇게 되도록 기초 클래스를 수정하라.
// 불필요한 메서드가 선언되어 있다면 찾아서 제거하라.
// 다음과 같은 프로그램을 사용하여 사용자가 작성한 코드들이 바르게 작동하는지 테스트하라. (classic.h, classic.cpp, pe13-01.cpp)
/*
//pe13-01.cpp -- 13장 프로그래밍 연습 1 테스트 프로그램
// classic.cpp와 함께 컴파일한다
#include <iostream>
using namespace std;
#include "classic.h"        // #include cd.h를 포함한다
void Bravo(const Cd & disk);
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia 
in C",
    "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;

    cout << "객체를 직접 사용한다 : \n";
    c1.Report();        // Cd 클래스를 사용한다
    c2.Report();        // Classic 메서드를 사용한다

    cout << "객체를 지시하는 Cd * 포인터를 사용한다 : \n";
    pcd->Report();      // Cd 객체에 Cd 메서드를 사용
    pcd = &c2;
    pcd->Report();      // Classic 객체에 Classic 메서드 사용

    cout << "Cd 참조 매개변수를 사용하여 함수를 호출한다 : \n";
    Bravo(c1);
    Bravo(c2);

    cout << "대입을 테스트한다 : \n";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
} */