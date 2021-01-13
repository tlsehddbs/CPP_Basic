// ifelseif.cpp -- if else if 
#include <iostream>
const int Fave= 27;
int main()
{
    using namespace std;
    int n;

    cout << "1부터 100까지 범위에서 하나의 수를 알아맞히는 게임입니다.\n";
    cout << "내가 좋아하는 수는 무엇일까요? : ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "그것보다 큽니다. 무엇일까요? : ";
        else if (n > Fave)
            cout << "그것보다 작습니다. 무엇일까요? : ";
        else
            cout << "맞았습니다. 정답은 " << Fave << "입니다.\n";
    } while (n != Fave);
    return 0;
}