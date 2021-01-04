// myfirst.cpp -- 메시지를 출력한다.

#include <iostream> // 선행처리 지시자

int main()  // 함수 머리
{           // 함수 몸체의 시작
    using namespace std;                        // 정의 가시화
    cout << "C++의 세계로 오십시오.";            // 메시지 출력
    cout << endl;                               // 새로운 행 시작
    cout << "후회하지 않으실 겁니다!" << endl;    // 또 다른 메시지 출력
    return 0;                                   // main()을 종료
}           // 함수 몸체의 끝