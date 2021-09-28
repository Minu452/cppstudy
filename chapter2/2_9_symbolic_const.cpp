#include <iostream>
#include "constants.h"

using namespace std;
void printNumber(const int my_number) // 파라미터가 바뀌지 않도록
{
    
    cout << my_number << endl;
}

int main()
{
    int number;
    cin >> number;

    const int special_number(number); // special number는 실행을 해봐야 아는 것 -> Runtime 상수
     

    constexpr  double gravity { 9.8 }; // 고정 숫자 표현, compile 할 때 결정되므로 compile 상수

    printNumber(123);

    double radius;
    cin >> radius;

    double circumstence = 2.0 * radius * constants::pi;

    cout << circumstence << endl;

    return 0;
}