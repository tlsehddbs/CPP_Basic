
# **CPP_Basic**

**C++ 기초 플러스 6판 소스코드, 프로그래밍 연습문제 풀이** <br><br>

## **01** C++ 첫걸음 

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
  
### [Listing 1 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/01/.SUMMARY1.md)
___
## **02** C++ 시작하기

* ### **02.1** C++의 시작 
  *  - [[myfirst.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/01myfirst.cpp)
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
  *  - [[carrots.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/02carrots.cpp)
  * 선언 구문과 변수
  * 대입 구문
  * cout의 새로운 사용법

* ### **02.3** C++의 기타 구문 
  *  - [[getinfo.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/03getinfo.cpp)
  * cin 사용법
  * cout에 의한 출력의 결합
  * cin과 cout : 클래스 맛보기

* ### **02.4** 함수
  * 리턴값이 있는 함수 
      - [[sqrt.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/04sqrt.cpp)
  * 변이 함수들
  * 사용자 정의 함수 
      - [[ourfunc.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/05ourfunc.cpp)
    * 함수 모양
    * 함수 머리
  * 리턴 값이 있는 사용자 정의 함수 
    - [[convert.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/06convert.cpp)
  * 복수 함수 프로그램에 using 지시자 넣기
  
### [Listing 2 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/02/.SUMMARY2.md)   
### [Listing 2 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/02/PROGRAMMING%20EXERCISE)
___
## **03** 데이터 처리

* ### **03.1** 간단한 변수
  * 변수 이름
  * 정수형
  * short, int, long, long long 정수형 
      - [[limits.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/01limits.cpp)
    * sizeof 연산자와 climits 헤더 파일
    * 초기화
    * C++11에서의 초기화
  * unsigned형 
    - [[exceed.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/02exceed.cpp)
  * 어느 정수형을 사용할 것인가?
  * 정수형 상수 
    - [[hexoct1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/03hexoct1.cpp) 
    - [[hexoct2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/04hexoct2.cpp)
  * C++가 상수의 데이터형을 결정하는 방법
  * char형 : 문자와 작은 정수 
      - [[chartype.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/05chartype.cpp)   
      - [[morechar.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/06morechar.cpp)
    * 프로그램 분석
    * 멤버 함수 : cout.put()
    * char형 상수 
      - [[bondini.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/07bondini.cpp)
    * 유니버설 네임 코드
    * signed char형과 unsigned char형
    * 확장 char형 : wchar_t
    * 새로운 C++11형 : char16_t와 char32_t
  * bool형

* ### **03.2** const 제한자

* ### **03.3** 부동 소수점수
  * 부동 소수점수의 표기
  * 부동 소수점형 
    * [[floatnum.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/08floatnum.cpp)
    * 프로그램 분석
  * 부동 소수점형 상수
  * 부동 소수점수의 장단점 
    - [[fltadd.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/09fltadd.cpp)
  
* ### **03.4** C++ 산술 연산자 
  *  - [[arith.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/10arith.cpp)
  * 연산 순서 : 우선순위와 결합 방향
  * 나눗셈에 대한 보충 
    - [[divide.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/11divide.cpp)
  * 나머지셈 연산자 
    - [[modulus.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/12modulus.cpp)
  * 데이터형 변환
    * 대입 구문에서의 데이터형 변환 
      - [[init.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/13init.cpp)
    * {}를 사용할 경우의 초기화 변환(C++11)
    * 수식에서의 데이터형 변환
    * 매개변수를 전달할 때의 형 변환
    * 데이터형 변환자 
      - [[typecast.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/14typecast.cpp)
  * C++11에서의 auto 선언

### [Listing 3 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/03/.SUMMARY3.md)  
### [Listing 3 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/02/PROGRAMMING%20EXERCISE)
___
## **04** 복합 데이터형

* ### **04.1** 배열 
  *  - [[arrayone.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/01arrayone.cpp)
  * 프로그램 분석
  * 배열 초기화 규칙
  * C++11 배열 초기화

* ### **04.2** 문자열
  * 문자열 상수의 결합
  * 배열에 문자열 사용 
    * [[strings.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/02strings.cpp)
    * 프로그램 분석
  * 문자열 입력 
    - [[instr1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/03instr1.cpp)
  * 한 번에 한 행의 문자열 입력 읽기
    * getline()을 이용한 행 단위 입력 
      - [[instr2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/04instr2.cpp)
    * get()을 이용한 행 단위 입력 
      - [[instr3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/05instr3.cpp)
    * 빈 행과 기타 문제점
  * 문자열과 수치의 혼합 입력 
    - [[numstr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/06numstr.cpp)
  
* ### **04.3** string 클래스 
  *  - [[strtype1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/07strtype1.cpp)
  * C++11 문자열 초기화
  * 대입, 결합, 추가 
    - [[strtype2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/08strtype2.cpp)
  * string 클래스의 조작 
    - [[strtype3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/09strtype3.cpp)
  * string 클래스의 입출력 
    - [[strtype4.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/10strtype4.cpp)
  * 다른 형태의 문자열 상수
  
* ### **04.4** 구조체
  * 프로그램에 구조체 사용하기 
    * [[structur.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/11structur.cpp)
    * 프로그램 분석
  * C++11의 구조체 초기화
  * 구조체가 string 클래스 멤버를 사용할 수 있을까?
  * 구조체의 기타 특성 
    - [[assgn_st.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/12assgn_st.cpp)
  * 구조체의 배열 
    - [[arrstruc.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/13arrstruc.cpp)
  * 구조체 안의 비트 필드
  
* ### **04.5** 공용체
  
* ### **04.6** 열거체
  * 열거자 값의 설정
  * 열거체의 값 범위
  
* ### **04.7** 포인터와 메모리 해제 
  *  * [[address.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/14address.cpp) 
  *  * [[pointer.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/15pointer.cpp)
  * 포인터의 선언과 초기화 
    - [[init_ptr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/16init_ptr.cpp)
  * 포인터의 위험
  * 포인터와 수
  * new를 사용한 메모리 대입 
    * [[use_new.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/17use_new.cpp)
    * 프로그램 분석
  * delete를 사용한 메모리 해제
  * new를 사용한 동적 배열의 생성
    * new를 사용한 동적 배열의 생성
    * 동적 배열의 사용 
      - [[arraynew.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/18arraynew.cpp)
  
* ### **04.8** 포인터, 배열, 포인터 연산 
  *  - [[addpntrs.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/19addpntrs.cpp)
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
    * [[ptrstr.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/20ptrstr.cpp)
    * 프로그램 분석
  * new를 사용한 동적 구조체의 생성 
    - [[newstrct.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/21newstrct.cpp)
    * new와 delete를 사용하는 예제 
      - [[delete.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/22delete.cpp)
    * 프로그램 분석
  * 자동 공간, 정적 공간, 동적 공간
    * 저장 공간
    * 정적 공간
    * 동적 공간
  
* ### **04.9** 변수형의 조합 
    - [[mixtypes.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/23mixtypes.cpp)
  
* ### **04.10** 배열의 대안
  * Vector 템플릿 클래스
  * array 템플릿 클래스(C++11)
  * 배열, Vector 객체, Array 객체 비교 
    * [[choices.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/24choices.cpp)
    * 프로그램 분석

### [Listing 4 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/04/.SUMMARY4.md)  
### [Listing 4 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/04/PROGRAMMING%20EXERCISE)
___
## **05** 루프와 관계 표현식

* ### **05.1** for 루프 
  *  - [[forloop.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/01forloop.cpp)
  * for 루프의 각 부분 
    - [[num_test.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/02num_test.cpp)
    * 표현식과 구문 
      - [[express.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/03express.cpp)
    * 표현식이 아닌 것과 구문
    * 융통성 있는 규칙
  * for 루프에 대한 보충 
    * [[formore.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/04formore.cpp)
    * 프로그램 분석
  * 갱신 크기 변경 
    - [[bigstep.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/05bigstep.cpp)
  * for 루프를 사용한 문자열 처리 
    - [[forstr1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/06forstr1.cpp)
  * 증가 연산자(++)와 감소 연산자(--) 
    - [[plus_one.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/07plus_one.cpp)
  * 부수 효과와 시퀀스 포인트 
  * 접두어 방식과 접미어 방식
  * 증가/감소 연산자와 포인터
  * 조합 대입 연산자
  * 복합 구문 또는 블록 
    - [[block.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/08block.cpp)
  * 콤마 연산자 
    - [[forstr2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/09forstr2.cpp)
    * 프로그램 분석
    * 컴마 연산자에 대한 보충
  * 관계 표현식
  * 흔히 범하는 실수 
    - [[equal.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/10equal.cpp)
  * C 스타일 문자열 비교 
    * [[compstr1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/11compstr1.cpp)
    * 프로그램 분석
  * string 클래스 문자열 비교 
    * [[compstr2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/12compstr2.cpp)
    * 프로그램 분석
  
* ### **05.2** while 루프 
  *  * [[while.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/13while.cpp)
  * 프로그램 분석
  * for와 while
  * 잠시만-시간 지연 루프 
    - [[waiting.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/14waiting.cpp)
  
* ### **05.3** do while 루프 
    - [[dowhile.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/15dowhile.cpp)
  
* ### **05.4** Range 기반의 for 루프(C++11)
  
* ### **05.5** 루프와 텍스트 입력
  * cin을 이용한 입력 
    * [[textin1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/16textin1.cpp)
    * 프로그램 분석
  * cin.get(char)를 이용한 입력 
    - [[textin2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/17textin2.cpp)
  * 어느cin.get()을 사용할까?
  * 파일 끝(End-Of-File)조건 
    - [[textin3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/18textin3.cpp)
    * 입력을 끝내는 EOF
    * 문자 입력에 자주 쓰는 구문
  * cin.get()의 또 다른 버전 
    - [[textin4.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/19textin4.cpp)
  
* ### **05.5** 중첩 루프와 2차원 배열
  * 2차원 배열의 초기화
  * 2차원 배열 사용하기 
    - [[nested.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/20nested.cpp)

### [Listing 5 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/05/.SUMMARY5.md)  
### [Listing 5 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/05/PROGRAMMING%20EXERCISE)
___
 ## **06** 분기 구문과 논리 연산자

 * ### **06.1** if 구문 
    - [[if.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/01if.cpp)
  * if else 구문 
    - [[ifelse.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/02ifelse.cpp)
  * if else 구문의 작성 스타일
  * if else if else 구문 
    - [[ifelseif.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/03ifelseif.cpp)
  
* ### **06.2** 논리 표현식
  * 논리합 OR 연산자(||) 
    - [[or.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/04or.cpp)
  * 논리곱 AND 연산자(&&) 
    * [[and.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/05and.cpp)
    * 프로그램 분석
  * &&를 이용한 범위 설정 
    * [[more_and.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/06more_and.cpp)
    * 프로그램 분석
  * 논리부정 NOT 연산자(!) 
    * [[not.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/07not.cpp)
    * 프로그램 분석
  * 논리 연산자의 고려 사항
  * 논리 연산자의 대체 표기
  
* ### **06.3** 문자 함수를 위한 cctype 라이브러리 
    - [[cctypes.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/08cctypes.cpp)
  
* ### **06.4** ? : 연산자 
    - [[condit.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/09condit.cpp)
  
* ### **06.5** switch 구문 
    - [[switch.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/10switch.cpp)
  * 레이블로 열거자 사용하기 
    - [[enum.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/11enum.cpp)
  * switch와 if else
  
* ### **06.6** break와 continue 구문 
  * [[jump.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/12jump.cpp)
  * 프로그램 분석
  
* ### **06.7** 수를 읽어들이는 루프 
  * [[cinfish.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/13cinfish.cpp) 
  * [[cingolf.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/14cingolf.cpp)
  * 프로그램 분석
  
* ### **06.8** 간단한 파일 입력/출력
  * 텍스트 I/O와 텍스트 파일
  * 텍스트 파일에 쓰기 
    * [[outfile.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/15outfile.cpp)
    * 프로그램 분석
  * 텍스트 파일 읽기 
    * [[sumafile.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/16sumafile.cpp)
    * 프로그램 분석

### [Listing 6 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/.SUMMARY6.md)  
### [Listing 6 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/06/PROGRAMMING%20EXERCISE)
___
## **07** 함수-C++의 프로그래밍 모듈

* ### **07.1** 함수의 기초(복습) 
  -  - [[calling.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/01calling.cpp)
  * 함수 정의
  * 함수 원형과 함수 호출 
    - [[protos.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/02protos.cpp)
    * 함수 원형은 왜 필요한가?
    * 함수 원형의 구문 규칙
    * 함수 원형이 사용자를 위해 하는 일
  
* ### **07.2** 함수 매개변수와 값으로 전달하기
  * 여러 개의 매개변수 
    * [[twoarg.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/03twoarg.cpp)
    * 프로그램 분석
  * 두 개의 매개변수를 사용하는 또 다른 함수 
    * [[lotto.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/04lotto.cpp)
    * 프로그램 분석
  
* ### **07.3** 함수와 배열 
  -  - [[arrfun1.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/05arrfun1.cpp)
    * 포인터와 배열을 처리하는 함수
  * 배열을 매개변수로 사용하는 것의 의미 
    * [[arrfun2.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/06arrfun2.cpp)
    * 프로그램 분석
  * 배열을 처리하는 함수에 대한 보충
    * 배열 채우기
    * 배열의 내용 출력과 const로 보호하기
    * 배열의 수정
    * 코드의 결합 
      * [[arrfun3.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/07arrfun3.cpp)
    * 프로그램 분석
    * 일반적인 배열 함수 용어
  * 배열의 범위를 사용하는 함수 
    * [[arrfun4.cpp]](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/08arrfun4.cpp)
    * 프로그램 분석
  * 포인터와 const
  
* ### **07.4** 함수와 2차원 배열

* ### **07.5** 힘수와 C 스타일의 문자열
  * C 스타일 문자열을 매개변수로 사용하는 함수 
    * [[]]()
    * 프로그램 분석
  * C 스타일 문자열을 리턴하는 함수 
    - [[]]()
  *  프로그램 분석
  
* ### **07.6** 함수와 구조체
  * 구조체의 전달과 리턴 
    * [[]]()
  * 함수와 구조체의 두 번째 예제 
    * [[]]()
    * 프로그램 분석
  * 구조체 주소의 전달 
    * [[]]()
  
* ### **07.7** 함수와 string 클래스 객체 
    * [[]]()

* ### **07.8** 함수와 array 객체 
    * [[]]()
  * 프로그램 분석
  
* ### **07.9** 재귀 호출
  * 단일 재귀 호출 
    * [[]]()
  * 다중 재귀 호출 
    * [[]]()
  
* ### **07.10** 함수를 지시하는 포인터
  * 함수 포인터의 기초
    * 함수 주소 얻기
    * 포인터를 사용하여 함수 불러내기
  * 함수 포인터 예제 
    * [[]]()
  * 함수 포인터의 변형 
    * [[]]()
  * typedef를 이용한 단순화

### [Listing 7 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/07/.SUMMARY7.md)  
### [Listing 7 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/07/PROGRAMMING%20EXERCISE)
___
## **08** 함수의 활용

* ### **08.1** C++ 인라인(inline) 함수 
    * [[]]()
  
* ### **08.2** 참조 변수
  * 참조 변수의 생성 
    - [[]]() 
    - [[]]()
  * 함수 매개변수로서의 참조 
    * [[]]()
    * 프로그램 분석
  * 참조의 특성 
    - [[]]()
    * 임시 변수, 참조 매개변수, const
  * 구조체에 대한 참조 
    * [[]]()
    * 프로그램 분석
    * 왜 참조를 리턴하는가?
    * 참조를 리턴할 때 주의할 점
    * 참조를 리턴할 때 왜 const를 사용하는가?
  * 클래스 객체와 참조 
    * [[]]()
    * 프로그램 분석
  * 또 하나의 객체 레슨 : 객체, 상속, 참조 
    * [[]]()
    * 프로그램 분석
  * 참조 매개변수는 언제 사용하는가?
  
* ### **08.3** 디폴트 매개변수 
  * [[]]()
  * 프로그램 분석 
  
* ### **08.4** 함수 오버로딩
  * 오버로딩 예제 
    * [[]]()
  * 함수 오버로딩은 언제 사용하는가?
  
* ### **08.5** 함수 템플릿 
  -  * [[]]()
  * 템플릿의 오버로딩 
    * [[]]()
  * 템플릿 제한
  * 명시적 특수화 
    * 3세대 특수화(ISO/ANSI C++ 표준)
    * 명시적 특수화 예제 
      * [[]]()
    * 오래된 특수화 형식
    * 구체화와 특수화
  * 컴파일러는 어느 함수를 선택할까?
    * 정확한 대응과 최선의 대응
    * 부분순서화 규칙을 설명하는 예제 
      * [[]]()
    * 사용자의 선택 
      * [[]]()
    * 매개변수가 여러 개인 함수
  * 템플릿 함수의 발전
    * 그 타입이 무엇인가?
    * 대체할 수 있는 함수구문(C++11의 Trailing Return Type)

### [Listing 8 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/.SUMMARY8.md)  
### [Listing 8 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/08/PROGRAMMING%20EXERCISE)
___
## **09** 메모리 모델과 이름 공간

* ### **09.1** 분할 컴파일 
    * [[]]() 
    * [[]]() 
    * [[]]()
  
* ### **09.2** 기억 존속 시간, 사용 범위, 링크
  * 사용 범위와 링크
  * 자동 번수 
    - [[]]()
    * 자동 변수의 초기화
    * 자동 변수와 스택
    * 레지스터 변수
  * 정적 변수
    * 정적 변수 초기화
  * 정적 존속 시간, 외부 링크
    * 단일 정의 원칙 
      * [[]]() 
      * [[]]()
    * 프로그램 분석
  * 정적 존속 기간, 내부 링크 
    * [[]]() 
    * [[]]()
  * 정적 기억 존속 시간, 링크 없음 
    - [[]]()
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
      * [[]]()
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
    * [[]]() 
    * [[]]() 
    * [[]]()
  * 이름 공간의 미래

### [Listing 9 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/.SUMMARY9.md)  
### [Listing 9 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/09/PROGRAMMING%20EXERCISE)
___
## **10** 객체와 클래스

* ### **10.1** 절차식 프로그래밍과 객체 지향 프로그래밍
  
* ### **10.2** 추상화와 클래스
  * 데이터형이란 무엇인가?
  * C++의 클래스 
    - [[]]()
    * 접근 제어
    * 멤버 접근 제어 : public 또는 private?
  * 클래스 맴버 함수의 구현 
    - [[]]()
    * 멤버 함수 설명
    * 인라인 메서드
    * 어느 객체가 메서드를 사용할까?
  * 클래스 사용하기 
    * [[]]()
  * 실행상의 변경
  * 지금까지의 설명 요약
  
* ### **10.3** 클래스 생성자와 파괴자
  * 생성자의 선언과 정의
  * 생성자 사용하기
  * 디폴트 생성자
  * 파괴자
  * Stock 클래스 개선하기
    * 헤더 파일 
      * [[]]()
    * 세부 구현 파일 
      * [[]]()
    * 클라이언트 파일 
      * [[]]()
    * 프로그램 분석
    * C++11의 리스트 초기화
    * const 멤버 함수
  * 생성자와 파괴자에 대한 요약
  
* ### **10.4** 객체 들여다보기, this 포인터 
    * [[]]() 
    * [[]]()

* ### **10.5** 객체 배열 
    * [[]]()

* ### **10.6** 클래스 사용 범위
  * 클래스 사용 범위 상수
  * 범위가 정해진 열거(C++11)
  
* ### **10.7** 추상화 데이터형 
    * [[]]() 
    * [[]]() 
    * [[]]()

### [Listing 10 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/.SUMMARY10.md)  
### [Listing 10 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/10/PROGRAMMING%20EXERCISE)
___
## **11** 클래스의 활용

* ### **11.1** 연산자 오버로딩

* ### **11.2** 잠깐의 휴식 : 연산자 오버로딩 예제 
    - [[]]() 
    - [[]]() 
    - [[]]()
  * 덧셈 연산자의 추가 
    * [[]]() 
    * [[]]() 
    * [[]]()
  * 오버로딩 제약
  * 오버로딩 연산자 보충 
    * [[]]() 
    * [[]]() 
    * [[]]()
  
* ### **11.3** 프렌드의 도입
  * 프렌드 생성하기
  * 프렌드 : << 연산자의 오버로딩
    * 오버로딩 <<의 첫 번째 버전
    * 오버로딩 <<의 두 번째 버전
      * [[]]()
      * [[]]()
      * [[]]()
  
* ### **11.4** 오버로딩 연산자 : 멤버 함수와 멤버가 아닌 함수

* ### **11.5** 오버로딩 보충 : Vector 클래스
    - [[]]()
    - [[]]()
  * 상태 멤버 사용하기
  * Vector 클래스를 위한 산술 연산자 오버로딩
    * 곱셈
    * 한걸음 더 : 오버로딩된 연산자 또 오버로딩하기
  * 구현에 대한 보충 설명
  * Vector 클래스와 마구잡이 걸음
    * [[]]()
  * 프로그램 분석
  
* ### **11.6** 자동 변환과 클래스의 데이터형 변환
    - [[]]() 
    - [[]]()
    - [[]]()
  * 프로그램 분석
  * 변환 함수
    - [[]]()
    - [[]]()
    - [[]]()
    * 데이터형 변환의 자동 적용
  * 변환과 프렌드
    * 덧셈 구현의 선택

### [Listing 11 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/11/.SUMMARY11.md)  
### [Listing 11 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/11/PROGRAMMING%20EXERCISE)
___
## **12** 클래스와 동적 메모리 대입

* ### **12.1** 동적 메모리와 클래스
  * 복습을 위한 예제와 static 클래스 멤버
  * 특별 멤버 함수
  * Stringbad로 회귀 : 복사 생성자에서 어디가 잘못되었나
  * 기타 Stringbad 문제점 : 대입 연산자
  
* ### **12.2** 새롭게 개선된 Srting 클래스
  * 개선된 디폴트 생성자
  * 비교 멤버
  * [] 표기를 사용하여 개별 문자에 접근하기
  * static 클래스 오버로딩에 대한 보충
  * 대입 연산자 오버로딩에 대한 보충
  
* ### **12.3** 생성자에 new를 사용할 때 주의할 사항
  * 사용하지 말아야 할 것과 사용해도 좋은 것
  * 클래스 멤버로 클래스를 가지는 경우의 멤버별 복사
  
* ### **12.4** 객체 리턴에 대한 관찰
  * const 객체에 대한 참조 리턴
  * const가 아닌 객체에 대한 참조 리턴
  * 객체 리턴
  * const 객체 리턴
  
* ### **12.5** 객체를 지시하는 포인터
  * new와 delete 복습
  * 포인터와 객체에 대한 요약
  * 위치 지정 new 다시 살펴보기
  
* ### **12.6** 테크닉의 복습
  * << 연산자의 오버로딩
  * 변환 함수들
  * 생성자가 enw를 사용하는 클래스
  
* ### **12.7** 큐 시뮬레이션
  * Queue 클래스
  * Customer 클래스
  * ATM 시뮬레이션

### [Listing 12 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/12/.SUMMARY12.md)  
### [Listing 12 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/12/PROGRAMMING%20EXERCISE)
___
## **13** 클래스의 상속

* ### **13.1** 간단한 기초 클래스로부터 시작하자
  * 클래스 파생시키기
  * 생성자 : 접근에 대하여
  * 파생 클래스 사용하기
  * 파생 클래스와 기초 클래스의 특별한 관계
  
* ### **13.2** 상속 : is-a 관계

* ### **13.3** public 다형 상속
  * Brass와 BrassPlus 클래스의 개발
  
* ### **13.4** 정적 결합과 동적 결합
  * 포인터와 참조형의 호환
  * 가상 멤버 함수와 동적 결합
  * 가상 메서드에 대해 알아야 할 사항
  
* ### **13.5** 접근 제어 : protected
  
* ### **13.6** 추상화 기초 클래스
  * ABC 개념의 적용
  * ABC 철학
  
* ### **13.7** 상속과 동적 메모리 대입
  * 경우 1 - 파생 클래스가 new를 사용하지 않는다
  * 경우 2 - 파생 클래스가 new를 사용한다
  * 동적 메모리 대입과 프렌드를 사용하는 상속 예제

* ### **13.8** 클래스 설계 복습
  * 컴파일러가 자동으로 생성하는 멤버 함수들
  * 클래스 메서드에 관련된 그 밖의 고려 사항
  * public 상속에 관련된 그 밖의 고려 사항
  * 클래스 함수 요약

### [Listing 13 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/13/.SUMMARY13.md)  
### [Listing 13 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/13/PROGRAMMING%20EXERCISE)
___
## **14** C++ 코드의 재활용

* ### **14.1** 객체 멤버를 가지는 클래스
  * valarray 클래스 : 훑어보기
  * Student 클래스 설계
  * Student 클래스 예제
  
* ### **14.2** private 상속
  * Student 클래스 예제(새 버전)
  * 컨테인먼트와 private 상속
  * protected 상속
  
* ### **14.3** 다중 상속
  * 사원 수는 몇 명인가?
  * 어느 메서드를 사용하는가?
  * 다중 상속 요약
  
* ### **14.4** 클래스 템플릿
  * 클래스 템플릿 정의
  * 템플릿 클래스 사용
  * 템플릿 클래스 자세히 들여다보기
  * 배열 템플릿 예제와 데이터형이 아닌 매개변수
  * 템플릿의 융통성
  * 템플릿 특수화
  * 매개변수 템플릿
  * 템플릿 클래스와 프렌드 함수
  * 템플릿 별칭(C++11)

### [Listing 14 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/14/.SUMMARY14.md)  
### [Listing 14 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/14/PROGRAMMING%20EXERCISE)
___
## **15** 프렌드, 예외, 기타사항

* ### **15.1** 프렌드
  * 프렌드 클래스
  * 프렌드 멤버 함수
  * 그 밖에 프렌드 관계
  * 공유 프렌드
  
* ### **15.2** 내포 클래스 
  * 내포 클래스와 접근
  * 템플릿에서의 내포
  
* ### **15.3** 예외
  * abort() 호출
  * 에러 코드 리턴
  * 예외 메커니즘
  * 예외로 객체 사용하기
  * C++11에서의 예외 규격
  * 스택 풀기
  * 예외의 그 밖의 기능
  * exception 클래스
  * 예외, 클래스, 상속
  * 잘못된 예외
  * 예외 주의사할
  
* ### **15.4** RTTI
  * RTTI의 목적
  * RTTI의 동작 방식
  * RTTI의 오용
  
* ### **15.5** 데이터형 변환 연산자

### [Listing 15 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/15/.SUMMARY15.md)  
### [Listing 15 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/15/PROGRAMMING%20EXERCISE)
___
## **16** string클래스와 표준 템플릿 라이브러리

* ### **16.1** string 클래스
  * 문자열생성
  * string 클래스 입력
  * 문자열 작업
  * string 클래스가 제공하는 그 밖의 기능
  * string 다양성
  
* ### **16.2** 스마트 포인터 템플릿 클래스
  * 스마트 포인터의 사용
  * 스마트 포인터 고려 사항
  * auto_ptr보다 unique_ptr이 더 좋은 이유
  * 스마트 포인터 선택 
  
* ### **16.3** 표준 템플릿 라이브러리
  * vector 템플릿 클래스
  * vector에서 할 수 있는 것
  * vector에서 할 수 있는 그 밖의 것
  * Range에 기초한 루프(C++11)

* ### **16.4** 일반화 프로그래밍
  * 이터레이터가 필요한 이유
  * 이터레이터의 종류
  * 이터레이터 계층
  * 개념, 개량, 모델
  * 컴테이너의 종류
  * 결합 컨테이너
  * 순서가 부여되지 않은 결합
  * 컨테이너(C++11)

* ### **16.5** 함수 객체(Functor)
  * 펑크터 개념
  * 미리 정의된 펑크터
  * 어댑터블 펑크터와 함수 어댑터

* ### **16.6** 알고리즘
  * 알고리즘 그룹
  * 알고리즘의 일반적인 특성
  * STL과 string 클래스
  * 함수와 컨테이너 메서드
  * STL 사용하기
  
* ### **16.7** 기타 라이브러리
  * vector와 valarray, 그리고 array
  * initializer_list 템플릿(C++11)
  * initializer_list 사용
  * 프로그램 분석

### [Listing 16 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/16/.SUMMARY16.md)  
### [Listing 16 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/16/PROGRAMMING%20EXERCISE)
___
## **17** 입력, 출력, 파일

* ### **17.1** C++ 입출력의 개요
  * 스트림과 버퍼
  * 스트림, 버퍼 iostream 파일
  * 리디렉션

* ### **17.2** cout을 이용한 출력
  * 오버로딩된 << 연산자
  * 그 밖의 ostream 메서드들
  * 출력 버퍼 비우기
  * cout을 이용한 출력 형식 지정

* ### **17.3** cin을 이용한 입력
  * cin >>은 입력을 어떻게 보는가?
  * 스트림 상태
  * 그 밖에 istream 클래스 메서드들
  * 그 밖의 istream 메서드

* ### **17.4** 파일 입력과 출력
  * 간단한 파일 입출력
  * 스트림 검사와 is_open()
  * 여러 개의 파일 열기
  * 명령행 처리
  * 파일 모드
  * 임의 접근

* ### **17.5** 인코어 형식의 지정

### [Listing 17 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/17/.SUMMARY17.md)  
### [Listing 17 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/17/PROGRAMMING%20EXERCISE)
___
## **18** 새로운 C++ 표준과의 만남

* ### **18.1** C++11 특징 재고
  * 새로운 타입
  * 균일화된 초기화
  * 선언
  * nullptr
  * 스마트 포인터
  * 예외 지정(Exception Specification)
  * 범위가 지정된 열거체
  * 클래스 변화
  * 템플릿과 STL 변화
  * rvalue 참조

* ### **18.2** Move Semantics과 Rvalue 참조
  * Movw Semantics의 필요성
  * 이동 예제
  * 이동 생성자 분석
  * 대입
  * 강제 이동
  
* ### **18.3** 새로운 클래스 형태
  * 특별한 멤버 함수들
  * 기본과 삭제 함수
  * 위임 생성자
  * 상속 생성자
  * 가상 함수 관리 : override와 final

* ### **18.4** 람다 함수들
  * 함수 포인터, 펑크터 그리고 함다 사용법
  * 왜 람다인가

* ### **18.5** 래퍼(Wrapper)
  * 함수 래퍼와 템플릿 비효율성
  * 문제 해결
  * 더 많은 옵션

* ### **18.6** 가변인자 템플릿
  * 템플릿과 함수 매개변수 팩
  * 언패킹 팩
  * 가변인자 템플릿 함수에서 재귀 사용

* ### **18.7** C++11 더 많은 기능들
  * 다중 프로그래밍
  * 라이브러리 추가
  * 저수준 프로그래밍
  * 기타

* ### **18.8** 언어 변화
  * Boost 프로젝트
  * TR1
  * Boost 사용

* ### **18.9** 이제 어떻게 할 것인가

### [Listing 18 SUMMARY](https://github.com/tlsehddbs/CPP_Basic/blob/main/18/.SUMMARY18.md)  
### [Listing 18 Programming Exercise](https://github.com/tlsehddbs/CPP_Basic/tree/main/08/PROGRAMMING%20EXERCISE)
