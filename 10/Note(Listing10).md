## 638p) 안터페이스란 무엇인가?
> ```인터페이스```는 두 시스템(예를 들면, 컴퓨터와 프린터 또는 사용자와 컴퓨터 프로그램) 간의 상호 작용을 위한 공통된 ```프레임워크```이다.  
> 예를 들어, 사용자는 독자일 수 있고, 프로그램은 워드프로세서일 수 있다. 우리는 워드프로세서를 사용할 때, 생각에서 컴퓨터 메모리로 단어들을 직접 옮기지 않는다. 그 대신, 우리는 프로그램이 제공하는 인터페이스와 상호 작용한다. 우리가 글쇠를 하나 누르면, 컴퓨터는 스크린에 그 글자를 보여 준다. 우리가 마우스를 움직이면, 컴퓨터는 스크린에서 커서를 움직인다. 우리가 실수로 마우스를 클릭하면, 타이핑하고 있는 단락에 뭔가 일이 벌어진다. 프로그램 인터페이스는, 사용자의 의도를 컴퓨터에 저장되어 있는 특정 정보로 반환하는 것을 담당한다.  
> 클래스와 관련하여, 우리는 public 인터페이스를 말한다. 이 경우에, public은 그 클래스를 사용하는 프로그램이다. 상호 작용 시스템은 클래스 객체들로 구성된다. 인터페이스는 그 클래스를 작성한 누군가가 제공한 메서드들로 구성된다. **인터페이스**는 사용자, 즉 프로그래머가 클래스 객체와 상호 작용하는 코드를 작성할 수 있게 해 준다. 그리고 프로그램이 클래스 객체를 사용할 수 있게 해 준다.  
> 예를 들면, string 객체에 들어 있는 문자들의 개수를 알기 위해, 우리는 그 객체의 내부까지 활짝 열지 않는다. 클래스 작성자가 제공한 size() 메서드를 그냥 사용하면 된다. 이 클래스 설계는 public 사용자가 객체에 직접 접근하는 것을 거부한다. 그러나 public이 size() 메서드를 사용하는 것은 허용한다. size() 메서드는 사용자와 string 클래스 객체 사이의 public 인터페이스의 일부이다. 마찬가지로, getline() 메서드는 istream 클래스의 public 인터페이스의 일부이다. cin을 사용하는 프로그램은, 한 행의 입력을 읽을 때 cin 객체의 내부와 직접 교섭하지 않는다. 그 대신에, getline()이 그 작업을 한다.   
> 좀 더 인격적인 관계를 원한다면, 클래스를 사용하는 프로그램을 public 사용자라고 생각하지 말고, 그 클래스를 사용하는 프로그램을 작성하는 사람을 public 사용자라고 생각할 수 있다. 그러나 어느 경우에나, 클래스를 사용하려면 그것의 public 인터페이스를 알 필요가 있다. 클래스를 작성하려면, 그것의 public 인터페이스를 만들 필요가 있다. 
___
## 642p) OOP와 C++
> ```OOP```는 어떤 언어를 사용하더라고 어느 수준까지는 할 수 있는 **프로그래밍 방법론**이다. 그러므로 보통의 C 프로그램에서 OOP적인 아이디어를 넣을 수 있다. 예를 들어 9장, "메모리 모델과 이름 공간"은 하나의 예를 제공한다. ([Listing 9.1](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/01coordin.h "Listing 9.1"), [9.2](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/02file1.cpp "Listing 9.2"), [9.3](https://github.com/tlsehddbs/CPP_Basic/blob/main/09/03file2.cpp "Listing 9.3") 참고) 그 예에서 헤더 파일은 구조체의 템플릿과, 그 구조체를 조직하는 함수의 원형을 가지고 있다. 그 예제에서 main() 함수는 단순히 구조체형의 변수를 정의하고, 관련 함수를 사용하여 그 변수를 조직하고 있다. 즉, main()이 구조체의 멤버에 직접 접근하지 않는다.  
> 사실상 그 예제는 저장 형태와 함수 원형을 헤더 파일에 넣어 추상화된 데이터형을 정의하면서, main() 함수에게는 실제적인 데이터 표현을 은닉하고 있다. C++는 OOP적인 접근을 구현하도록 명확하게 의도된 언어이므로, C++를 사용하면 C를 사용할 때보다 더 나은 OOP를 구현할 수 있다. 
> 
> 첫째, 함수 원형과 데이터 표현을 분리해 두지 않고 하나의 클래스 선언에 넣음으로써, 하나의 클래스 선언에 데이터 표현과 함수 원형을 통합하고 있다.  
> 둘째, 데이터 표현을 private으로 만들어 권한이 주어진 함수만 그 데이터에 접근할 수 있도록 접근 조건을 강화하는 것이다.  
> 앞에서 언급한 예제에서, main()이 구조체 멤버에 직접 접근한다면, 그것은 OOP의 정신에는 위배되지만, C 언어의 규칙가지 깨뜨리는 것은 아니다. 그러나 stock 객체의 shares 멤버에 직접 접근하여고 시도한다면 C++의 규칙을 깨뜨리는 것이다. C++에서는 이러한 접근을 컴파일러가 잡아낸다. 
___
## 643p) 클래스와 구조체
> 클래스 서술은 ```public```이나 ```private``` 레이블과, 멤버 함수들이 추가된 형태의 구조체 선언처럼 보인다. 사실 C++는 클래스가 가지고 있는 특징들을 구조체에까지 확장시켰다. 유일한 차이는 **구조체에 대한 디폴트 접근 제어는 public**이고, **클래스에 대한 디폴트 접근 제어는 private**이라는 것이다. C++ 프로그래머들은 클래스를 일반적으로 클래스 서술을 구현하는 데 사용하고, 순수한 데이터 객체를 정의하는 데에는 구조체를 사용한다. (종종 plain-old data 구조라고 불리며, POD 구조라고도 불린다).
___
## 652p) 클라이언트-서버 모델
> OOP 프로그래머들은 프로그램 설계를 *클라이언트-서버 모델*로 자주 이야기한다. 이 개념에서 클라이언트는 클래스를 사용하는 프로그램이다. 클래스 메서드를 포함하여, 클래스 선언이 서버를 구성한다. 서버는 그것을 필요로 하는 프로그램들이 상용할 수 있는 리소스이다. 클라이언트는 public으로 정의된 인터페이스를 통해서만 서버를 사용한다. 이것은 클라이언트(더 확장하면 서버 설계자의) 책임은 그 서버가 그 인터페이스에 따라 신뢰성있고 정확하게 수행되는지 확인하는 것이다. 서버 설계자가 그 클래스 설계에 가하는 모든 변경은 인터페이스가 아니라 세부 구현이어야 한다. 이것은 클라이언트의 행동에 예측할 수 없는 영향을 일으키는 변화를 서버에 가져오지 않고, 클라이언트와 서버의 기능을 프로그래머들이 서로 독립적으로 개선하는 것을 허용한다.
___
## 670p)
> [Listing10.6](https://github.com/tlsehddbs/CPP_Basic/blob/main/10/06usestok1.cpp "Listing 10.6")은 main()의 시작과 끝에 중괄호가 하나 더 있다. stock1과 stock2 같은 자동 변수는 자신을 포함하는 블럭에서 나오면 소멸된다. 만약 다른 중괄호가 없다면 main이 종료할 때까지 파괴자는 호출되지 않을 것이며, 이는 윈도우 환경에서 마지막 두 개의 파괴자가 호출하기 전에 윈도우가 close하여 마지막 두 메시지를 볼 수가 없음을 뜻한다. 이를 방지하기 위해 또 다른 중괄호를 사용하면 return을 하기 전 두 개의 파괴자를 호출할 수 있으며 정상적으로 두개의 메시지를 볼 수 있다.
___
## 671p)
> 한 객체를 같은 클래스에 속하는 다른 객체에 대입할 때, 기본적으로 C++는 소스 객체 데이터 멤버들의 각 내용을 타깃 객체의 해당하는 데이터 멤버에 복사한다.
___
## 680p)
> 생성자와 파괴자를 포함한 각각의 멤버 함수는 하나의 ```this 포인터```를 가진다. this 포인터의 특별한 특징은 호출한 객체를 지시하는 것이다. 호출한 객체를 메서드가 전체적으로 참조할 필요가 있을 경우에는, ```*this```를 사용할 수 있다. 함수의 매개변수 괄호 뒤에 const 제한자를 사용하면, this 포인터를 const로 제한한다. 그러한 경우엔, this 포인터를 사용하여 그 객체의 값을 변경할 수 있다.