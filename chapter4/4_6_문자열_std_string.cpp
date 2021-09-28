#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    const char my_strs [] = "hello, world";
    const string my_hello("hello, world"); // = "hello, world" or {"hello, world"}

    string my_ID = "123";
 
    cout << my_hello << endl;
    cout << my_strs << endl;
    cout << my_ID << endl;

    cout << "your name ? : ";
    string name;
    // cin >> name; // 빈칸이 있으면 넘어가버림
    std::getline(std::cin, name); // 엔터 칠때까지 입력 받음

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "your age ? : ";
    string age;
    // cin >> age;
    std::getline(std::cin, age);

    cout << name << " " << age << endl; 

    return 0;
}