// calculate() 함수를 설계하라.
// calculate() 함수의 첫 번재와 두 번째 매ㅐㄱ변수는 double형이다.
// 세 번재 매개변수는 두 개의 double형을 매개변수로 취하여 double형을 리턴하는 함수를 지시하는 포인터이다.
// 그리고 calculate()함수 역시 double형이다.
// 그래서 calculate()함수는 자신의 세 번째 매개변수가 지시하는 함수가, 두 개의 double형 매개변수를 취하고 계산하여 리턴하는 값을 다시 리턴한다. 
// 예를 들면, add() 함수가 다음과 같이 정의되어 있다고 가정하자.
/*
double add(double x, double y)
{
    return x + y;
}
*/
// 그러면 다음과 같은 calculate() 함수의 호출은
/*
double q = calculate(2.5, 10.4, add);
*/
// 2.5와 10.4를 add() 함수에 전달하고, add() 함수가 계산하여 리턴하는 값(12.9)를 다시 리턴하여 q에 대입한다.
// 이 함수들과 함께, add() 스타일의 다른 함수를 최소한 하나 더 프로그램에 사용하라.
// 프로그램은 사용자가 쌍을 이루는 두 수를 반복해서 입력할 수 있도록 루프를 사용한다.
// 각 쌍에 대하여, add() 함수와 add() 스타일의 다른 함수를 calculate() 함수를 사용하여 불러내라.
// 좀 더 진도를 나가고 싶다면, add() 스타일의 함수들을 지시하는 포인터들의 배열을 만들고, 이 포인터들을 사용하여 calculate() 함수를 일련의 add() 스타일의 함수들에 연속적으로 적용하는 루프를 만들어라.

// [힌트] 다음은 세 개의 함수 포인터의 배열을 선언하는 방법이다.
/*
double (*pf[3])(double, double);
*/
// 그러한 배열은 보통의 배열 초기화 구문과 배열 이름을 주소로 사용하여 초기화할 수 있다.