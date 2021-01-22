// 여기에서는 배열과 구조체를 다루는 함수를 작성하는 것을 연습한다.
// 다음에 주어지는 것은 프로그램의 골격이다.
// 주석문으로 서술된 함들을 작성하여 프로그램을 완성하라.
/*
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo()는 두 개의 매개변수를 취한다. 하나는 student 구조체
// 배열에 첫 번째 원소를 지시하는 포인터이고, 다른 하나는
// 그 배열의 원소 수를 나타내는 int 값이다. 이 함수는 학생들과
// 관련된 데이터를 요구하여 배열에 저장하고, 배열이 다 찼거나 
// 학생 이름에 빈 줄이 입력되면 종료된다. 이 함수는 배열의
// 실제로 채워진 원소 수를 리턴한다.
int getinfo(student pa[], int n);

// display1()은 student 구조체를 매개변수로 취하며
// 그 구조체의 내용을 출력한다
void display1(student st);

// display2()는 studewnt 구조체의 주소를 매개변수로 취하며
// 그 구조체의 내용을 출력한다
void display2(const student * ps);

// display3()은 student 구조체 배열의 첫 번째 원소의 주소와
// 배열의 원소 수를 매개변수로 취하며, 구조체들의 내용을 출력한다.
void display3(const student pa[], int n);

int main()
{
    cout << "학급의 학생 수를 입력하십시오 : ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout << "프로그램을 종료합니다.\n";
    return 0;
}
*/