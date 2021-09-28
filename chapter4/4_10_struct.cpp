#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height;
    float  weight;
    int    age;
    string name;
    void print()
    {
        cout << height << " " << weight << " " << age << " " << name;  // 구조체 안으로 기능 (함수)를 집어넣을 수 있음,
                                                                       // 멤버변수 직접 접근 가능
        cout << endl;
    } 
};
struct Employee
{
    short  id;   // 2 + (2) bytes : padding
    
    double wage; // 8 bytes  = 14 bytes
    struct Person person; // 구조체를 멤버로 가짐
    void print()
    {
        cout << id << " " << " " << wage << " "  << endl;  // 구조체 안으로 기능 (함수)를 집어넣을 수 있음,
        person.print();                                                               // 멤버변수 직접 접근 가능
        cout << endl;
    } 
};
// void printPerson(Person ps)
// {
//     cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//     cout << endl;
// }


int main()
{
    Person person{2.0, 100 , 20, "minu"}; // uniform initialization
  
    // Employee you = {.id = 1, .wage = 3000, {.height = 2.0, .weight = 100 , .age = 20, .name = "minu"} };
    Employee you = {1, 3000, person };

    you.print();
    cout << sizeof(Employee) << endl;

    return 0;
}