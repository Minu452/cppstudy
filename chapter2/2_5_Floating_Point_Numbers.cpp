#include <iostream>
#include <iomanip>
#include <limits>


int main()
{
    using namespace std;

    float f(3.141592f);
    double d(3.141592);
    long double ld(3.141592);

    cout << sizeof(float) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(ld) << endl;

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;

    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;

    cout << f << endl;
    cout << std::setprecision(17);
    cout << f << endl;




    return 0; 
}