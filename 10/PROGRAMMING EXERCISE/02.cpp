// 다음은 다소 간단한 클래스 정의이다.
/*
class Person {
private:
    static const LIMIT = 25;
    string lname;           // Person의 성씨(last name)
    char fname[LIMIT];      // Person의 이름(first name)
public:
    Person() {lname = ""; fname[0] = '\0'; }    // #1
    Person(const string & ln, const char * fn = "Heyyou");  // #2
    // 다음 메서드들은 lname과 fname을 디스플레이한다
    void Show() const;              // 이름 성씨 형식
    void FormalShow() const;        // 성씨,   이름 형식
};
*/
// (두 개의 형태가 어떨게 쓰이는지 비교해 보기 위해서 string 객체와 문자 배열 둘다 사용한다.)
// 정의되지 않은 메서드들을 위한 코드를 제공함으로써 구현을 완성하는 프로그램을 작성하라.
// 그 클래스를 사용하는 프로그램은 세 가지 가능한 생성자 호출(매개변수 없음, 하나의 매개변수, 두 개의 매개변수)과 두 개의 디스플레이 메서드를 사용해야 한다.
/* 다음은 생성자들과 메서드들을 사용하는 예이다.
Person one;                 // 디폴트 생성자를 사용한다
Person two("Smythecraft");  // 하나의 디폴트 매개변수를 가지고 #2 사용
Person three("Dimwiddy", "Sam");    // 디폴트 없이 #2를 사용한다
one.Show();
cout << endl;
one.FormalShow();
// two와 three를 위한 기타 등등
*/