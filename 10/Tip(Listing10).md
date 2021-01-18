## 659p) 멤버 이름과 매개변수 이름
> 생성자에 익숙하지 않은 초보자들은, 다음 예와 같이, 클래스 멤버 이름을 생성자의 매개변수로 사용하여고 시도하는 경우가 많다.
> <pre><code>// NO!
> Stock::Stock(const string & company, long shares, double share_val)
> {
> ...
> }</code></pre>
> 이것은 잘못된 것이다. 생성자의 매개변수는 클래스 멤버를 나타내는 것이 아니다. 그들은 클래스 멤버에 대입될 값을 나나태는 것이다. 그러므로 구별되는 이름을 가져야 하낟. 그렇게 하지 않으면, 혼동을 일으키는 다음과 같은 코드를 작성할 위험이 있다.
> <pre><code>class Stock
> {
> private:
>     string m_company;
>     int m_shares;
>   ...
> class Stock
> {
> private:
>     string m company_;
>     long shares_;
>     ...</code></pre>
> 두 가지 방식 모두 company와 shares를 public 인터페이스에서 매개변수 이름으로 사용할 수 있다.
___
### 662p)
> 클래스를 설계할 때, 모든 클래스 멤버들을 암시적으로 초기화하는 디폴트 생성자를 사용자가 제공해야 한다.
___
## 673p)
> 객체의 값을 초기화로도 설정할 수 있고, 대입으로도 설정할 수 있다면, 초기화를 사용하라. 일반적으로 그것이 더 효율적이다. 
___