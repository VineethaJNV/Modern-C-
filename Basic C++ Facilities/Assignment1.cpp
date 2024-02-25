#include <iostream>

using namespace std;

int main()
{
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;
    int y = 10;
    ref_x1 = y;
    // cout<<ref_x1<<endl;
    // cout<<x<<endl;
    // ref_x2 = y;
    //  cout<<ref_x2<<endl;
    // cout<<MAX<<endl;

    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    // const int * const ptr3 = &x ;
    ptr1 = &y;
    cout<<*ptr1<<endl;
    // *ptr1 = 5;
    // ptr2 = &y;
    // *ptr2=100;
    // ptr3 = &y;
    // ptr3 = &y;
    // *ptr3 = 1000;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    // cout<<*ptr3<<endl;

    const int *ptr3 = &MAX ;
    int *ptr4 = &MAX ;
    
    const int &r1 = ref_x1 ;
    int &r2 = ref_x2 ;
    
    int *&p_ref1 = ptr1 ;
    const int*&p_ref2 = ptr2 ;

}