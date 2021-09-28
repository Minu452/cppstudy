// integer - short(2byte), int(4byte), long(8byte), long long(8byte)
#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short s = 1; // 2 bytes = 2 * 8 = 16 bits
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl; // 부동 소수점에서 min 과 차이가 있음

    s = -32768;
    s = s - 1; // 32768 

    cout << s << endl; // overflow -> 표현할 수 있는 가장 큰 범위를 넘어가면 반대로

    // cout << sizeof(int) << endl;
    // cout << sizeof(long) << endl;
    // cout << sizeof(long long) << endl;

    return 0;
}