#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout<<&x<<endl;

    int *ptr = &x;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    *ptr = 5;
    int y = *ptr;
    cout<<y<<endl;

    return 0;
}