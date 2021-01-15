## 267p) 문자열 비교 방법
> strcmp()를 사용하여 C 스타일 문자열이 같은지 검사하거나 선후 관계를 알아볼 수 있다. 
> <pre><code>strcmp(str1, str2) == 0</code></pre>
> 은 str1과 str2가 같다면 맞는 것이다. 다음 두 개의 표현식은
> <pre><code>strcmp(str1, str2) != 0
> strcmp(str1, str2)</code></pre>
> str1과 str2가 같지 않다면 맞는 것이다. 다음 표현식은
> <pre><code>strcmp(str1, str2) < 0</code></pre>
> str1이 str2보다 앞에 오면 맞는 것이다. 다음 표현식은
> <pre><code>strcmp(str1, str2) > 0</code></pre>
> str1이 str2보다 뒤에 오면 맞는 것이다. 따라서 조건 검사를 어떻게 설정하느냐에 따라서 strcmp() 함수가 ==, !=, <, > 연산자가 역할을 대신할 수 있다.