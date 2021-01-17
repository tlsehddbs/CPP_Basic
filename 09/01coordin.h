// coordin.h -- 구조체 템플릿과 함수 원형
// 구조체 템플릿
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance;    // 원점으로부터의 거리
    double angle;       // 수평축으로부터의 각도
};
struct rect
{
    double x;   // 원점으로부터의 수평 거리
    double y;   // 원점으로부터의 수직 거리
};

// 원형
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif