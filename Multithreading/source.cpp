#include <iostream>
#include <vector>

std::vector<int> list;

void Download()
{

    std::cout<<"Download started!"<<std::endl;
    for(int i = 0; i < 500000000; i++){
        list.push_back(i);
    }
    std::cout<<"download finished"<<std::endl;
}


int main()
{
    std::cout<<"user started an operation"<<std::endl;
    Download();
    std::cout<<"user started another operation"<<std::endl;

    return 0;
}