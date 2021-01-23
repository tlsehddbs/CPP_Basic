// strngbad.cpp -- StringBad 클래스의 메서드
#include <cstring>      // 어떤 C++ 시스템이세는 string.h
#include "01strngbad.h"
using std::cout;

// static 클래스 멤버를 초기화한다
int StringBad::num_strings = 0;

// 클래스 메서드

// C 스타일의 문자열로부터 StringBad를 생성한다
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);       // 문자열의 크기를 설정한다
    str = new char[len + 1];    // 기억 공간을 대입한다
    std::strcpy(str, s);        // 포인터를 초기화한다
    num_strings++;              // 생성된 객체 수를 카운트한다
    cout << num_strings << " : \"" << str << "\" 객체 생성\n";  // 추적용 메시지
}

StringBad::StringBad()          // 디폴트 생성자
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");    // 디폴트 문자열
    num_strings++;
    cout << num_strings << " : \"" << str << "\" 디폴트 객체 생성\n";   // 추적용 메시지
}

StringBad::~StringBad()         // 꼭 필요한 파괴자
{
    cout << "\"" << str << "\" 객체 파괴, ";   // 추적용 메시지
    --num_strings;                            // 필요하다
    cout << "남은 객체 수 : " << num_strings << "\n";   // 추적용 메시지
    delete [] str;                            // 필요하다
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}