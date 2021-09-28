#include <iostream>

int main()
{
    using namespace std;

    enum class Color
    {
        RED,
        BLUE
    };

    enum class Fruit
    {
        BANANA,
        APPLE
    };

    Color color = Color::RED;
    Color color2 = Color::BLUE;
    Fruit fruit = Fruit::BANANA;

    if (color == color2)
        cout << "color is fruit? " << endl;
    else 
        cout << "not same color" << endl;


    return 0;
}