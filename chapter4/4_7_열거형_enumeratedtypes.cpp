#include <iostream>
#include <typeinfo>

// int computeDamage(int weapon_id)
// {
//     if (weapon_id == 0) //sword
//     {
//         return 1;
//     }

//     if (weapon_id == 1) // hammer
//     {
//         return 2;
//     }

// }

enum Color // user-defined types
{   // 배정을 안하면 차례대로 0 1 2 3 4 .. 
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE = 10,
    COLOR_GREEN 
};

enum Feeling
{
    HAPPY,
    JOY,
    BLUE

};
int main()
{
    using namespace std;

    int color_id = COLOR_RED;

    Color my_color = static_cast<Color>(3); // 캐스팅; 이렇게 잘 안함
    
    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{COLOR_RED};

    cout << paint << " " << house << " " << apple << endl; 


    return 0;
}