// twotemps.cpp -- 함수 템플릿의 오버로딩
#include <iostream>
template <typename T>       // 원본 템플릿
void Swap(T &a, T &b);

template <typename T>       // 추가 템플릿
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{
    using namespace std;
    int i = 10, j =20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
    Swap(i,j);      // 원본 템플릿에 대응
    cout << "이제 i, j = " << i << ", " << j << ".\n";

    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 6, 2, 0, 1, 9, 6, 9};
    cout << "원본 배열 : \n";
    Show(d1);
    Show(d2); 
    Swap(d1, d2, Lim);      // 추가 템플릿에 대응
    cout << "교환된 배열 : \n";
    Show(d1);
    Show(d2);
    // cin.get();
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T *a, T *b, int n)
{
    Any temp;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
}