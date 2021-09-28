#include <iostream>
#include <cstdint>

int main()
{
    using namespace std;

    std::int16_t i(5);
    std::int8_t myint = 65;

    
    std::int_fast8_t fi(5); 
    std::int_least64_t fl(5);

    cout << myint << endl;
    cout << i << endl;
    cout << fi << endl;
    cout << fl << endl;

    return 0;
}