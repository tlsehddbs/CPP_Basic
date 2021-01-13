// arrfun3.cpp -- 배열을 처리하는 함수와 cosnt
#include <iostream>
const int Max = 5;
// 함수 원형
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);      // 데이터를 보호한다
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0)
    {
        cout << "재평가율을 입력하십시오 : ";
        double factor;
        while (!(cin >> factor))    // 잘못된 입력임
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "잘못 입력했습니다, 수치를 입력하세요 : ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "프로그램을 종료합니다.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << (i + 1) << "번 부동산의 가격 : $";
        cin >> temp;
        if (!cin)      // 입력 불량
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
            break;
        }
        else if (temp < 0)      // 루프 탈출을 위한 음수값
            break;
        ar[i] = temp;
    }
    return i;
}

// 다음 함수는 주소가 ar인ㅇ 배열을 사용할 수는 있으나, 변경할 수는 없다
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << (i + 1) << "번 부동산 : $";
        cout << ar[i] << endl;
    }
}

// ar[]의 각 원소에 재평가율 r을 곱한다
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}