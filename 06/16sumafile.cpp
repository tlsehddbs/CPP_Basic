// sumafile.cpp -- 배열 매개변수를 사용하는 함수
#include <iostream>
#include <Fstream>      // 파일 I/O 지원
#include <cstdlib>      // exit() 지원 
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;        // 파일 입력 처리하기 위한 객체
    cout << "데이터 파일의 이름을 입력하시오 : ";
    cin.getline(filename, SIZE);
    inFile.open(filename);      // inFile를 파일에 연결한다
    if (!inFile.is_open())      // 파일을 여는 데 실패하면
    {
        cout << filename << " 파일을 열 수 없습니다." << endl;
        cout << "프로그램을 종료합니다.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;      // 읽은 항복의 개수

    inFile >> value;        // 첫 번째 값을 얻는다
    while (inFile.good())   // 입력이 양호하고 EOF가 아닌 동안
    {
        ++count;            // 항목 개수 하나 추가
        sum += value;       // 누계를 계산한다
        inFile >> value;    // 다음 값을 받는다
    }
    if (inFile.eof())
        cout << "파일 끝에 도달했습니다.\n";
    else if (inFile.fail())
        cout << "데이터 불일치로 입력이 종료되었습니다.\n";
    else 
        cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
    if (count == 0)
        cout << "데이터가 없습니다.\n";
    else 
    {
        cout << "읽은 항목의 계수 : " << count << endl;
        cout << "합계 : " << sum << endl;
        cout << "평균 : " << sum / count << endl;
    }
    inFile.close();     // 파일 처리 종료
    return 0;
}