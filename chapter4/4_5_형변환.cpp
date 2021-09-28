#include <iostream>
#include <typeinfo>

int main()
{
    using namespace std;

    float a = 123.0f;
    double d = a; // numeric promotion 
    cout << typeid(a).name() << endl;
    cout << typeid(d).name() << endl;

    return 0;
}