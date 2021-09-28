#include <iostream>

int main()
{
    using namespace std;

    // short circuit evaluation

    int x = 1;
    int y = 2;

    if (x == 1 && y++ == 2)
    {
        // do something
    }
    cout << y << endl;

    // // logical NOT
    // bool x = true;
    // bool y = false;

    // cout << (x || y) << endl;

    // cout << (x && y) << endl;

    // bool hit = true;
    // int health = 10;

    // if (hit == true && health < 20)
    // {
    //     cout << " die " << endl;
    // }
    // else
    // {
    //     health -= 20;
    // }

    return 0;
}