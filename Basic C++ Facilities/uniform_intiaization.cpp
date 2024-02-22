#include <iostream>

int main()
{
    int a1; //unitialized
    int a2 = 0;
    std::string s1;
    int a3(5);//direct intializatoin
    std::string s2("C++");

    char d1[8]; //unitialized
    char d2[8] = {'\0'};
    char d3[8] = {'a', 'b', 'c', 'd'}; //Aggregate intialization

    int *p1 = new int{};
    char *p2 = new char[8]{};
    char *p3 = new char[8]{"hello"};

    return 0;
}