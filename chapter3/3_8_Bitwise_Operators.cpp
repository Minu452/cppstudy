#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    // << left shift
    // >> 
    // ~, &, |, ^

    
    unsigned int a = 0b1100;
    unsigned int b = 0b0110;

    cout << std::bitset<8>(a) << endl;
    cout << std::bitset<8>(~a) << " " << (~a) << endl;
    cout << std::bitset<8>(~a) << " " << (~a) << endl;
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

    cout << std::bitset<4>(a & b) << endl; //bitwise AND
    cout << std::bitset<4>(a | b) << endl; //bitwise OR
    cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR 
    
    a &= b;

    return 0;
}