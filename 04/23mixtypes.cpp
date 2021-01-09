// mixtypes.cpp -- 일종의 형태 혼합
#include <iostream>

struct antarctica_years_end
{
    int year;
    /* some really interesting data, etc. */
};

int  main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];   // 3개 구조의 배열
    trio[0].year = 2003;
    std::cout << trio ->year << std::endl;
    const antarctica_years_end * arp[3] = {&s01,&s02,&s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp; // C++ 11 자동 형태 추측
// 또는 const antarctica_years_end ** ppb = arp를 사용한다;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;
    return 0;
}