## 133p) 배열은 복합 데이터형이다.
> 배열은 다른 데이터형이 조립되어 만들어지는 것이기 때문에 ```복합 데이터형(compound type)```이라고 부른다. (C는 이에 대해 파생 데이터형(derived type)이라는 용어를 사용한다. 그러나 C++에서는 "파생"이라는 용어를 클래스의 관계를 나타내는 데 사용하기 때문에, 새로운 용어를 도입할 수밖에 없다.) 어떤 것을 그냥 배열이라고 간단하게 선언할 수 없다.  
> 배열은 항상 특정 데이터형의 배열이어야 한다. 일반화된 배열형은 없다. char형의 배열, long형의 배열과 같이, 특정 데이터형의 배열은 많다.  
> 예를 들어, 다음과 같은 배열 선언을 생각해 보자.
> <pre><code>float loans[20];</code></pre>
> loans는 그냥 '배열'이 아니라 'float형의 배열'이다. 이것은 loans 배열이 float형이 조립되어 이루어진 것임을 강조한다.
___
## 134p) 적법한 인덱스 사용의 중요성
> 컴파일러는 사용자가 적법한 인덱스를 사용하는지를 검사하지 않는다.  
> 예를 들면, 사용자가 존재하지도 않는 months[101]에 값을 대입해도 컴파일러는 아무 불평도 하지 않는다.  
> 그러나 그러한 무모한 대입은 프로그램이 실행될 때 문제를 일으켜 데이터나 코드를 망가뜨리고, 프로그램이 먹통이 되게 한다. 그러므로 반드시 적법한 인덱스를 사용해야 한다.
___
## 137p) 원소의 개수를 컴파일러가 결정하는 것에 대해서
> 컴파일러가 배열 원소의 개수를 결정하도록 위임하는 것은 좋지 않다. 그 이유는 프로그래머가 생각한 개수와 컴파일러가 결정한 개수가 다를 수 있기 때문이다.  
> 그러나 char형의 배열을 문자열로 초기화할 때에는 오히려 이와 같은 접근이 더 안전한 바법일 수 있다. 배열 원소의 개수가 몇 개인지 사용자가 아니라 프로그램이 꼭 알아야 한다면, 다음과 같이 할 수 있다.
> <pre><code>short things[] = {1, 5, 3, 8};
> int num_elements = sizeof things / sizeof (short);</code></pre>
> 이것이 유용한 것인지 게으른 것인지는 상황에 달려 있다. 
___
## 180p) 포인터와 c++의 철학
> **객체 지향 프로그래밍**은 **컴파일 시간(compile time)**이 아닌 **실행 시간(run time)**에 어떤 결정을 내린다는 것을 강조하는 점에서 절차적 프로그래밍과는 다르다.  
> 
> 실행 시간이라는 것은 프로그램이 실제로 실행되는 동안을 의미한다.  
> 반면에 컴파일 시간은 컴파일러가 소스코드를 실행 코드로 변환하는 시간을 말한다.  
> 실행 시간에 결정을 내리는 것은 휴가 동안에 그날의 날씨와 기분에 따라 여행지를 임의로 바꾸는 것과 같다. 컴파일 시간에 결정을 내리는 것은 그러한 조건과는 관계없이 미리 예정된 스케쥴에 따라 여행을 감행하는 것과 같다. 그러므로 실행 시간이 그때그때 상황에 적절히 대처할 수 있는 융통성을 가지고 있다.  
> 예를 들어, 배열을 선언하는 경우 생각해 보자. C++에서 배열을 선언하여면 배열의 크기를 미리 정해야 한다.  
> 즉, 컴파일할 때 배열의 크기가 미리 결정된다. 이것이 바로 컴파일 시간 결정이다. 그런데 그 배열의 원소 개수가 대부분의 경우에는 20개면 충분하지만, 200개가 필요한 경우가 간혹 있다고 가정해 보다. 이러한 상황에서는 어쩔 수 없이 안전을 위해 원소 개수가 200개인 배열을 사용해야 한다. 이렇게 되면 평상시에 메모리를 크게 낭비하는 꼴이 된다.  
> 객체 지향 프로그래밍에서는 실행 시간까지 이러한결정을 미룸으로써 프로그램에 융통성을 부여한다. 원소가 20개가 필요한지 아니면 205개가 필요한지는 프로그램이 실행될 때 사용자가 프로그램에 알려 줄 수 있다.  
> 요약하면, OOP에서 배열의 크기를 실행 시간에 결정하기를 원할 수도 있다. 이것이 가능하려면, 프로그램이 실행되는 동안에 배열 또는 그와 동등한 것을 생성할 수 있어야 한다. C++에서는 new라는 키워드를 사용하여 원하는 만큼의 메모리를 대입라고, 이렇게 대입된 메모리의 위치를 포인터를 사용하여 추적할 수 있다. 
___
## 184p)
> C++에서는 int *는 복합 데이터형으로서 int형을 지시하는 포인터이다. 
___
## 190p) 메모리 부족
> 컴퓨터에 사용할 수 있는 메모리가 부족하여 new의 메모리 대입 요청을 허용할 수 없는 상황이 발생할 수도 있다. 이러한 경우에 new는 0 값을 리턴한다. C++에서는 **값이 0인 포인터**를 ```널 포인터(null pointer)```라고 부른다. 널 포인터는 어떠한 데이터도 지시하지 않는다. 따라서 널 포인터는 사용할 수 있는 포인터를 리턴해야 하는 연산자나 함수에서 무언가 일이 잘못되었다는 것을 나타낼 때 흔히 사용된다. 6장에서 if 구문을 배우고 나면 new가 널 포인터를 리턴하는지를 검사하여 프로그램이 한계를 벗어나는 일을 막을 수 있다. 메모리를 대입하지 못했을 때 널 포인터를 리턴하는 것 이외에, new는 ```bad_alloc예외```를 리턴할 수 있다. 예외에 대해서는 15장, "프렌드와 예외, 기타 사항"에서 설명한다.
___
## 199p)
> 포인터 변수에 1을 더하면 그 포인터가 지시하는 데이터형의 바이트 수만큼 값이 증가한다.
___
## 200p) 배열의 주소
> 배열의 주소를 얻는 것은 배열의 이름을 얻는 것과는 다른 얘기이다. 배열의 이름이 배열의 주소가 아닌가?  
> 절대로 아니다. 배열의 이름은 배열의 첫 번째 원소의 주소를 가리킨다. 반면에, 그 주소를 통해 전체 배열의 주소를 얻어낸다. 
> <pre><code>short tell[10];           // tell은 20바이트 배열이다
> cout << tell << endl;     // &tell[0]을 출력한다
> cout << &tell << endl;    // 전체 배열의 주소를 출력한다 </code></pre>
> &tell[0]과 tell은 2바이트 메모리 블록으로 동일한 값을 갖는다. 반면에 &tell은 20바이트 메모리 블록의 주소이다. 그래서, tell + 1은 주소값에 2를 더하게 되고 &tell + 1은 주소값에 20을 더하게 된다. 이것은 tell이 short형 포인터나 short형이라는 것을 말해 주는 것이며, &tell은 short형 20바이트 배열이거나 short (*)[20]이라는 것을 말해 준다.  
> 독자는 마지막 표현식에 대해 걱정을 할 수도 있을 것이다. 이제, 어떻게 이런 포인터를 선언하고 초기화하는지 살펴보도록 하겠다. 
> <pre><code>short (*pas)[20] = &tell;  // pas는 20바이트 배열을 가리킨다</code></pre>
> 만일, 괄호가 빠졌을 경우에는 pas는 short를 가리키는 20개 포인터의 배열이 된다. 그래서 괄호가 필요하다. 다음으로 변수형을 표현하는 것을 원한다면, 변수 이름을 삭제하고 선언할 수도 있다.  
> 그러므로, pas의 형은 short (*)[20]이다. 또한, pas가 &tell으로 설정되기 때문에 *pas는tell과 동일하고 (*pas)[0]는 tell 배열의 첫 번째 원소가 된다.
___
## 204p)
> cout을 비롯한 대부분의 C++ 표현에서, char형의 배열 이름, char형을 지시하는 포인터, 큰따옴표로 둘러싸인 문자열 상수는 모두 문자열의 첫 번째 문자의 주소로 해석된다.
___
## 216p~217p) 실전 프로그래밍 : 스택, 합, 메모리 누수
> new 연산자로 자유 공간(합)에 변수를 생성한 후 delete를 사용하여 이를 해제하지 않으면 무슨 일이 벌어질까?  
> 자유 공간에 동적으로 대입된 변수나 데이터 객체는, 그것을 지시하는 포인터를 포함하고 있는 메모리가 사용 범위와 객체 수명 규칙 때문에 해제된다고 하더라도, delete가 호출되지 않는 한 계속해서 살아남게 된다. 이러한 경우에 자유 공간에 생존하고 있는 변수나 데이터 객체에 접근할 수 있는 방도가 전혀 없다. 왜냐하면 변수나 데이터 객체가 저장되어 있는 메모리 위치를 지시하는 포인터가 이미 사라졌기 때문이다. 이것은 ```메모리 누수(memorty leak)```이라고 한다. 누수된 메모리는 프로그램을 실행하는 동안 내내 사용할 수 없게 된다.  
> 즉 메모리가 대입은 되었으나 접근이 불가능하다. 흔한 일은 아니지만 극단적인 경우에, 메모리 누수가 매우 심각하여 애플리케이션에 할애된 메모리를 모두 소진할 수도 있다. 그 결과 메모리 부족으로 프로그램이 먹통이 된다.  
> 게다가, 이러한 메모리 누수는 동일한 메모리 공간에서 운영되는 운영 체제나 다른 애플리케이션에도 부정적인 영향을 끼쳐, 결국 그들을 차례대로 망가뜨린다.  
> 메모리 누수는 고급 프로그래머나 수준 높은 소프트웨어 회사들도 흔히 저지르는 일이다. 메모리 누수를 피하려면, new와 delete 연산자를 가능한 가깝게 결합하여 사용하는 습관을 들여야 한다.  
> 즉, 자유 공간에 동적으로 변수나 데이터 객체를 대입하자마자 delete연산자를 사용할 계획을 서둘러야 한다.
___
## 217p)
> 포인터는 C++에서 가장 강력한 도구에 속한다. 그러나 포인터는 가장 위험한 것이기도 하다. 그 이유는 초기화하지 않은 포인터를 사용하여 메모리에 접근하거나, 같은 메모리 블록을 두 번 해제한다면 아무도 예측할 수 없는 일이 벌어지기 때문이다. 포인터 표기와 포인터 개념에 익숙해질 때까지 포인터는 독자의 머리를 매우 혼란스럽게 만들 것이다.  
> 포인터는 C++프로그래밍에서 중요한 부분이기 때문에, 이후의 논의에서도 자주 등장한다. 이 책에서는 독자가 프로그램을 작성할 대 포인터를 능숙하게 사용할 수 있도록, 포인터를 사용하는 예가 나올 때마다 반복하여 포인터를 설명할 것이다. 
