#include <iostream>

using namespace std;

void PrintVal(const int *ptr)
{
    *ptr = 20;
    cout<<"x in PrintVal"<<*ptr<<endl;
}
int main()
{
    const int x = 10;
    
    PrintVal(&x);
    cout<<"x in main"<<x<<endl;

}