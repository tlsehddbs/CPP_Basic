// 다음은 같은 구조체 선언이 있다고 가정하자.
/*
struct customer {
    char fullname[35];
    double payment;
}
*/
// 고객들을 나타내는 구조체들을 스택에 추가하고 삭제하는 프로그램을, Stack 클래스 선언을 이용하여 작성하라.
// 고객이 삭제될 때마다, 그 고객이 지불한 금액을 총 수입에 추가해야 하고, 그 총 수입을 보고해야 한다.
// Stack 클래스를 변경하지 않고 그대로 사용해야 한다.
// 다만 typedef 선언을 변경하여, Item용 undigned long 대신에 customer형이 되게 하라. (stack.h, stack.cpp, usestack.cpp)