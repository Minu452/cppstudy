#include  <iostream>

namespace Myspace1
{
    namespace InnerSpace
    {
        int doSomething(int a, int b)
        {
            return a + b;
        }
    }

    int myfunction()
    {
        return 0;
    }
}

// int doSomething(int a, int b)
// {
//     return a * b;
// }
using namespace std;
using namespace Myspace1;
using namespace Myspace1::InnerSpace;
int main()
{
    cout << doSomething(3, 4) << endl;
    cout << myfunction() << endl;
    // cout << doSomething(3, 4) << endl;

    return 0;
}