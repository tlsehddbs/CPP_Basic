// topfive.cpp -- string 객체의 배열을 처리한다
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main()
{
    string list[SIZE];      // string 객체 5개를 담는 배열
    cout << "좋아하는 밤하늘의 광경을 " << SIZE << "개 입력하시오 : \n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin,list[i]);
    }

    cout << "입력하신 내용은 다음과 같습니다 : \n";
    display(list, SIZE);

    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i + 1 << " : " << sa[i] << endl;
}