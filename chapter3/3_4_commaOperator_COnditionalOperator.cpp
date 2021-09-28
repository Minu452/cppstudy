#include <iostream>

int main()
{
    using namespace std;

    // comma operator
    int x = 3;
    int y = 10;
    int z;

 

    z = (x, y);

    cout << z << endl;

    // conditional operator (arithmetric if)

    bool onSale = false;

    const int price = (onSale == true)? 10 : 100;


    // if (onSale)
    //     price = 10;
    // else
    //     price = 100;

    cout << price << endl;
    

    cout << ((x % 2 == 0) ? "even" : "odd") << endl;




    return 0;
}