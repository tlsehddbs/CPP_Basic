// strngbad.h -- 결함이 있는 string 클래스 정의
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
private:
    char * str;                 // 문자열을 지시하는 포인터
    int len;                    // 문자열의 길이
    static int num_strings;     // 객체의 수
public:
    StringBad(const char * s);  // 생성자
    StringBad();                // 디폴트 생성자
    ~StringBad();               // 파괴자
// 프렌드 함수
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif