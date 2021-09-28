#include <iostream>

namespace work1::work11::work111
{
    int a = 1;
    int doSomething()
    {
        return a += 3;
    }
}

namespace work2
{
    int a = 5;
    int doSomething()
    {
        return a += 5;
    }
    
} // namespace work2



int main()
{
    using namespace std;

    int apple = 5;

    cout << apple << endl;

    work1::work11::work111::a;
    int bb;
    bb = work1::work11::work111::doSomething();

    cout << bb << endl;

    work2::a;
    int b;
    b = work2::doSomething();

    {
        int apple = 1;
        cout << apple << endl;
    } // {} 변수가 살아남는 범위를 최대한 줄이는 것이 좋음 = 객체지향 방식

    cout << apple << endl;



    return 0;
} 
