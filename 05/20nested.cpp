// nensted.cpp -- 중첩 루프와 2차원 배열
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const char * cities[Cities] =   // 3개의 문자열을 지시하는 포인터의 배열
    {
        "Seoul",
        "Jeju",
        "Busan",
        "Gangneung",
        "Daegu"
    };

    int maxtemps[Years][Cities] =   // 2차원 배열
    {
        {35, 32, 33, 36, 35},       // maxtemps[0]의 값들
        {33, 32, 34, 35, 31},       // maxtemps[1]의 값들
        {33, 34, 32, 35, 34},       // maxtemps[2]의 값들 
        {36, 35, 34, 37, 35}        // maxtemps[3]의 값들
    };

    cout << "2009년부터 2012년까지의 연중 최고 온도\n\n";
    for (int city = 0; city < Cities; ++ city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++ year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    return 0;
}