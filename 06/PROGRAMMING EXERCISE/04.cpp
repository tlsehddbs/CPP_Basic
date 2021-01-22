// Benevolent Order of Programmers라는 외원제 인터넷 사이트에서는 실명이나 직한 또는 BOP 아이디로 자신을 나타낼 수 있다. 
// 회원 명부를 실명으로, 직함으로, BOP 아이디로, 또는 가입 회원이 지정한 방식에 따라 열람하는 프로그램을 작성하라. 
// 다음과 같은 구조체에 기초하여 프로그램을 작성하라
/*
// Benevolent Order of Programmers 회원 구조체
struct bop {
    char fullname{strsize};     // 실명
    char title{strsize};        // 직함
    char bopname{strsize};      // BOP 아이디
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
}; 
*/
// 이 구조체의 작은 배열을 만들고, 적당한 값으로 배열을 초기화하라. 
// 그리고 나서, 다음과 같은 선택 사항 중에서 어느 하나를 선택하여 회원 명부를 열람하는 루프를 만들어라.
/*
a. 실명으로 열람        b. 직함으로 열람
c. BOP 아이디로 열람    d. 회원이 지정한 것으로 열람
q. 종료
원하는 것을 선택하십시오 : a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
원하는 것을 선택하십시오 : d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
원하는 것을 선택하십시오 : q
프로그램을 종료합니다.
*/