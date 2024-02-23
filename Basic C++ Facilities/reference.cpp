#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout<<"x :"<<x<<endl;

    int &ref = x;
    cout<<"&ref : "<<ref<<endl;

    ref = 20;
    cout<<"&ref : "<<ref<<endl;
    cout<<"x :"<<x<<endl;
    x = 30;
    cout<<"x :"<<x<<endl;
     cout<<"&ref : "<<ref<<endl;



}