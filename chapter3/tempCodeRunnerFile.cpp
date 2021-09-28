#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    const unsigned char opt0 = 1 << 0;  
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;


    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    unsigned char items_flag = 0;

    cout << "NO ITEM" << bitset<8>(items_flag) << endl;

    // item0 on
    items_flag |= opt0;   
    cout << "ITEM0 obtained " << bitset<8>(items_flag) << endl;

    // item3 on 
    items_flag |= opt3;
    cout << "item3 obtained " << bitset<8>(items_flag) << endl;

    // item3 lost
    items_flag &= ~opt3;
    cout << "item3 lost " << bitset<8>(items_flag) << endl;

    // has item1 ?
    if(items_flag & opt1)
    {
        cout << "Has item1" << endl;
    }
    if(items_flag & opt3)
    {
        cout << "Has item3" << endl;
    }

    return 0;


}