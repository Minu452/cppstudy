#include <iostream>

using namespace std;

int main()
{
    //int var;
    //var = 7;

    int *ptr = new int;

    *ptr = 7; 
    // int *ptr = new int{ 7 };

    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "After delete" << endl;
    if (ptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;

    }

    
    // memory leak
    while (true)
    {
        int *ptr = new int;
        cout << ptr << endl;

        delete ptr; // 안하면 memory leak
    }


    return 0;
}