// 히서 은생은, ATM을 하나 더 추가했을 때에는 상황이 어떻게 변하는지 알고 싶어한다. 
// 두 개의 큐를 사용하도록 이 장에 있는 시뮬레이션을 수정하라.
// 제2 큐보다 제1 큐에 대기하고 있는 고객 수가 적으면, 고객은 줄이 짧은 제1 큐에 줄을 서고, 그렇지 않으면 고객은 제2 큐에 줄을 선다고 가정한다.
// 평균 대기 시간을 1분으로 하면, 시간당 평균 고객 수는 얼마가 될까? (이것은 비선형 문제이다. ATM 대수를 2배로 늘린다고 해서, 최고 대기 시간이 1분인 시간당 처리 고객의 수가 2배가 되지 않는다.) (queue.h, queue.cpp, bank3.cpp)