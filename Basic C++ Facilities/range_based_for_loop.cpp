#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<" "<<endl;
    for(int &x : arr)
    {
        cout<<x<<" ";
    }
    cout<<" "<<endl;
    for(const int x : arr)
    {
        cout<<x<<" ";
    }

    cout<<"\nUsing 2 pointers\n";
    int *begin = &arr[0];
    int *end = &arr[4];
    while(begin != end){
        cout<<*begin<<" ";
        ++begin;
    }
    
}