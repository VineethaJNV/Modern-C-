#include <iostream>

using namespace std;

int main()
{
    std::cout<<"I am vineetha"<<34<<56.0f<<60.0<<endl;

    string name;
    cout<<"ENter you name"<<endl;
    std::cin>>name;

    string full_name;
    cout<<"ENter you full_name"<<endl;
    std::cin>>full_name;
    
    cout<<"your full_name using cin"<<full_name<<endl;

    char f_name[40];

    cin.getline(f_name, 200, '\n');
    cout<<"your full_name using cin"<<f_name<<endl;


    return 0;
}