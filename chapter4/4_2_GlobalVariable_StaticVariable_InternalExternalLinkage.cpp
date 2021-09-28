// 전역변수는 왠만하면 사용x
// local 변수를 많이 사용해야함 - Linkage가 없다
// c++ 파일 여러개가 있는데 변수선언한 것을 외부 c++ 파일에서 사용할 수 있는 것을 External Linkage 라고 함
// 변수가 흩어지면 안좋음

#include <iostream>
#include "myconstant.h"

using namespace std;

int value = 123;

void doSomething()
{
    static int a = 1; // 전역으로 선언한 것과 결과는 같음, 변수 a 메모리가 static 이라는 것, 초기화를 반복하지 않음

    ++a;
    cout << a << endl;
}

int main()
{
    cout << value << endl;

    int value = 1; // local var
    
    cout << ::value << endl; // 다른 지역에 있는 변수 가져다 쓰기
    cout << value << endl;

    doSomething();
    doSomething();
    
    cout << Constants::pi << endl;

    return 0;
}

