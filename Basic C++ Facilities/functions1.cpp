#include <iostream>



void printHello()
{
    std::cout<<"Hello !"<<std::endl;
}
int calcSum(int a, int b)
{
    return a+b;
}
int main()
{
    int a = 10;
    int b = 20;
    int sum = calcSum(a, b);
    printHello();
    std::cout<<"sum is : "<<sum<<std::endl;
    return 0;

}