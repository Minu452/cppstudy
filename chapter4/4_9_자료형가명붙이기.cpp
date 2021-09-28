#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    using namespace  std;
    typedef double distance_t;    // alias
    typedef double stanley_param;
    using stanley_param2 = int; // 이런식으로도 가능

    std::int8_t i(97);
    double     my_distance;
    distance_t home2work;
    distance_t home2school;
    stanley_param c_r;
    stanley_param c_a;

    vector<pair<string, int> > pairlist;
    stanley_param2 x = 2.1231;

    cout << x << endl;



    return 0;
}