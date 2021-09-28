#include <iostream>

namespace a
{
    int my_var(20);
}

namespace b
{
    int my_var(10);
}

int main()
{
    using namespace std;
    // using namespace a;
    // using namespace b;
    using std::cout;

    cout << "hello" << endl;
    // cout << a::my_var << endl;
    // cout << b::my_var << endl;
    {
        using namespace a;
        cout << my_var << endl;
    }

    {
        using namespace b;
        cout << my_var << endl;
    }
}