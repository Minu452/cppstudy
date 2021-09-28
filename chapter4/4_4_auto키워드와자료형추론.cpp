#include <iostream>

//template 

auto add(int x, int y)
{
    return x + (double)y;
}

int main()
{
    using namespace std;

    auto a = 123; // 형추론, auto 키워드
    auto d = 123.0;
    auto c = 1+2.0;

    auto result = add(1,2);

    return 0;
}