// 다음은 어떤 프로그램의 뼈대이다.
/*
#include <iostream>
using namespace std;
#include <cstring>      // strlen(), strcpy()를 사용하기 위해
struct stringy
{
    char * str;     // 문자열을 지시한다
    int ct;         // 문자열의 길이('\0'은 제외)
};

// set(), show()의 원형과, show() 함수를 이 자리에 넣는다
int main()
{
    strungy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
        // 첫 번재 매개변수는 참조이다.
        // testing의 사본을 저장할 공간을 대입한다.
        // beany와 str 멤버가 새 블록을 지시하도록 설정한다.
        // testing을 새 블록에 복사한다.
        // beany의 ct 멤버를 설정한다
    show(beany);            // 문자열 멤버를 한 번 출력한다
    show(beany, 2);         // 문자열 멤버를 두 번 출력한다
    testing[0] = 'D';
    testing[2] = 'u';
    show(testing);          // testing 문자열을 한 번 출력한다
    show(testing, 3);       // testing 문자열을 세 번 출력한다
    show("Done!");
    return 0;
}
*/
// 요구하는 함수와 원형을 작성하여 이 뼈대를 완성하라.
// 디폴트 매개변수를 사용하는 두 개의 show() 함수를 사용해야 한다.
// 필요하면 const 매개변수를 사용하라.
// set()은 new를 사용하여 주어진 문자열을 저장할 수 있을 만큼 충분한 공간을 대입해야 한다. 
// 여기서 사용하는 기법은 클래스를 설계하고 구현할 때 사용하는 것과 비슷하다. (사용하는 컴파일러가 헤더 파일 이름을 변경하고, using 지시자의 삭제를 요구할 수도 있다.)