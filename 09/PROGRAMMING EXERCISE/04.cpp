// 다음과 같은 이름 공간을 기초로 하여 세 개의 파일로 이루어진 프로그램을 작성하라.
/*
namespace SALES;
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    // 비대화식 버전 : 
    // 4 또는 n 중에서 더 적은 개수의 항목을
    // 배열 ar로부터 s의 sales 멤버로 복사한다
    // 입력된 항목들에 대해 평균값, 최대값, 최소값을 계산하여 저장한다.
    // sales의 나머지 원소들은(있을 경우에) 0으로 설정한다
    void setSales(Sales & s, const double ar[], int n);

    // 대화식 버전 : 
    // 1, 2, 3, 4 분기별 판매액 자료를 대화식으로 획득하여
    // s의 sales 멤버를 저장한다
    // 평균값, 최대값, 최소값을 계산하여 저장한다
    void setSales(Sales & s);

    // s 구조체에 들어 있는 모든 정보를 출력한다
    void showSales(const Sales & s);
}
*/
// 첫 번째 파일은 이 이름 공간을 포함하는 헤더 파일이다. 
// 두 번째 파일은 원형이 제공된 세 함수들을 정의하기 위해 그 이름 공간을 학장하는 소스 코드 파일이다.
// 세 번째 파일은 두 개의 Sales 구조체를 선언한다.
// 세 번째 파일에서는 한 구조체에 값을 제공하기 위해 setSales()의 대화식 버전을 사용하고, 또 하나의 구조체레 값을 제공하기 위해 setSales()의 비대화식 버전을 사용한다.
// 또한 세 번째 파일에서 showSales()를 사용하여 두 구조체의 내용을 출력해야 한다.
