#include <iostream>

using namespace std;

int addTwoNumber(int num_a, int num_b)
{
    int sum = num_a + num_b;
    return sum;
}
void printHelloworld()
{
    cout << "HEllo world" << endl;
    
}
int main()
{
    

    int x(123); //initialization
    cout <<'before input x ' << x << endl;

    //cin >> x;

    // x = 5; //assignment
    
    printHelloworld();
    cout << "x is " << x << endl;
    cout << &x << endl;
    cout << "ab" << '\t' << "cdef" << endl;
    cout << addTwoNumber(4,5) << endl;
    return 0;
}