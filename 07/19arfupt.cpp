// arfupt.cpp -- 함수 포인터를 가지는 배열
#include <iostream>
// 표현식은 다르지만, 동일한 함수이다.
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    // 함수를 가리킨다
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;   // C++11 자동 형 변환 
    // C++11 이전 버전을 사용할 경우 아래 구문으로 대체한다
    // const double *(*P2)(const double *, int) = f2;
    cout << "함수 포인터 : \n";
    cout << "주소 값\n";
    cout << (*p1)(av, 3) << " : " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << " : " << *p2(av, 3) << endl;

    // 포인터들의 배열 pa
    // auto는 리스트 초기화에 사용할 수 없다
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    // 그러나, 단일 값을 초기화할 때 는 사용할 수 있다. 
    // pb는 pa의 첫 번째 원소를 가리킨다
    auto pb = pa;
    // C++11 이전 버전을 사용할 경우 아래 구문으로 대체한다
    // const double *(**pb)(const double *, int) = pa;
    cout << "\n함수 포인터를 원소로 가지는 배열 : \n";
    cout << "주소 값\n";
    for (int i = 0; i < 3; i++)
    cout  << pa[i](av, 3) << " : " << *pa[i](av, 3) << endl;
    cout << "\n함수 포인터를 가리키는 포인터 : \n";
    cout << "주소 값\n";
    for (int i = 0; i < 3; i++)
        cout << pb[i](av, 3) << " : " << *pb[i](av, 3) << endl;

    // 함수 포인터를 원소로 가지는 배열을 가리키는 포인터
    cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터 : \n";
    cout << "주소 값\n";
    // pc를 선언하는 간단한 방법
    auto pc = &pa;
    // C++11 이전 버전을 사용할 경우 아래 구문으로 대체한다
    // const double *(*(*pc)[3]) (const double *, int) = &pa;
    cout << (*pc)[0](av, 3) << " : " << *(*pc)[0](av, 3) << endl;
    // pd를 선언하는 복잡한 방법
    const double *(*(*pd)[3]) (const double *, int) = &pa;
    // pdb에 리턴 값을 저장한다
    const double * pdb = (*pd)[1](av, 3);
    cout << pdb << " : " << *pdb << endl;
    // 또 다른 방법
    cout << (*(*pd)[2])(av, 3) << " : " << *(*(*pd)[2])(av, 3) << endl;
    // cin.get();
    return 0;
}

// 사용되는 함수들
const double * f1(const double * ar, int n)
{
    return ar;
}
const double * f2(const double ar[], int n)
{
    return ar+1;
}
const double * f3(const double ar[], int n)
{
    return ar+2;
}