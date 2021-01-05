// 세계 인구와 미국(또는 본인이 희망하는 국가)의 현재 인구수를 요구하는 프로그램을 작성하라. 
// 작성한 정보를 long long형 변수에 저장하라. 전 세계 인구에서 미국(또는 본인이 희망하는 국가) 인구수가 차지하는 비중을 나타내 보아라. 
/* 이때, 결과물은 다음과 같은 형태로 나타난다.
세계 인구수를 입력하시오 : 6898758899
미국의 인구수를 입력하시오 : 310783781
세계 인구에서 미국이 차지하는 비중은 4.50492%이다.
*/

#include <iostream>

int main()
{
    using namespace std;

    long long World_Population, US_Population;
    cout << "세계 인구 수를 입력하시오 : ";
    cin >> World_Population;
    cout << "미국의 인구 수를 입력하시오 : ";
    cin >> US_Population;

    double Population_Ratio = (double (US_Population) / double (World_Population)) * 100;   // 형변환 필요 : 안했을 때 그 전에서 숫자가 짤림
    cout << "세계 인구에서 미국이 차지하는 비중은 " << Population_Ratio << "%이다." << endl;

    return 0;
}