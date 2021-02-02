
# **CPP_Basic**
[![성안당 C++ 기초 플러스 6판](https://image.yes24.com/goods/58183878/800x0)](http://www.kyobobook.co.kr/product/detailViewKor.laf?ejkGb=KOR&mallGb=KOR&barcode=9788931555356&orderClick=LAG&Kc= "성안당 C++ 기초 플러스 6판")  
[성안당](https://www.cyber.co.kr/shop/main/index.php) [C++ 기초 플러스 6판](https://www.cyber.co.kr/shop/goods/goods_view.php?goodsno=5888&category=020030060)

**C++ 기초 플러스 6판 소스코드, 프로그래밍 연습문제 풀이** <br><br>

## **01** C++ 첫걸음 
<details>
<summary>학습목표</summary>
<div markdown="1">
● C와 C++ 언어의 역사와 철학<br>
● C++가 C 언어에 추가한 일반화 프로그래밍 개념<br>
● 절차적 프로그래밍과 객체 지향 프로그래밍<br>
● 프로그래밍 언어의 표준<br>
● C++가 C 언어에 추가한 객체 지향 개념<br>
● 프로그램 작성 요령<br>
</div>
</details>

* ### **01.1** C++를 배우자 : 앞으로 배우게 될 내용에 대하여

* ### **01.2** C++의 탄생 : 간략한 역사
  * C언어
  * C의 프로그래밍 철학
  * C++의 등장 : 객체 지향 프로그래밍
  * C++와 일반화 프로그래밍
  * C++의 기원

* ### **01.3** 이식성과 표준
  * 언어의 성장
  * 이 책과 C++ 표준

* ### **01.4** 프로그램 작성 요령
  * 소스 코드 파일 작성
  * 컴파일과 링크
    * Unix에서의 컴파일과 링크
    * Linux에서의 컴파일과 링크
    * Windows 커맨드 라인 모드를 위한 컴파일러
    * Windows 컴파일러
    * 매킨토시 컴파일러
  
### [Listing 1 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/01/.SUMMARY1.md ".SUMMARY1.md")
___
## **02** C++ 시작하기
<details>
<summary>학습목표</summary>
<div markdown="1">
● C++ 프로그램 작성법<br>
● c++ 프로그램의 일반적인 형식<br>
● #include 전처리 지시자<br>
● main() 함수<br>
● cout 객체를 사용한 출력<br>
● C++ 프로그램에 주석문 달기<br>
● endl의 사용하는 시점과 방법<br>
● 변수의 선언과 사용<br>
● cin 객체를 사용한 입력<br>
● 간단한 함수의 정의와 사용<br>
</div>
</details>

* ### **02.1** C++의 시작 
  * - [[myfirst.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/01myfirst.cpp "Listing 2.1")
  * main() 함수
    * 인터페이스 역할을 하는 함수 머리
    * 이름이 반드시 main()이어야 하는 이유
  * C++ 주석문
  * C++ 전처리기와 iostream파일
  * 헤더 파일 이름
  * 이름 공간
  * cout을 이용한 C++의 출력
    * 조정자 endl
    * 개행 문자(\n)
  * C++ 소스 코드의 모양
    * 토큰과 화이트스페이스
    * C++ 소스 코드 스타일

* ### **02.2** C++ 구문 
  * - [[carrots.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/02carrots.cpp "Listing 2.2")
  * 선언 구문과 변수
  * 대입 구문
  * cout의 새로운 사용법

* ### **02.3** C++의 기타 구문 
  * - [[getinfo.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/03getinfo.cpp "Listing 2.3")
  * cin 사용법
  * cout에 의한 출력의 결합
  * cin과 cout : 클래스 맛보기

* ### **02.4** 함수
  * 리턴값이 있는 함수 
      - [[sqrt.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/04sqrt.cpp "Listing 2.4")
  * 변이 함수들
  * 사용자 정의 함수 
      - [[ourfunc.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/05ourfunc.cpp "Listing 2.5")
    * 함수 모양
    * 함수 머리
  * 리턴 값이 있는 사용자 정의 함수 
    - [[convert.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/06convert.cpp "Listing 2.6")
  * 복수 함수 프로그램에 using 지시자 넣기
  
### [Listing 2 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/.SUMMARY2.md ".SUMMARY2.md")   
### [Listing 2 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/02/PROGRAMMING%20EXERCISE)
### [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/Note(Listing2).md "Note(Listing2).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/Tip(Listing2).md "Tip(Listing2).md")
___
## **03** 데이터 처리
<details>
<summary>학습목표</summary>
<div markdown="1">
● C++의 변수 이름을 정하는 규칙<br>
● const 제한자를 사용하여 기호 상수 만들기<br>
● C++에 내장된 정수형 : unsigned long, long, unsigned int, int unsigned short, short, char, unsigned char, signed char, bool<br>
● C++에 내장된 부동 소수점형 : float, double, long double<br>
● C++11에서 추가된 변수형 unsigned long long, long long<br>
● 여러 부동 소수점형의 시스템 한계값을 나타내는 cflost 파일<br>
● 여러 정수형 시스템 한계값을 나타내는 climits 파일<br>
● 여러 부동 소수점형의 수치 상수들<br>
● 여러 정수형의 수치 상수들<br>
● C++의 산술 연산자<br>
● 자동 데이터형 변환<br>
● 강제 데이터형 변환<br>
</div>
</details>

* ### **03.1** 간단한 변수
  * 변수 이름
  * 정수형
  * short, int, long, long long 정수형 
      - [[limits.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/01limits.cpp "Listing 3.1")
    * sizeof 연산자와 climits 헤더 파일
    * 초기화
    * C++11에서의 초기화
  * unsigned형 
    - [[exceed.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/02exceed.cpp "Listing 3.2")
  * 어느 정수형을 사용할 것인가?
  * 정수형 상수 
    - [[hexoct1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/03hexoct1.cpp "Listing 3.3") 
    - [[hexoct2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/04hexoct2.cpp "Listing 3.4")
  * C++가 상수의 데이터형을 결정하는 방법
  * char형 : 문자와 작은 정수 
      - [[chartype.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/05chartype.cpp "Listing 3.5")   
      - [[morechar.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/06morechar.cpp "Listing 3.6")
    * 프로그램 분석
    * 멤버 함수 : cout.put()
    * char형 상수 
      - [[bondini.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/07bondini.cpp "Listing 3.7")
    * 유니버설 네임 코드
    * signed char형과 unsigned char형
    * 확장 char형 : wchar_t
    * 새로운 C++11형 : char16_t와 char32_t
  * bool형

* ### **03.2** const 제한자

* ### **03.3** 부동 소수점수
  * 부동 소수점수의 표기
  * 부동 소수점형 
    * [[floatnum.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/08floatnum.cpp "Listing 3.8")
    * 프로그램 분석
  * 부동 소수점형 상수
  * 부동 소수점수의 장단점 
    - [[fltadd.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/09fltadd.cpp "Listing 3.9")
  
* ### **03.4** C++ 산술 연산자 
  * - [[arith.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/10arith.cpp "Listing 3.10")
  * 연산 순서 : 우선순위와 결합 방향
  * 나눗셈에 대한 보충 
    - [[divide.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/11divide.cpp, "Listing 3.11")
  * 나머지셈 연산자 
    - [[modulus.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/12modulus.cpp "Listing 3.12")
  * 데이터형 변환
    * 대입 구문에서의 데이터형 변환 
      - [[init.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/13init.cpp "Listing 3.13")
    * {}를 사용할 경우의 초기화 변환(C++11)
    * 수식에서의 데이터형 변환
    * 매개변수를 전달할 때의 형 변환
    * 데이터형 변환자 
      - [[typecast.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/14typecast.cpp "Listing 3.14")
  * C++11에서의 auto 선언

### [Listing 3 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/.SUMMARY3.md ".SUMMARY3.md")  
### [Listing 3 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/02/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/Compatibility(Listing3).md "Compatibility(Listing3).md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/Note(Listing3).md "Note(Listing3).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/Tip(Listing3).md "Tip(Listing3).md")
___
## **04** 복합 데이터형
<details>
<summary>학습목표</summary>
<div markdown="1">
● 배열의 생성과 사용<br>
● C 스타일 문자열의 생상과 사용<br>
● string 클래스 문자열의 생성과 사용<br>
● 문자열을 읽는 getline()과 get() 메서드의 사용<br>
● 문자열과 수치의 혼합 입력<br>
● 구조체의 생성과 사용<br>
● 공용체의 생성과 사용<br>
● 열거체의 생성과 사용<br>
● 포인터의 생성과 사용<br>
● new와 delete를 사용한 동적 메모리 관리<br>
● 동적 배열의 생성<br>
● 동적 구조체의 생성<br>
● 자동 기억 공간, 정적 기억 공간, 동적 기억 공간<br>
● 벡터(vector)와 배열에 대한 소개<br>
</div>
</details>

* ### **04.1** 배열 
  * - [[arrayone.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/01arrayone.cpp "Listing 4.1")
  * 프로그램 분석
  * 배열 초기화 규칙
  * C++11 배열 초기화

* ### **04.2** 문자열
  * 문자열 상수의 결합
  * 배열에 문자열 사용 
    * [[strings.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/02strings.cpp "Listing 4.2")
    * 프로그램 분석
  * 문자열 입력 
    - [[instr1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/03instr1.cpp "Listing 4.3")
  * 한 번에 한 행의 문자열 입력 읽기
    * getline()을 이용한 행 단위 입력 
      - [[instr2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/04instr2.cpp "Listing 4.4")
    * get()을 이용한 행 단위 입력 
      - [[instr3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/05instr3.cpp "Listing 4.5")
    * 빈 행과 기타 문제점
  * 문자열과 수치의 혼합 입력 
    - [[numstr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/06numstr.cpp "Listing 4.6")
  
* ### **04.3** string 클래스 
  * - [[strtype1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/07strtype1.cpp "Listing 4.7")
  * C++11 문자열 초기화
  * 대입, 결합, 추가 
    - [[strtype2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/08strtype2.cpp "Listing 4.8")
  * string 클래스의 조작 
    - [[strtype3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/09strtype3.cpp "Listing 4.9")
  * string 클래스의 입출력 
    - [[strtype4.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/10strtype4.cpp "Listing 4.10")
  * 다른 형태의 문자열 상수
  
* ### **04.4** 구조체
  * 프로그램에 구조체 사용하기 
    * [[structur.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/11structur.cpp "Listing 4.14")
    * 프로그램 분석
  * C++11의 구조체 초기화
  * 구조체가 string 클래스 멤버를 사용할 수 있을까?
  * 구조체의 기타 특성 
    - [[assgn_st.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/12assgn_st.cpp "Listing 4.15")
  * 구조체의 배열 
    - [[arrstruc.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/13arrstruc.cpp "Listing 4.13")
  * 구조체 안의 비트 필드
  
* ### **04.5** 공용체
  
* ### **04.6** 열거체
  * 열거자 값의 설정
  * 열거체의 값 범위
  
* ### **04.7** 포인터와 메모리 해제 
  - - [[address.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/14address.cpp "Listing 4.14")
  - - [[pointer.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/15pointer.cpp "Listing 4.15")
  * 포인터의 선언과 초기화 
    - [[init_ptr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/16init_ptr.cpp "Listing 4.16")
  * 포인터의 위험
  * 포인터와 수
  * new를 사용한 메모리 대입 
    * [[use_new.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/17use_new.cpp "Listing 4.17")
    * 프로그램 분석
  * delete를 사용한 메모리 해제
  * new를 사용한 동적 배열의 생성
    * new를 사용한 동적 배열의 생성
    * 동적 배열의 사용 
      - [[arraynew.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/18arraynew.cpp "Listing 4.18")
  
* ### **04.8** 포인터, 배열, 포인터 연산 
  * - [[addpntrs.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/19addpntrs.cpp "Listing 4.19")
  * 프로그램 분석
  * 포인터에 관한 요약
    * 포인터 선언
    * 포인터에 값 대입
    * 포인터의 간접 참조
    * 배열 이름
    * 포인터 연산
    * 배열의 동적 바인딩과 정적 바인딩
    * 배열 표기와 포인터 표기
  * 포인터와 문자열 
    * [[ptrstr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/20ptrstr.cpp "Listing 4.20")
    * 프로그램 분석
  * new를 사용한 동적 구조체의 생성 
    - [[newstrct.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/21newstrct.cpp "Listing 4.21")
    * new와 delete를 사용하는 예제 
      - [[delete.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/22delete.cpp "Listing 4.25")
    * 프로그램 분석
  * 자동 공간, 정적 공간, 동적 공간
    * 저장 공간
    * 정적 공간
    * 동적 공간
  
* ### **04.9** 변수형의 조합 
    - [[mixtypes.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/23mixtypes.cpp "Listing 4.23")
  
* ### **04.10** 배열의 대안
  * Vector 템플릿 클래스
  * array 템플릿 클래스(C++11)
  * 배열, Vector 객체, Array 객체 비교 
    * [[choices.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/24choices.cpp "Listing 4.24")
    * 프로그램 분석

### [Listing 4 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/.SUMMARY4.md ".SUMMARY4.md")  
### [Listing 4 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/04/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/Compatibility(Listing4).md "Compatibility(Listing4).md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/Note(Listing4).md "Note(Listing4).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/Tip(Listing4).md "Tip(Listing4).md")
___
## **05** 루프와 관계 표현식
<details>
<summary>학습목표</summary>
<div markdown="1">
● for 루프<br>
● 표현식과 구문<br>
● 증가 연산자와 감소 연산자(++와 --)<br>
● 조합 대입 연산자<br>
● 복합 구문(블록)<br>
● 콤마 연산자<br>
● 관계 연산자(>, >=, ==, <=, <, !=)<br>
● while 루프<br>
● typedef 기능<br>
● do while 루프<br>
● 문자 입력 메서드 get()<br>
● 파일 끝 조건<br>
● 중첩 루프와 2차원 배열<br>
</div>
</details>

* ### **05.1** for 루프 
  * - [[forloop.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/01forloop.cpp "Listing 5.1")
  * for 루프의 각 부분 
    - [[num_test.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/02num_test.cpp "Listing 5.2")
    * 표현식과 구문 
      - [[express.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/03express.cpp "Listing 5.3")
    * 표현식이 아닌 것과 구문
    * 융통성 있는 규칙
  * for 루프에 대한 보충 
    * [[formore.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/04formore.cpp "Listing 5.4")
    * 프로그램 분석
  * 갱신 크기 변경 
    - [[bigstep.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/05bigstep.cpp "Listing 5.5")
  * for 루프를 사용한 문자열 처리 
    - [[forstr1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/06forstr1.cpp "Listing 5.6")
  * 증가 연산자(++)와 감소 연산자(--) 
    - [[plus_one.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/07plus_one.cpp "Listing 5.7")
  * 부수 효과와 시퀀스 포인트 
  * 접두어 방식과 접미어 방식
  * 증가/감소 연산자와 포인터
  * 조합 대입 연산자
  * 복합 구문 또는 블록 
    - [[block.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/08block.cpp "Listing 5.8")
  * 콤마 연산자 
    - [[forstr2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/09forstr2.cpp "Listing 5.9")
    * 프로그램 분석
    * 컴마 연산자에 대한 보충
  * 관계 표현식
  * 흔히 범하는 실수 
    - [[equal.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/10equal.cpp "Listing 5.10")
  * C 스타일 문자열 비교 
    * [[compstr1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/11compstr1.cpp "Listing 5.11")
    * 프로그램 분석
  * string 클래스 문자열 비교 
    * [[compstr2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/12compstr2.cpp "Listing 5.12")
    * 프로그램 분석
  
* ### **05.2** while 루프 
  *  * [[while.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/13while.cpp "Listing 5.13")
  * 프로그램 분석
  * for와 while
  * 잠시만-시간 지연 루프 
    - [[waiting.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/14waiting.cpp "Listing 5.14")
  
* ### **05.3** do while 루프 
    - [[dowhile.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/15dowhile.cpp "Listing 5.15")
  
* ### **05.4** Range 기반의 for 루프(C++11)
  
* ### **05.5** 루프와 텍스트 입력
  * cin을 이용한 입력 
    * [[textin1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/16textin1.cpp "Listing 5.16")
    * 프로그램 분석
  * cin.get(char)를 이용한 입력 
    - [[textin2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/17textin2.cpp "Listing 5.17")
  * 어느cin.get()을 사용할까?
  * 파일 끝(End-Of-File)조건 
    - [[textin3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/18textin3.cpp "Listing 5.18")
    * 입력을 끝내는 EOF
    * 문자 입력에 자주 쓰는 구문
  * cin.get()의 또 다른 버전 
    - [[textin4.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/19textin4.cpp "Listing 5.19")
  
* ### **05.5** 중첩 루프와 2차원 배열
  * 2차원 배열의 초기화
  * 2차원 배열 사용하기 
    - [[nested.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/20nested.cpp "Listing 5.20")

### [Listing 5 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/.SUMMARY5.md ".SUMMARY5.md")  
### [Listing 5 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/05/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/Compatibility(Listing5).md "Compatibility(Listing5).md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/Note(Listing5).md "Note(Listing5).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/Tip(Listing5).md "Tip(Listing5).md") | [Remamber](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/Remember(Listing5).md "Remember(Listing5).md") 
___
## **06** 분기 구문과 논리 연산자
 <details>
<summary>학습목표</summary>
<div markdown="1">
● if 구문<br>
● if else 구문<br>
● 논리 연산자(&&, ||, !)<br>
● 문자 함수들이 들어 있는 cctype 라이브러리<br>
● 조건 연산자(? :)<br>
● switch 구문<br>
● continue와 break 구문<br>
● 수를 읽어들이는 루프<br>
● 기본적인 파일 입력/출력<br>
</div>
</details>

 * ### **06.1** if 구문 
    - [[if.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/01if.cpp "Listing 6.1")
  * if else 구문 
    - [[ifelse.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/02ifelse.cpp "Listing 6.2")
  * if else 구문의 작성 스타일
  * if else if else 구문 
    - [[ifelseif.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/03ifelseif.cpp "Listing 6.3")
  
* ### **06.2** 논리 표현식
  * 논리합 OR 연산자(||) 
    - [[or.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/04or.cpp "Listing 6.4")
  * 논리곱 AND 연산자(&&) 
    * [[and.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/05and.cpp "Listing 6.5")
    * 프로그램 분석
  * &&를 이용한 범위 설정 
    * [[more_and.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/06more_and.cpp "Listing 6.6")
    * 프로그램 분석
  * 논리부정 NOT 연산자(!) 
    * [[not.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/07not.cpp "Listing 6.7")
    * 프로그램 분석
  * 논리 연산자의 고려 사항
  * 논리 연산자의 대체 표기
  
* ### **06.3** 문자 함수를 위한 cctype 라이브러리 
    - [[cctypes.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/08cctypes.cpp "Listing 6.8")
  
* ### **06.4** ? : 연산자 
    - [[condit.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/09condit.cpp "Listing 6.9")
  
* ### **06.5** switch 구문 
    - [[switch.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/10switch.cpp "Listing 6.10")
  * 레이블로 열거자 사용하기 
    - [[enum.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/11enum.cpp "Listing 6.11")
  * switch와 if else
  
* ### **06.6** break와 continue 구문 
  * [[jump.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/12jump.cpp "Listing 6.12")
  * 프로그램 분석
  
* ### **06.7** 수를 읽어들이는 루프 
  * [[cinfish.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/13cinfish.cpp "Listing 6.13") 
  * [[cingolf.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/14cingolf.cpp "Listing 6.14")
  * 프로그램 분석
  
* ### **06.8** 간단한 파일 입력/출력
  * 텍스트 I/O와 텍스트 파일
  * 텍스트 파일에 쓰기 
    * [[outfile.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/15outfile.cpp "Listing 6.15")
    * 프로그램 분석
  * 텍스트 파일 읽기 
    * [[sumafile.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/16sumafile.cpp "Listing 6.16")
    * 프로그램 분석

### [Listing 6 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/.SUMMARY6.md ".SUMMARY6.md")  
### [Listing 6 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/06/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/Compatibility(Listing6).md "Compatibility(Listing6.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/Note(Listing6).md "Note(Listing6).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/Tip(Listing6).md "Tip(Listing6).md")

___
## **07** 함수-C++의 프로그래밍 모듈
<details>
<summary>학습목표</summary>
<div markdown="1">
● 함수의 기초(복습)<br>
● 함수의 원형<br>
● 함수 매개변수를 값으로 전달<br>
● 배열을 처리하는 함수의 설계<br>
● const 포인터 매개변수<br>
● 문자열을 처리하는 함수의 설계<br>
● 구조체를 처리하는 함수의 설계<br>
● string 클래스 객체를 처리하는 함수의 설계<br>
● 자기 자신을 호출하는 (재귀)함수<br>
● 하수를 지시하는 포인터<br>
</div>
</details>

* ### **07.1** 함수의 기초(복습) 
  - - [[calling.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/01calling.cpp "Listing 7.1")
  * 함수 정의
  * 함수 원형과 함수 호출 
    - [[protos.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/02protos.cpp "Listing 7.2")
    * 함수 원형은 왜 필요한가?
    * 함수 원형의 구문 규칙
    * 함수 원형이 사용자를 위해 하는 일
  
* ### **07.2** 함수 매개변수와 값으로 전달하기
  * 여러 개의 매개변수 
    * [[twoarg.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/03twoarg.cpp "Listing 7.3")
    * 프로그램 분석
  * 두 개의 매개변수를 사용하는 또 다른 함수 
    * [[lotto.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/04lotto.cpp "Listing 7.4")
    * 프로그램 분석
  
* ### **07.3** 함수와 배열 
  -  - [[arrfun1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/05arrfun1.cpp "Listing 7.5")
    * 포인터와 배열을 처리하는 함수
  * 배열을 매개변수로 사용하는 것의 의미 
    * [[arrfun2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/06arrfun2.cpp "Listing 7.6")
    * 프로그램 분석
  * 배열을 처리하는 함수에 대한 보충
    * 배열 채우기
    * 배열의 내용 출력과 const로 보호하기
    * 배열의 수정
    * 코드의 결합 
      * [[arrfun3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/07arrfun3.cpp "Listing 7.7")
    * 프로그램 분석
    * 일반적인 배열 함수 용어
  * 배열의 범위를 사용하는 함수 
    * [[arrfun4.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/08arrfun4.cpp "Listing 7.8")
    * 프로그램 분석
  * 포인터와 const
  
* ### **07.4** 함수와 2차원 배열

* ### **07.5** 힘수와 C 스타일의 문자열
  * C 스타일 문자열을 매개변수로 사용하는 함수 
    * [[strgfun.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/09strgfun.cpp "Listing 7.9")
    * 프로그램 분석
  * C 스타일 문자열을 리턴하는 함수 
    - [[strgback.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/10strgback.cpp "Listing 7.10")
  *  프로그램 분석
  
* ### **07.6** 함수와 구조체
  * 구조체의 전달과 리턴 
    * [[travel.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/11travel.cpp "Listing 7.11")
  * 함수와 구조체의 두 번째 예제 
    * [[strctfun.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/12strctfun.cpp "Listing 7.12")
    * 프로그램 분석
  * 구조체 주소의 전달 
    * [[strctptr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/13strctptr.cpp "Listing 7.13")
  
* ### **07.7** 함수와 string 클래스 객체 
    * [[topfive.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/14topfive.cpp "Listing 7.14")

* ### **07.8** 함수와 array 객체 
    * [[arrobj.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/15arrobj.cpp "Listing 7.15")
  * 프로그램 분석
  
* ### **07.9** 재귀 호출
  * 단일 재귀 호출 
    * [[recur.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/16recur.cpp "Listing 7.16")
  * 다중 재귀 호출 
    * [[ruler.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/17ruler.cpp "Listing 7.17")
  
* ### **07.10** 함수를 지시하는 포인터
  * 함수 포인터의 기초
    * 함수 주소 얻기
    * 포인터를 사용하여 함수 불러내기
  * 함수 포인터 예제 
    * [[fun_ptr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/18fun_ptr.cpp "Listing 7.18")
  * 함수 포인터의 변형 
    * [[arfupt.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/19arfupt.cpp "Listing 7.19")
  * typedef를 이용한 단순화

### [Listing 7 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/.SUMMARY7.md ".SUMMARY7.md")  
### [Listing 7 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/07/PROGRAMMING%20EXERCISE)
### [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/Note(Listing7).md "Note(Listing7).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/Tip(Listing7).md "Tip(Listing7).md")
___
## **08** 함수의 활용
<details>
<summary>학습목표</summary>
<div markdown="1">
● 인라인 함수<br>
● 참조 변수<br>
● 함수 매개변수를 참조로 전달<br>
● 디폴트 매개변수<br>
● 함수 오버로딩<br>
● 함수 템플릿<br>
● 함수 템플릿의 특수화<br>
</div>
</details>

* ### **08.1** C++ 인라인(inline) 함수 
  -  * [[inline.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/01inline.cpp "Listing 8.1")
  
* ### **08.2** 참조 변수
  * 참조 변수의 생성 
    - [[firstref.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/02firstref.cpp "Listing 8.2") 
    - [[secref.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/03secref.cpp "Listing 8.3")
  * 함수 매개변수로서의 참조 
    * [[swaps.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/04swaps.cpp "Listing 8.4")
    * 프로그램 분석
  * 참조의 특성 
    - [[cubes.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/05cubes.cpp "Listing 8.5")
    * 임시 변수, 참조 매개변수, const
  * 구조체에 대한 참조 
    * [[strc_ref.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/06strc_ref.cpp "Listing 8.6")
    * 프로그램 분석
    * 왜 참조를 리턴하는가?
    * 참조를 리턴할 때 주의할 점
    * 참조를 리턴할 때 왜 const를 사용하는가?
  * 클래스 객체와 참조 
    * [[strquote.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/07strquote.cpp "Listing 8.7")
    * 프로그램 분석
  * 또 하나의 객체 레슨 : 객체, 상속, 참조 
    * [[filefunc.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/08filefunc.cpp "Listing 8.8")
    * 프로그램 분석
  * 참조 매개변수는 언제 사용하는가?
  
* ### **08.3** 디폴트 매개변수 
  * [[left.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/09left.cpp "Listing 8.9")
  * 프로그램 분석 
  
* ### **08.4** 함수 오버로딩
  * 오버로딩 예제 
    * [[leftover.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/10leftover.cpp "Listing 8.10")
  * 함수 오버로딩은 언제 사용하는가?
  
* ### **08.5** 함수 템플릿 
  - * [[funtemp.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/11funtemp.cpp "Listing 8.11")
  * 템플릿의 오버로딩 
    * [[twotemps.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/12twotemps.cpp "Listing 8.12")
  * 템플릿 제한
  * 명시적 특수화 
    * 3세대 특수화(ISO/ANSI C++ 표준)
    * 명시적 특수화 예제 
      * [[twoswap.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/13twoswap.cpp "Listing 8.13")
    * 오래된 특수화 형식
    * 구체화와 특수화
  * 컴파일러는 어느 함수를 선택할까?
    * 정확한 대응과 최선의 대응
    * 부분순서화 규칙을 설명하는 예제 
      * [[tempover.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/14tempover.cpp "Listing 8.14")
    * 사용자의 선택 
      * [[choices.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/15choices.cpp "Listing 8.15")
    * 매개변수가 여러 개인 함수
  * 템플릿 함수의 발전
    * 그 타입이 무엇인가?
    * 대체할 수 있는 함수구문(C++11의 Trailing Return Type)

### [Listing 8 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/.SUMMARY8.md ".SUMMARY8.md")  
### [Listing 8 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/08/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/Compatibility(Listing8).md "Compatibility(Listing8.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/Note(Listing8).md "Note(Listing8).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/Tip(Listing8).md "Tip(Listing8).md")
___
## **09** 메모리 모델과 이름 공간
<details>
<summary>학습목표</summary>
<div markdown="1">
● 분할 컴파일<br>
● 위치 지정 new<br>
● 기억 존속 시간, 사용 범위, 링크<br>
● 이름 공간<br>
</div>
</details>

* ### **09.1** 분할 컴파일
    * [[coordin.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/01coordin.h "Listing 9.1") 
    * [[file1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/02file1.cpp "Listing 9.2") 
    * [[file2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/03file2.cpp "Listing 9.3")
  
* ### **09.2** 기억 존속 시간, 사용 범위, 링크
  * 사용 범위와 링크
  * 자동 번수 
    - [[autoscp.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/04autoscp.cpp "Listing 9.4")
    * 자동 변수의 초기화
    * 자동 변수와 스택
    * 레지스터 변수
  * 정적 변수
    * 정적 변수 초기화
  * 정적 존속 시간, 외부 링크
    * 단일 정의 원칙 
      * [[external.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/05external.cpp "Listing 9.5") 
      * [[support.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/06support.cpp "Listing 9.6")
    * 프로그램 분석
  * 정적 존속 기간, 내부 링크 
    * [[twofile1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/07twofile1.cpp "Listing 9.7") 
    * [[twofile2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/08twofile2.cpp "Listing 9.8")
  * 정적 기억 존속 시간, 링크 없음 
    - [[static.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/09static.cpp "Listing 9.9")
  * 제한자
    * Cv-제한자
    * mutable
    * const에 대한 보충
  * 함수와 링크
  * 언어 링크
  * 기억 공간 형식과 동적 대입
    * new 연산자를 이용한 초기화
    * new가 실패하는 경우
    * new; 연산자들, 함수들, 대체 함수들
    * 위치 지정 new 연산자 
      * [[newplace.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/10newplace.cpp "Listing 9.10")
    * 프로그램 분석
    * new의 배치 형식
  
* ### **09.3** 이름 공간
  * 구식 C++ 이름 공간
  * 새로운 이름 공간 기능
  * using 선언과 using 지시자
    * using 지시자 대 using 선언
    * 이름 공간에 대한 보충
    * 이름을 명명하지 않은 이름 공간
  * 이름 공간 예제 
    * [[namesp.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/11namesp.h "Listing 9.11") 
    * [[namesp.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/12namesp.cpp "Listing 9.12") 
    * [[usenmsp.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/13usenmsp.cpp "Listing 9.13")
  * 이름 공간의 미래

### [Listing 9 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/.SUMMARY9.md ".SUMMARY9.md")  
### [Listing 9 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/09/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/Compatibility(Listing9).md "Compatibility(Listing9.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/Note(Listing9).md "Note(Listing9).md")
___
## **10** 객체와 클래스
<details>
<summary>학습목표</summary>
<div markdown="1">
● 절차식 프로그래밍과 객체 지향 프로그래밍<br>
● 클래스의 개념<br>
● 클래스의 정의와 구현<br>
● public, private 클래스에 접근하기<br>
● 클래스 데이터 멤버<br>
● 클래스 메서드(클래스 함수 멤버)<br>
● 클래스 객체의 생성과 사용<br>
● 클래스 생성자와 파괴<br>
● const 멤버 함수<br>
● this 포인터<br>
● 객체 배열의 생성<br>
● 클래스의 사용범위<br>
● 추상 데이터형(ADT)<br>
</div>
</details>

* ### **10.1** 절차식 프로그래밍과 객체 지향 프로그래밍
  
* ### **10.2** 추상화와 클래스
  * 데이터형이란 무엇인가?
  * C++의 클래스 
    - [[stock00.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/01stock00.h "Listing 10.1")
    * 접근 제어
    * 멤버 접근 제어 : public 또는 private?
  * 클래스 맴버 함수의 구현 
    - [[stock00.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/02stock00.cpp "Listing 10.2")
    * 멤버 함수 설명
    * 인라인 메서드
    * 어느 객체가 메서드를 사용할까?
  * 클래스 사용하기 
    * [[usestock00.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/03usestock00.cpp "Listing 10.3")
  * 실행상의 변경
  * 지금까지의 설명 요약
  
* ### **10.3** 클래스 생성자와 파괴자
  * 생성자의 선언과 정의
  * 생성자 사용하기
  * 디폴트 생성자
  * 파괴자
  * Stock 클래스 개선하기
    * 헤더 파일 
      * [[stock10.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/04stock10.h "Listing 10.4")
    * 세부 구현 파일 
      * [[stock10.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/05stock10.cpp "Listing 10.5")
    * 클라이언트 파일 
      * [[usestok1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/06usestok1.cpp "Listing 10.6")
    * 프로그램 분석
    * C++11의 리스트 초기화
    * const 멤버 함수
  * 생성자와 파괴자에 대한 요약
  
* ### **10.4** 객체 들여다보기, this 포인터 
    * [[stock20.h ]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/07stock20.h "Listing 10.7") 
    * [[stock20.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/08stock20.cpp "Listing 10.8")

* ### **10.5** 객체 배열 
    * [[usestok2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/09usestok2.cpp "Listing 10.9")

* ### **10.6** 클래스 사용 범위
  * 클래스 사용 범위 상수
  * 범위가 정해진 열거(C++11)
  
* ### **10.7** 추상화 데이터형 
    * [[stack.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/10stack.h "Listing 10.10") 
    * [[stack.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/11stack.cpp "Listing 10.11") 
    * [[stacker.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/12stacker.cpp "Listing 10.12")

### [Listing 10 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/.SUMMARY10.md ".SUMMARY10.md")  
### [Listing 10 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/10/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/Compatibility(Listing10).md "Compatibility(Listing10.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/Note(Listing10).md "Note(Listing10).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/Tip(Listing10).md "Tip(Listing10).md") | [Remamber](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/Remember(Listing10).md "Remember(Listing10).md") 
___
## **11** 클래스의 활용
<details>
<summary>학습목표</summary>
<div markdown="1">
● 연산자 오버로딩<br>
● 프렌드 함수<br>
● rand()함수를 이용한 무작위 값 생성<br>
● 클래스와 관련된 자동 데이터형 변환과 데이터형 캐스트<br>
● 출력을 위한 << 연산자 오버로딩<br>
● 클래스 변환 함수<br>
● 상태 멤버<br>
</div>
</details>

* ### **11.1** 연산자 오버로딩

* ### **11.2** 잠깐의 휴식 : 연산자 오버로딩 예제 
    - [[mytime0.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/01mytime0.h "Listing 11.1") 
    - [[mytime0.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/02mytime0.cpp "Listing 11.2") 
    - [[usetime0.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/03usetime0.cpp "Listing 11.3")
  * 덧셈 연산자의 추가 
    * [[mytime1.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/04mytime1.h "Listing 11.4") 
    * [[mytime1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/05mytime1.cpp "Listing 11.5") 
    * [[usetime1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/06usetime1.cpp "Listing 11.6")
  * 오버로딩 제약
  * 오버로딩 연산자 보충 
    * [[mytime2.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/07mytime2.h "Listing 11.7") 
    * [[mytime2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/08mytime2.cpp "Listing 11.8") 
    * [[usetime2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/09usetime2.cpp "Listing 11.9")
  
* ### **11.3** 프렌드의 도입
  * 프렌드 생성하기
  * 프렌드 : << 연산자의 오버로딩
    * 오버로딩 <<의 첫 번째 버전
    * 오버로딩 <<의 두 번째 버전
      * [[mytime3.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/10mytime3.h "Listing 11.10")
      * [[mytime3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/11mytime3.cpp "Listing 11.11")
      * [[usetime3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/12usetime3.cpp "Listing 11.12")
  
* ### **11.4** 오버로딩 연산자 : 멤버 함수와 멤버가 아닌 함수

* ### **11.5** 오버로딩 보충 : Vector 클래스
    - [[vect.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/13vect.h "Listing 11.13")
    - [[vect.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/14vect.cpp "Listing 11.14")
  * 상태 멤버 사용하기
  * Vector 클래스를 위한 산술 연산자 오버로딩
    * 곱셈
    * 한걸음 더 : 오버로딩된 연산자 또 오버로딩하기
  * 구현에 대한 보충 설명
  * Vector 클래스와 마구잡이 걸음
    * [[randwalk.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/15randwalk.cpp "Listing 11.15")
  * 프로그램 분석
  
* ### **11.6** 자동 변환과 클래스의 데이터형 변환
    - [[stonewt.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/16stonewt.h "Listing 11.16") 
    - [[stonewt.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/17stonewt.cpp "Listing 11.17")
    - [[stone.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/18stone.cpp "Listing 11.18")
  * 프로그램 분석
  * 변환 함수
    - [[stonewt1.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/19stonewt1.h "Listing 11.19")
    - [[stonewt1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/20stonewt1.cpp "Listing 11.20")
    - [[stone1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/21stone1.cpp "Listing 11.21")
    * 데이터형 변환의 자동 적용
  * 변환과 프렌드
    * 덧셈 구현의 선택

### [Listing 11 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/.SUMMARY11.md ".SUMMARY11.md")  
### [Listing 11 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/11/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/Compatibility(Listing11).md "Compatibility(Listing11.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/Note(Listing11).md "Note(Listing11).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/Tip(Listing11).md "Tip(Listing11).md")
___
## **12** 클래스와 동적 메모리 대입
<details>
<summary>학습목표</summary>
<div markdown="1">
● 클래스 멤버를 위한 동적 메모리 대입<br>
● 암시적/명시적 복사 생성자<br>
● 암시적/명시적 오버로딩 대입 연산자<br>
● 생성자에 new 사용하기<br>
● static 클래스 멤버<br>
● 객체에 위치 지정 new 사용하기<br>
● 객체를 지시하는 포인터<br>
● 큐 ADT 구현<br>
</div>
</details>

* ### **12.1** 동적 메모리와 클래스
  * 복습을 위한 예제와 static 클래스 멤버
      * [[strngbad.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/01strngbad.h "Listing 12.1")
      * [[strngbad.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/02strngbad.cpp "Listing 12.2")
      * [[vegnews.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/03vegnews.cpp "Listing 12.3")
    * 프로그램 분석
  * 특별 멤버 함수 
    * 디폴트 생성자
    * 복사 생성자
    * 복사 생성자는 언제 사용되는가?
    * 복사 생성자는 무슨 일을 하는가?
  * Stringbad로 회귀 : 복사 생성자에서 어디가 잘못되었나
    * 명시적 복사 생성자로 이 문제를 해결하자
  * 기타 Stringbad 문제점 : 대입 연산자
    * 대입 연산자는 언제 사용되고 무슨 일을 하는가?
    * 대입에서 어디가 잘못되었나
    * 대입에서 발생하는 문제의 해결책
  
* ### **12.2** 새롭게 개선된 Srting 클래스
  * 개선된 디폴트 생성자
  * 비교 멤버
  * [] 표기를 사용하여 개별 문자에 접근하기
  * static 클래스 오버로딩에 대한 보충
  * 대입 연산자 오버로딩에 대한 보충
      * [[string1.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/04string1.h "Listing 12.4")
      * [[string1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/05string1.cpp "Listing 12.5")
      * [[sayings1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/06sayings1.cpp "Listing 12.6")
  
* ### **12.3** 생성자에 new를 사용할 때 주의할 사항
  * 사용하지 말아야 할 것과 사용해도 좋은 것
  * 클래스 멤버로 클래스를 가지는 경우의 멤버별 복사
  
* ### **12.4** 객체 리턴에 대한 관찰
  * const 객체에 대한 참조 리턴
  * const가 아닌 객체에 대한 참조 리턴
  * 객체 리턴
  * const 객체 리턴
  
* ### **12.5** 객체를 지시하는 포인터
    * - [[sayings2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/07sayings2.cpp "Listing 12.7")
  * new와 delete 복습
  * 포인터와 객체에 대한 요약
  * 위치 지정 new 다시 살펴보기
    * [[placenew1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/08placenew1.cpp "Listing 12.8")
    * [[placenew2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/09placenew2.cpp "Listing 12.9")
  
* ### **12.6** 테크닉의 복습
  * << 연산자의 오버로딩
  * 변환 함수들
  * 생성자가 new를 사용하는 클래스
  
* ### **12.7** 큐 시뮬레이션
  * Queue 클래스
    * Queue 클래스 인터페이스
    * Queue 클래스 세부 구현
    * 클래스 메서드들
    * 그 밖의 클래스 메서드들
  * Customer 클래스
    * [[queue.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/10queue.h "Listing 12.10")
    * [[queue.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/11queue.cpp "Listing 12.11")
  * ATM 시뮬레이션
    * [[bank.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/12bank.cpp "Listing 12.12")

### [Listing 12 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/.SUMMARY12.md ".SUMMARY12.md")  
### [Listing 12 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/12/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/Compatibility(Listing12).md "Compatibility(Listing12.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/Note(Listing12).md "Note(Listing12).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/Tip(Listing12).md "Tip(Listing12).md")
___
## **13** 클래스의 상속
<details>
<summary>학습목표</summary>
<div markdown="1">
● is - a 관계로 상속하기<br>
● 다른 클래스로부터 public으로 파생된 클래스<br>
● protected 접근<br>
● 생성자 멤버 초기자 리스트<br>
● 업캐스팅과 다운캐스팅<br>
● 가상 멤버 함수<br>
● 초기 (정적) 결합과 말기 (동적) 결합<br>
● 추상화 기초 클래스<br>
● 순수 가상 함수<br>
● public 상속은 언제 어떻게<br>
</div>
</details>

* ### **13.1** 간단한 기초 클래스로부터 시작하자
    * * [[tabtenn0.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/01tabtenn0.h "Listing 13.1")
    * * [[tabtenn0.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/02tabtenn0.cpp "Listing 13.2")
    * * [[usett0.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/03usett0.cpp "Listing 13.3")
  * 클래스 파생시키기
  * 생성자 : 접근에 대하여
  * 파생 클래스 사용하기
    * [[tabtenn1.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/04tabtenn1.h "Listing 13.4")
    * [[tabtenn1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/05tabtenn1.cpp "Listing 13.5")
    * [[usett1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/06usett1.cpp "Listing 13.6")
  * 파생 클래스와 기초 클래스의 특별한 관계
  
* ### **13.2** 상속 : is-a 관계

* ### **13.3** public 다형 상속
  * Brass와 BrassPlus 클래스의 개발
    * [[brass.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/07brass.h "Listing 13.7")
    * 클래스의 구현
      * [[brass.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/08brass.cpp "Listing 13.8")
    * Brass와 BrassPlus 클래스의 사용
      * [[usebrass1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/09usebrass1.cpp "Listing 13.9")
    * 가상 메서드의 행동
      * [[usebrass2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/10usebrass2.cpp "Listing 13.10")
    * 가상 파괴자는 왜 필요할까?
  
* ### **13.4** 정적 결합과 동적 결합
  * 포인터와 참조형의 호환
  * 가상 멤버 함수와 동적 결합
    * 왜 두 종류의 결합이 필요한가? 왜 정적 결합이 디폴트인가?
    * 가상 함수는 어떻게 동작하는가?
  * 가상 메서드에 대해 알아야 할 사항
    * 생성자
    * 파괴자
    * 프렌드
    * 가상 함수를 다시 정의하지 않으면
    * 가상 함수를 다시 정의하면 메서드가 은닉된다
  
* ### **13.5** 접근 제어 : protected
  
* ### **13.6** 추상화 기초 클래스
  * ABC 개념의 적용
    * [[acctabc.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/11acctabc.h "Listing 13.11")
    * [[acctabc.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/12acctabc.cpp "Listing 13.12")
    * [[usebrass3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/13usebrass3.cpp "Listing 13.13")
  * ABC 철학
  
* ### **13.7** 상속과 동적 메모리 대입
  * 경우 1 - 파생 클래스가 new를 사용하지 않는다
  * 경우 2 - 파생 클래스가 new를 사용한다
  * 동적 메모리 대입과 프렌드를 사용하는 상속 예제
    * [[dma.h]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/14dma.h "Listing 13.14")
    * [[dma.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/15dma.cpp "Listing 13.15")
    * [[usedma.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/16usedma.cpp "Listing 13.16")

* ### **13.8** 클래스 설계 복습
  * 컴파일러가 자동으로 생성하는 멤버 함수들
    * 디폴트 생성자
    * 복사 생성자
    * 대입 연산자
  * 클래스 메서드에 관련된 그 밖의 고려 사항
    * 생성자 관련 사항
    * 파괴자 관련 사항
    * 변환 관련 사항
    * 값으로 전달과 참조로 리턴
    * 객체 리턴과 참조 리턴
    * const의 사용
  * public 상속에 관련된 그 밖의 고려 사항
    * is-a 관계
    * 상속되지 않는 것
    * 대입 연산자 관련 사항
    * private 멤버와 protected 멤버
    * 가상 메서드
    * 파괴자 관련 사항
    * 프렌드 관련 사항
    * 기초 클래스 메서드의 활용
  * 클래스 함수 요약

### [Listing 13 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/.SUMMARY13.md ".SUMMARY13.md")  
### [Listing 13 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/13/PROGRAMMING%20EXERCISE)
### [Compatibility](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/Compatibility(Listing13).md "Compatibility(Listing13.md") | [Note](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/Note(Listing13).md "Note(Listing13).md") | [Tip](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/Tip(Listing13).md "Tip(Listing13).md")
___
## **14** C++ 코드의 재활용
<details>
<summary>학습목표</summary>
<div markdown="1">
● has - a 관계<br>
● 객체 멤버를 가지는 클래스(컨테인먼트)<br>
● valarray 템플릿 클래스<br>
● private 상속과 protected 상속<br>
● 다중 상속<br>
● 가상 기초 템플릿<br>
● 클래스 템플릿 만들기<br>
● 클래스 템플릿 사용하기<br>
● 템플릿 특수롸<br>
</div>
</details>

* ### **14.1** 객체 멤버를 가지는 클래스
  * valarray 클래스 : 훑어보기
  * Student 클래스 설계
  * Student 클래스 예제
    * [[]]()
    * 내포된 객체의 초기화
    * 내포된 객체의 인터페이스 사용
      * [[]]()
    * student 클래스 사용
      * [[]]()
  
* ### **14.2** private 상속
  * Student 클래스 예제(새 버전)
    * 기초 클래스 성분의 초기화
      * [[]]()
    * 기초 클래스 메서드에 접근하기
    * 기초 클래스 객체에 접근하기
    * 기초 클래스 프렌드에 접근하기
      * [[]])
    * 개정된 Student 클래스 사용하기
      * [[]]()
  * 컨테인먼트와 private 상속
  * protected 상속
  * using을 사용하여 접근 다시 정의하기
  
* ### **14.3** 다중 상속
    * - [[]]()
    * - [[]]()
    * - [[]]()
  * 사원 수는 몇 명인가?
    * 가상 기초 클래스
    * 새로운 생성자 기초
  * 어느 메서드를 사용하는가?
    * [[]]()
    * [[]]()
    * [[]]()
    * 가상 기초 클래스와 가상이 아닌 기초 클래스의 혼합
    * 가상 기초 클래스와 비교 우위
  * 다중 상속 요약
  
* ### **14.4** 클래스 템플릿
  * 클래스 템플릿 정의
    * [[]]()
  * 템플릿 클래스 사용
    * [[]]()
  * 템플릿 클래스 자세히 들여다보기
    * 포인터들의 스택을 잘못 사용하는 경우
    * 포인터들의 스택을 바르게 사용하는 경우
      * [[]]()
      * [[]]()
    * 프로그램 분석
  * 배열 템플릿 예제와 데이터형이 아닌 매개변수
    * [[]]()
  * 템플릿의 융통성
    * 템플릿의 재귀적 사용
      * [[]]()
    * 하나 이상의 데이터형 매개변수 사용
      * [[]]
    * 클래스 템플릿 디폴트 데이터형 매개변수
  * 템플릿 특수화
    * 암시적 구체화
    * 명시적 구체화
    * 명시적 특수화
    * 부분적인 특수화
  * 멤버 템플릿
    * [[]]()
  * 매개변수 템플릿
    * [[]]()
  * 템플릿 클래스와 프렌드 함수
    * 템플릿 클래스에 대합 템플릿이 아닌 프렌드 함수
      * [[]]()
    * 템플릿 클래스에 대한 바운드 템플릿 프렌드 함수
      * [[]]()
    * 템플릿 클래스에 대한 언바운드 템플릿 프렌드 함수
      * [[]]()
  * 템플릿 별칭(C++11)

### [Listing 14 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/14/.SUMMARY14.md ".SUMMARY14.md")  
### [Listing 14 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/14/PROGRAMMING%20EXERCISE)
___
## **15** 프렌드, 예외, 기타사항
<details>
<summary>학습목표</summary>
<div markdown="1">
● 프렌드 클래스<br>
● 프렌드 클래스의 메서드<br>
● 내포된 클래스<br>
● 예외 처리, try 블록, catch 블록<br>
● 예외 클래스<br>
● RTTI(실행 시간 데이터형 정보)<br>
● dynamic_cast와 typeid<br>
● static_cast, const_cast, reinterpret_cast<br>
</div>
</details>

* ### **15.1** 프렌드
  * 프렌드 클래스
    * [[]]()
    * [[]]()
    * [[]]()
  * 프렌드 멤버 함수
    * [[]]()
  * 그 밖에 프렌드 관계
  * 공유 프렌드
  
* ### **15.2** 내포 클래스 
  * 내포 클래스와 접근
    * 사용 범위
    * 접근 제어
  * 템플릿에서의 내포
    * [[]]()
    * [[]]()
  
* ### **15.3** 예외
  * abort() 호출
    * [[]]()
  * 에러 코드 리턴
    * [[]]()
    * 프로그램 분석
  * 예외 메커니즘
    * [[]]()
    * 프로그램 분석
  * 예외로 객체 사용하기
    * [[]]()
    * [[]]()
  * C++11에서의 예외 규격
  * 스택 풀기
    * [[]]()
    * 프로그램 분석
  * 예외의 그 밖의 기능
  * exception 클래스
    * stdexcept 예외 클래스
    * bad_alloc 예외와 new
      * [[]]()
    * NULL 포인터와 new
  * 예외, 클래스, 상속
    * [[]]()
    * [[]]()
    * [[]]()
  * 잘못된 예외
  * 예외 주의사할
  
* ### **15.4** RTTI
  * RTTI의 목적
  * RTTI의 동작 방식
    * [[]]()
    * typeid 연산자와 typr_info 클래스
      * [[]]()
  * RTTI의 오용
  
* ### **15.5** 데이터형 변환 연산자
  * - [[]]()

### [Listing 15 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/15/.SUMMARY15.md ".SUMMARY15.md")  
### [Listing 15 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/15/PROGRAMMING%20EXERCISE)
___
## **16** string클래스와 표준 템플릿 라이브러리
<details>
<summary>학습목표</summary>
<div markdown="1">
● C++ 표준 string 클래스<br>
● suto_ptr 템플릿, unique_ptr 템플릿, shared_ptr 템플릿<br>
● 표준 템플릿 라이브러리(STL)<br>
● 컨테이너 클래스<br>
● 이터레이터(iterator)<br>
● 함수 객체(functor)<br>
● STL 알고리즘<br>
● initializer_list 템플릿<br>
</div>
</details>

* ### **16.1** string 클래스
  * 문자열 생성
    * [[]]()
    * 프로그램 분석
    * C++11 생성자들
  * string 클래스 입력
    * [[]]()
  * 문자열 작업
    * [[]]()
    * 프로그램 분석
  * string 클래스가 제공하는 그 밖의 기능
    * [[]]()
  * string 다양성
  
* ### **16.2** 스마트 포인터 템플릿 클래스
  * 스마트 포인터의 사용
    * [[]]()
  * 스마트 포인터 고려 사항
    * [[]]()
  * auto_ptr보다 unique_ptr이 더 좋은 이유
  * 스마트 포인터 선택 
  
* ### **16.3** 표준 템플릿 라이브러리
  * vector 템플릿 클래스
    * [[]]()
  * vector에서 할 수 있는 것
    * [[]]()
  * vector에서 할 수 있는 그 밖의 것
    * [[]]()
  * Range에 기초한 루프(C++11)

* ### **16.4** 일반화 프로그래밍
  * 이터레이터가 필요한 이유
  * 이터레이터의 종류
    * 입력 이터레이터
    * 출력 이터레이터
    * 전방 이터레이터
    * 전후방 이터레이터
    * 임의 접근 이터레이터
  * 이터레이터 계층
  * 개념, 개량, 모델
    * 이터레이터 자격의 포인터
    * copy(), ostream_iterator, istream_iterator
    * 기타 유용한 이터레이터들
      * [[]]()
      * [[]]()
  * 컨테이너의 종류
    * 컨테이너 개념
    * C++11의 컨테이너 요구 조건에 대한 추가 사항
    * 시퀀스
    * vector
    * deque
    * list
      * [[]]()
    * 프로그램 분석
    * list 도구상자
    * forward_list(C++11)
    * queue
    * priority_queue
    * stack
    * array 템플릿(C++11)
  * 결합 컨테이너
    * set 예제
      * [[]]()
    * multimap 예제
      * [[]]()
  * 순서가 부여되지 않은 결합 컨테이너(C++11)

* ### **16.5** 함수 객체(Functor)
  * 펑크터 개념
    * [[]]()
  * 미리 정의된 펑크터
  * 어댑터블 펑크터와 함수 어댑터
    * [[]]()

* ### **16.6** 알고리즘
  * 알고리즘 그룹
  * 알고리즘의 일반적인 특성
  * STL과 string 클래스
    * [[]]()
  * 함수와 컨테이너 메서드
    * [[]]()
  * STL 사용하기
    * [[]]()
  
* ### **16.7** 기타 라이브러리
  * vector와 valarray, 그리고 array
    * [[]]()
    * [[]]()
  * initializer_list 템플릿(C++11)
  * initializer_list 사용
    * [[]]()
  * 프로그램 분석

### [Listing 16 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/16/.SUMMARY16.md ".SUMMARY16.md")  
### [Listing 16 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/16/PROGRAMMING%20EXERCISE)
___
## **17** 입력, 출력, 파일
<details>
<summary>학습목표</summary>
<div markdown="1">
● C++에서의 입출력<br>
● iostream 계열의 클래스<br>
● 리디렉션<br>
● ostream 클래스 메서드<br>
● 출력 형식 지정<br>
● istream 클래스 메서드<br>
● 스트림의 상태<br>
● 파일 입출력<br>
● 파일로부터 입력을 받는 ifstream 클래스<br>
● 파일에 출력하는 ofstream 클래스<br>
● 파일 입출력을 위한 fstream클래스<br>
● 명령행 처리<br>
● 2진 파일<br>
● 파일 임의 접근<br>
● 인코어 형식 지정<br>
</div>
</details>

* ### **17.1** C++ 입출력의 개요
  * 스트림과 버퍼
  * 스트림, 버퍼 iostream 파일
  * 리디렉션

* ### **17.2** cout을 이용한 출력
  * 오버로딩된 << 연산자
    * 출력과 포인터
    * 연이어 출력하기
  * 그 밖의 ostream 메서드들
    * [[]]()
  * 출력 버퍼 비우기
  * cout을 이용한 출력 형식 지정
    * [[]]()
    * 화면 출력을 위한 진법 변경
      * [[]]()
    * 필드 폭 조정
      * [[]]()
    * 채움 문자
      * [[]]()
    * 부동 소수점수의 출력 정밀도 설정
      * [[]]()
    * 뒤에 붙는 0과 소수점 출력
      * [[]]()
    * setf()에 대한 보충
      * [[]]()
      * [[]]()
    * 표준 조정자
    * iomanip 헤더 파일
      * [[]]()

* ### **17.3** cin을 이용한 입력
  * cin >>은 입력을 어떻게 보는가?
    * [[]]()
  * 스트림 상태
    * 상태 설정
    * 입출력과 예외
      * [[]]()
    * 스트림 상태 효과
  * 그 밖에 istream 클래스 메서드들
    * 단일 문자 입력
    * get(char &)멤버 함수
    * getchar () 멤버 함수
    * 어떤 단일 분자 입력을 사용할 것인가?
    * 문자열 입력 : getline(), get(), ignore()
      * [[]]()
    * 기대하지 않는 문자열의 입력
  * 그 밖의 istream 메서드
      * [[]]()
    * 프로그램 분석
      * [[]]()

* ### **17.4** 파일 입력과 출력
  * 간단한 파일 입출력
    * [[]]()
  * 스트림 검사와 is_open()
  * 여러 개의 파일 열기
  * 명령행 처리
    * [[]]()
  * 파일 모드
    * 파일에 덫붙이기
      * [[]]()
    * 2진 파일
      * [[]]()
  * 임의 접근
    * [[]]()

* ### **17.5** 인코어 형식의 지정
    * - [[]]()
    * - [[]]()

### [Listing 17 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/17/.SUMMARY17.md ".SUMMARY17.md")  
### [Listing 17 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/17/PROGRAMMING%20EXERCISE)
___
## **18** 새로운 C++ 표준과의 만남
<details>
<summary>학습목표</summary>
<div markdown="1">
● Move semantics rvalue 참조<br>
● 람다 표현식<br>
● 래퍼 함수 템플릿<br>
● 다양한 템플릿<br>
</div>
</details>

* ### **18.1** C++11 특징 재고
  * 새로운 타입
  * 균일화된 초기화
    * 형 변환
    * std::initializer_list
  * 선언
    * auto
    * decltype
    * 변환 타입 추적
    * 템플릿 별칭 : using =
  * nullptr
  * 스마트 포인터
  * 예외 지정(Exception Specification) 변화
  * 범위가 지정된 열거체
  * 클래스 변화
    * explicit 변환 연산자
    * 클래스 내 멤버 초기화
  * 템플릿과 STL 변화
    * 범위 기반 반복문
    * 새로운 STL 컨테이너
    * 새로운 STL 함수
    * valarray 업그레이드
    * export 사라지다
    * 꺽쇠 괄호
  * rvalue 참조
    * [[]]()

* ### **18.2** Move Semantics과 Rvalue 참조
  * Movw Semantics의 필요성
  * 이동 예제
    * [[]]()
  * 이동 생성자 분석
  * 대입
  * 강제 이동
    * [[]]()
  
* ### **18.3** 새로운 클래스 형태
  * 특별한 멤버 함수들
  * 기본과 삭제 함수
  * 위임 생성자
  * 상속 생성자
  * 가상 함수 관리 : override와 final

* ### **18.4** 람다 함수들
  * 함수 포인터, 펑크터 그리고 함다 사용법
    * [[]]()
  * 왜 람다인가
    * [[]]()

* ### **18.5** 래퍼(Wrapper)
  * 함수 래퍼와 템플릿 비효율성
    * [[]]()
    * [[]]()
  * 문제 해결
    * [[]]()
  * 더 많은 옵션

* ### **18.6** 가변인자 템플릿
  * 템플릿과 함수 매개변수 팩
  * 언패킹 팩
  * 가변인자 템플릿 함수에서 재귀 사용
    * [[]]()
    * 프로그램 노트
    * 개선 사항
      * [[]]()

* ### **18.7** C++11 더 많은 기능들
  * 다중 프로그래밍
  * 라이브러리 추가
  * 저수준 프로그래밍
  * 기타

* ### **18.8** 언어 변화
  * Boost 프로젝트
  * TR1
  * Boost 사용
    * [[]]()

* ### **18.9** 이제 어떻게 할 것인가

### [Listing 18 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/18/.SUMMARY18.md ".SUMMARY18.md")  
### [Listing 18 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/08/PROGRAMMING%20EXERCISE)
