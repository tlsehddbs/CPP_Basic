// 사용자에게 본인의 이름을 입력하도록 요구하는 프로그램을 작성하시오. 또한 그 프로그램은 화면에 사용자의 나이를 월수로 나타내도록 합니다. 
// Enter yout age : 29
// 이때 당신의 나이를 월수로 나타낼 경우 348입니다. 

#include <iostream>

int main()
{
    using namespace std;
    char name;  // string??
    int age;

    cout << "Enter your name : ";
    cin >> name;    // getline을 사용할 수 있도록 할 것 : 이름을 넣으면 나이를 입력받지 않고 바로 다음으로 넘어감

    cout << "Enter your age : ";
    cin >> age;
    int age_m;
    age_m = age * 12;
    cout << "이때 당신의 나이를 월수로 나타낼 경우 " << age_m << "입니다." << endl;

    return 0;
}