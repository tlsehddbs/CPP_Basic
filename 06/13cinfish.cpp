// cinfish.cpp -- 수가 아닌 입력으로 루프를 종료시킨다
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
// 데이터를 입력받는다
    double fish[Max];
    cout << "오늘 낚은 물고기의 무게를 입력하십시오.\n";
    cout << "물고기는 최대 " << Max << "마리까지 낚을 수 있습니다.\n"
         << "<입력을 끝내려면 q를 누르십시오>\n";
    cout << "fish #1 : ";
    int i =0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "fish #" << i + 1 << " : ";
    }
// 평균을 계산한다
    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += fish[j];
// 결과를 보고한다
    if (i == 0)
        cout << "물고기를 한 마리도 낚지 못하셨군요.\n";
    else
        cout << "물고기 " << i << "마리의 평균 무게는 "
             << total / i << "그램입니다.\n";
    cout << "프로그램을 종료합니다.\n";
    return 0; 
}