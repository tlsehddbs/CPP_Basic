## 471p) 인라인과 매크로
> ```인라인``` 기능은 C++에 새로 추가된 것이다. C는 매크로 기능을 제공하기 위해 선행처리기 ```#define``` 구문을 사용한다. 매크로는 인라인 코드를 소스적으로 구현한 형태이다.  
> 예를 들어, 다음은 수를 제곱하는 매크로이다.
> <pre><code>#define SQUARE(X) X*X</code></pre>
> 매크로는 함수에 매개변수를 넘기는 것이 아니라 텍스트를 대체함으로써 동작한다. 여기서 X가 매개변수를 나타내는 기호 이름 역할을 수행한다.
> <pre><code>a = SQUARE(5.0);       은 a = 5.0*5.0;             으로 대체된다.
> b = SQUARE(4.5 + 7.5); 는 b = 4.5 + 7.5*4.5 + 7.5; 로 대체된다.
> c = SQUARE(c++);       는 d = c++*c++;             로 대체된다.</code></pre>
> 이 경우에는 첫 번째 예제만 재대로 작동한다. 나머지 두 예제가 제대로 작동하려면 괄호를 사용해야 한다.
> <pre><code>#define SQUARE(X) ((X)*(X))</code></pre>
> 그래도 매크로가 값을 전달하지 않는다는 문제는 여전히 남는다. 괄호를 사용하여 새롭게 정의했어도 SQUARE(c++)는 c를 두 번이나 증가시킨다. 그러나 [Listing 8.1](https://github.com/tlsehddbs/CPP_Basic/blob/main/08/01inline.cpp "Listing 8.1")에 있는 인라인 함수 square()는 제곱을 원하는 값을 함수에 전달한 후, c를 한 번만 증가시킨다.  
> 여기에서는 C의 매크로를 작성하는 방법을 의도적으로 설명하지 않았다. 독자가 지금까지 C의 매크로를 써 왔다면 그것을 C++의 인라인 함수로 변환하는 것을 고려해야 한다. 
___
## 474p)
> 참조를 선언할 때 참조 변수를 함께 초기화해야 한다.
___
## 485p)
> 함수 호출 실제 매개변수가 lvalue가 아니거나, 그에 대응하는 const 참조 매개변수의 데이터형과 일치하지 않을 때, C++는 정확한 데이터형의 ```익명 변수```를 생성하고, 그 익명 변수에 함수 호출 실제 매개변수의 값을 대입하고, 매개변수가 그 익명 변수를 참조하게 한다.
___
## 485p) 가능하면 const를 사용하자
> 참조 매개변수를 상수 데이터에 대한 참조를 선언하는 이유는 다음과 같은 세 가지 이점이 있기 때문이다.
> * const를 사용하면, 실수로 데이터 변경을 일으키는 프로그래밍 에러를 막을 수 있다.
> * 원형에 const를 사용하면, 함수가 const와 const가 아닌 실제 매개변수를 모두 처리할 수 있지만, 원형에 const를 생략한 함수는 const가 아닌 데이터면 처리할 수 있다.
> * const 참조를 사용하면, 함수가 자신의 필요에 따라 임시 변수를 생성하여 사용할 수 있다.
> 
> 따라서 가능하면 참조 형식 매개변수를 const로 선언하는 것이 좋다.
___
## 492p)
> 참조를 리턴하는 함수는 실제로 참조가 되는 변수에 대한 alias 파일이다.
___
## 498p) string 객체 참조 매개변수에 C 스타일 문자열 매개변수 전달하기
> version1() 함수에는 다소 흥미로운 사실이 있다. 두 형식 매개변수(s1과 s2)는 const string &형인데, 실매개변수(input과 "***")는 각각 string형과 const char *형이다. input이 string형이기 때문에, s1이 그것을 참조하는 것은 전혀 문제될 것이 없다. 그러나 char형을 지시하는 포인터 매개변수를 string 참조에 전달하는 것을 프로그램이 허용하는 것은 어떻게 된 일일까?  
> 여기에는 두 가지가 숨어 있다. 
> 
> 첫째, string 클래스가 char *형을 string으로 변환하는 것을 정의하고 있다. 이것이 string 객체를 C 스타일 문자열로 초기화하는 것을 가능하게 한다.  
> 둘째, 이 장의 앞에서 설명한 const 참조 형식 매개변수의 특성 때문이다. 실매개변수의 데이터형이 참조 매개변수의 데이터형과 일치하지 않지만, 참조 데이터형으로 변환될 수 있다고 가정하자. 그러면 프로그램은 올바른 데이터형의 임시 변수를 만들고, 변환된 값으로 그것을 초기화하고, 임시 변수에 참조를 전달한다.  
> 예를 들면, 이 장의 앞부분에서 우리는 const double & 매개변수가 int 매개변수를 이와 같은 방식으로 처리할 수 있다는 것을 보았다. 마찬가지로, const string & 매개변수가 char * 또는 const char * 매개변수를 이와 같은 방식으로 처리할 수 있다.  
> 결과적으로, 형식 매개변수가 const string &형이면, string 객체는 또는 (큰따옴표로 묶은 문자열 리터럴, 널 문자로 종결된 char형의 배열, char형을 지시하는 포인터 변수와 같은) C 스타일 문자열이 함수 호출에 사용되는 실매개변수가 될 수 있다. 그러므로 다음과 같은 행을 바르게 동작한다.
> <pre><code>result = version1(input, "***");</code></pre>
___
## 512p_513p) 오버로딩 참조 매개변수
> 클래스 설계의 STL은 종종 참조 매개변수를 사용한다. 어떻게 오버로딩이 다른 종류의 참조형과 상호작용하는지 알아두면 유용하다. 다음 세 개 원형에 대하여 생각해 보자.
> <pre><code>void sink(double & r1);           // 변경 가능한 lvalue와 매치된다
> void sank(const double & r2);     // 변경 가능한 lvalue 또는 const lvalue, rvalue와 매치된다
> void sunk(double && r3);          // rvalue와 매치된다</code></pre>
> lvalue 참조 매개변수인 r1은 double 변수와 같이 변경 가능한 lvalue 매개변수와 매치된다. 상수 lvalue 참조 매개변수인 r2는 두 개의 double 변수합과 같은 변경 가능한 매개변수인 const lvalue, rvalue 매개변수와 매치된다. 마지막으로 rvalue 참조 매개변수 r3는 rvalue와 매치도니다. 즉, r2가 r1 또는 r3와 매치되는 동종의 매개변수와 매치될 수 있다는 점을 기억할 필요가 있다. 세 가지 형의 매개변수에 대하여 함수를 오버로드할 때 어떤 현상이 발생하는가에 대한 정답은 더욱 정확한 매치가 이루어진다는 것이다.
> <pre><code>void staff(double & rs);           // 변경 가능한 lvalue와 매치된다
> void staff(const double & rcs);    // rvalue와 const lvalue와 매치된다
> void stove(double * r1);           // 변경 가능한 lvalue와 매치된다
> void stove(const double & s2);     // const lvalue와 매치된다
> void stove(double && r3);          // rvalue와 매치된다</code></pre>
> 이러한 방식은 lvalue, const, 또는 rvalue 성질에 의거해 매개변수를 전달함으로서 함수의 행동을 지정할 수 있다.
> <pre><code>double x = 55.5;
> const double y = 32.0;
> stove(x);         // stove(double &)를 호출한다
> stove(y);         // stove(const double &)를 호출한다
> stove(x+y);       // stove(double &&)를 호출한다</code></pre>
> 말하자면 사용자가 stove(double &&) 함수를 생략하게 되면, stove(x+y)는 대신 stove(const double &)함수를 불러온다.
___
## 517p) 이름 장식(Name Decoration)이란 무엇인가?
> C++는 오버로딩된 함수들 중에서 어느것이 어느것인지 과연 어떻게 추적할까?  
> C++는 각각의함수들에 비밀 증명을 발급한다. 프로그램을 작성하여 컴파알하기 위해 C++ 개발 도구의 편집기를 사용하면, C++ 컴파일러는 사용자를 대신하여 ```이름 장식(name decoration)``` 또는 ```이름 맹글링(name mangling)```이라는 마술을 부린다. 그것은 함수 원형에 지정되어 있는 형식 매개변수의 데이터형을 기반으로 각각의 함수 이름을 암호화하는 것이다.  
> 예를 들어, 다음과 같은 장식되지 않은 함수 원형이 있다고 가정하자
> <pre><code>long MyFunctionFoo(int, float);</code></pre>
> 우리는 이 형식을 쉽게 이해할 수 있다. 우리는 그 함수가 int형 하나와 float형 하나를 매개변수로 받아들이고, long형의 값을 리턴한다는 사실을 알 수 있다. 컴파일러는 스스로의 용도를 위해, 이 형식을 다음과 같이 좀 더 알아보기 어려운 내부 형식으로 변환한다.
> <pre><code>long MyFunctionFoo@@YAXH@Z</code></pre>
> 원래 이름을 횡설수설하게 꾸미는 이러한 겉보기 장식은 매개변수의 개수와 데이터형을 암호화하는 것이다. 함수 시그내처가 다르면 기호들이 다른 방식으로 덧붙는다. 컴파일러가 다르면 이름 장식이 다른 방법으로 이루어진다.
___
## 546p)
> expression 호출은 평가되지 않는다. 이 경우, 컴파일러는 리턴 타입을 얻기 위해서 원형을 검사하며, 실제로 그 함수를 불러올 필요는 없다.