// placenew1.cpp -- new, 위치 지정 new를 사용한다(delete 없이)
#include <iostream>
#include <cstring>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0)
    {words = s; number = n; cout << words << " 생성\n"; }
    ~JustTesting() { cout << words << " 파괴\n"; }
    void Show() const { cout << words << ", " << number << endl;}
};
int main()
{
    char * buffer = new char[BUF];          // 메모리 블록을 얻는다

    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;         // 객체를 buffer에 놓는다
    pc2 = new JustTesting("Heap1", 20);     // 객체를 heap에 놓는다

    cout << "메모리 블록 주소 : \n" << "buffer : "
         << (void *) buffer << "    heap : " << pc2 << endl;
    cout << "메모리 내용 : \n";
    cout << pc1 << " : ";
    pc1->Show();
    cout << pc2 << " : ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "메모리 내용 : \n";
    cout << pc3 << " : ";
    pc3->Show();
    cout << pc4 << " : ";
    pc4->Show();

    delete pc2;             // Heap1 해제
    delete pc4;             // Heap2 해제
    delete [] buffer;       // buffer 해제
    cout << "종료\n";
    return 0;
}