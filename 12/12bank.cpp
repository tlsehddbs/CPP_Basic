// bank.cpp -- Queue 인터페이스를 사용한다
// queue.cpp와 함께 컴파일한다
#include <iostream>
#include <cstdlib>                  // rand()와 srand()를 사용하기 위해
#include <ctime>                    // time()을 사용하기 위해
#include "10queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);         // 새 고객이 도착했는가?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// 필요한 여러 가지를 준비한다
    std::srand(std::time(0));       // rand()의 무작위 초기화

    cout << "사례 연구 : 히서 은행의 ATM\n";
    cout << "큐의 최대 길이를 입력하십시오 : ";
    int qs;
    cin >> qs;
    Queue line(qs);                 // line 큐에는 최대 qs명까지 대기할 수 있다.

    cout << "시뮬레이션 시간 수를 입력하십시오 : ";
    int hours;                      // 시뮬레이션 시간 수
    cin >> hours;
    // 시뮬레이션은 1분에 1주기를 실행한다
    long cyclelimit = MIN_PER_HR * hours;   // 시뮬레이션 주기 수

    cout << "시간당 평균 고객 수를 입력하십시오 : ";
    double perhour;                 // 시간당 평균 고객 수
    cin >> perhour;
    double min_per_cust;            // 평균 고객 도착 간격(분 단위)
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;                      // 새 고객 데이터
    long turnaways = 0;             // 큐가 가득 차서 발길을 돌린 고객 수
    long customers = 0;             // 큐에 줄을 선 고객 수
    long served = 0;                // 시뮬레이션에서 거래를 처리한 고객 수
    long sum_line = 0;              // 큐의 누적 길이
    int wait_time = 0;              // ATM이 빌 때까지 대기하는 시간
    long line_wait = 0;             // 고객들이 줄을 서서 대기한 누적 시간

// 시뮬레이션을 실행한다
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // 새 고객이 도착했다
        {
            if (line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);    // cycle이 도착 시간이 된다
                line.enqueue(temp); // 큐에 새 고객을 추가한다
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);         // 다음 고객을 받는다
            wait_time = temp.ptime();   // wait_time을 설정한다
            line_wait += cycle = temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

// 시뮬레이션 결과를 출력한다
    if (customers > 0)
    {
        cout << " 큐에 줄을 선 고객 수 : " << customers << endl;
        cout << "거래를 처리한 고객 수 : " << served << endl;
        cout << " 발길을 돌린 고객 수 : " << turnaways << endl;
        cout << "       평균 큐의 길이 : ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "       평균 대기 시간 : "
                 << (double) line_wait / served << "분\n";
    }
    else 
        cout << "고객이 한 명도 없습니다!\n";
    cout << "완료!\n";

    return 0;
}

// x는 고객 간의 평균 시간 간격이다 (분 단위)
// 이 시간 내에 고객이 도착하면 리턴값은 true이다
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}