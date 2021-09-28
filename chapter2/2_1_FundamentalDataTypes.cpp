#include <iostream>

int main()
{
    using namespace std;

    bool bValue = true;
    char chValue = 65;
    float fValue = 3.141592f;
    double dValue = 3.141592; // double 은 float 보다 메모리를 2배 많이 씀 -> 더 정밀하다

    auto aValue = 3.141592; // double 자동 인식
    auto aValue2 = 3.141592f; // float 자동 인식

    int a((int)123); // direct initialization
    int b{3}; // uniform initialization, 객체지향이란 데이터 타입을 만들어 쓰는 것, direct, uniform initialization은 직접 만든 데이터 타입을 초기화 할 때 많이 씀
            // uniform initialization 이 더 엄밀함

    cout << sizeof(aValue) << endl;  // 8바이트
    cout << sizeof(aValue2) << endl; // 4바이트
    cout << a << endl; 
    cout << b << endl; 
    
    // 요새는 변수 사용 직전 선언을 함 -> 디버깅이 편함, 변수와 출력하는 부분이 묶여 있으면 팩토링이 편함
    return 0;
}