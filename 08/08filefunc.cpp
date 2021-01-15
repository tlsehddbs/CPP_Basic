// filefunc.cpp -- ostream &형 매개변수를 가지는 함수
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
    ofstream fout;
    const char * fn = "ep-date.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << fn << " 파일을 열 수 없습니다. 끝.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "대물렌즈 초점거리를 "
            "mm 단위로 입력하십시오 : ";
    cin >> objective;
    double eps[LIMIT];
    cout << LIMIT << "가지 대안렌즈의 초점거리를 "
                     "mm 단위로 입력하십시오 : \n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "대안렌즈 #" << i + 1 << " : ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "종료\n";
    return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);     // 초기 포맷팅 상태 저장
    os.precision(0);
    os << "대물렌즈의 초점거리 : " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(17);
    os << "대안렌즈 초점거리";
    os.width(15);
    os << "확대배율" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(17);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    os.setf(initial);       // 초기 포맷팅 상태 복원
}