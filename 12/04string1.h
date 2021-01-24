// string1.h -- 확대 개선한 String 클래스 정의
#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;                     // 문자열을 지시하는 포인터
    int len;                        // 문자열의 길이
    static int num_strings;         // 객체의 수
    static const int CINLIM = 80;   // cin 입력 한계
public:
// 성성자와 기타 메서드
    String(const char * s);         // 생성자
    String();                       // 디폴트 생성자
    String(const String & st);      // 복사 생성자
    ~String();                      // 파괴자
    int length() const { return len; }
// 오버로딩 연산자 메서드
    String & operator=(const String & st);
    String & operator=(const char * s);
    char & operator[](int i);
    const char & operator[](int i) const;
// 오버로딩 연산자 프렌드
    friend bool operator<(const String & st1, const String & st2);
    friend bool operator>(const String & st1, const String & st2);
    friend bool operator==(const String & st1, const String & st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
// static 함수
    static int HowMany();
};
#endif