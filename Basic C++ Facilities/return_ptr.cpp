#include <iostream>

using namespace std;


int Add(int *a, int *b, int *result)
{
    int sum = *a+*b;
    result = &sum;
    
    return *result;
}
int main()
{
    int a = 10;
    int b = 20;
    
    int sum = 0;
    sum = Add(&a, &b, &sum);
    cout<<sum<<endl;
}