#include <iostream>
#include <vector>

using namespace std;


int main()
{
    std::vector<int> list1 = {1,2,3,4,5};
    std::vector<int> list2 = list1;
    for(int i = 0; i < list1.size(); i++)
    {
        list1.push_back(0);
    }

    for(int i = 0; i < list2.size(); i++){
        std::cout<<list2[i]<<std::endl;
    }
    return 0;
}