## 315p) 실전 프로그래밍 : 조건 표현식의 연산자와 버그 예방법
> ```'같다'연산자(==)```를 사용할 곳에 ```대입 연산자(=)```를 입력하는 실수를 없애기 위하여, 많은 프로그래머들이 더 직관적인 표현인 variable == value를 value == variable로 뒤집어 사용하고 있다.  
> 예를 들면, 조건을 다음과 같이 입력하면
> <pre><code>if (3 == myNumber)</code></pre>
> 바르게 동작한다. 그러나 실수로 다음과 같이 입력하면
> <pre><code>if (3 = myNumber)</code></pre>
> 리터럴에 어떤 값을 대입하려는 시도로 간주하여 컴파일러가 에러 메시지를 내보낼 것이다. (3은 언제까지나 3일 뿐이며, 다른 값을 대입할 수 없다.) 그러나 variable == value 형식을 사용하면서 다음과 같이 == 대신 = 를 입력하는 실수를 범했을 때에는
> <pre><code>if (myNumber = 3)</code></pre>
> 컴파일러가 myNumber에 무작정 값 3을 대입할 것이고, 이 조건은 참이 되어 if의 true 블록을 실행할 것이다. 이것은 매우 흔하게 발생하는 에러이지만 찾아내기가 무척 어렵다. (그러나, 수많은 컴파일러는 경고 메시지를 보낼 것이다.)  
> 일반적으로, 컴파일러가 에러를 쉽게 찾을 수 있도록 프로그램을 작성하는 것이 찾기 어려운 에러를 만들어 놓고 이를 고치느라 애를먹는 것보다 훨씬 낫다.
___
## 323p) 범위 검사
> **범위 검사**의 각 부분은 ```&& 연산자```를 사용하여 두 개의 완전한 **관계 표현식**을 하나로 결합하고 있다.
> <pre><code>if (age > 17 && age < 35)          // 맞다</code></pre>
> 수학에서 배운 부등식을 연상하여 다음과 같이 작성하면 안 된다.
> <pre><code>if (17 < age < 35)                 // 이렇게 하면 안 된다</code></pre>
> 이러한 실수는 C++ 구문상 아무런 문제가 없기 때문에 컴파일러는 그 실수를 찾아내지 못한다. < 연산자는 좌변과 우변을 결합하므로 이 잘못된 표현식의 의미는 다음과 같은 코드로 간주된다.
> <pre><code>if ( (17 < age) < 35)</code></pre>
> 여기서 17 < age는 true 또는 false로 평가되므로, 값이 1또는 0이다. 이것은 항상 35보다 작으므로 전체 표현식은 언제나 true가 된다.
___
## 334p)
> 어떤 C++ 시스템에서는 ([Listing 6.10](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/10switch.cpp "Listing 6.10")의 case 1에서 사용하는) \a ```이스케이프 시퀀스(escapse sequence)```를 묵음으로 처리하여 삑 소리를 내지 않는다.
___
## 245o)
> 이미 언급한 바와 같이, 사용자가 출력 결과를 볼 수 있는 윈도우창을 열어두기 위해서는 추가적으로 코드가 필요하다.  
> 예를 들면 'q'를 입력하면 추가 입력이 허용되지 않기 때문에 보다 상세한 내용이 요구된다.
> <pre><code>if (!cin)  // input terminated by non-numeric response
> {
>     cin.claer();      // 입력을 초기화한다
>       cin.get();      // q를 읽는다
> }
> cin.get();            // 마지막 입력 이후에 마지막 줄을 읽는다
> cin.get();            // 사용자가 엔터키를 누를 때까지 기다린다</code></pre>
> 프로그램이 이러한 루프 이후에 보다 많은 입력을 원할 경우에는 [Listing 6.13](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/13cinfish.cpp "Listing 6.13")의 내용과 유사한 코드를 사용할 수 있을 것이다. [Listing 6.14](https://github.com/tlsehddbs/CPP_Basic/blob/main/06/14cingolf.cpp "Listing 6.14")에서는 보다 구체적으로 cin return value 사용과 cin 리세팅에 대해서 상세히 설명하고 있다.