#include <iostream>

using namespace std;


int Add(int *a, int *b)
{
    return *a+*b;
}
int main()
{
    int a = 10;
    int b = 20;
    
    int sum = Add(&a, &b);
    cout<<sum<<endl;
}