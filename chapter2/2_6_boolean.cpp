#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}

int main()
{
    using namespace std;

    bool b1 = true; // copy initialization
    bool b2(false); // direct 
    bool b3{ true }; // uniform ini .. 
    b3 = false; 

    cout << !b3 << endl;
    cout << !b1 << endl;

    if (3 > 1)
    {
        cout << "this is true" << endl;
        cout << "true second line" << endl;
    }
    else
    {
        cout << "this is false" << endl;
    }

    cout << isEqual(1, 1) << endl;
    cout << isEqual(3, 1) << endl;

    bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << "your input : " << b << endl;

    return 0;
}