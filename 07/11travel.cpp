// travel.cpp -- 함수와 구조체
#include <iostream>
struct travel_time
{
    int hours;
    int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
    using namespace std;
    travel_time day1 = {5, 45};     // 5시간 45분
    travel_time day2 = {4, 55};     // 4시간 55분

    travel_time trip = sum(day1, day2);
    cout << "이틀간 소요시간 : ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "사흘간 소요시간 : ";
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / Mins_per_hr;
    return total;
}

void show_time(travel_time t)
{
    using namespace std;
    cout << t.hours << "시간 " << t.mins << "분\n";
}