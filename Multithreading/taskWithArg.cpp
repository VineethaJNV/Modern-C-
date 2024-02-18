#include <iostream>
#include <thread>
#include <future>

int Operation(int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += i;
    }
    return sum;
}
int main()
{
    std::future<int>result = std::async(Operation, 10);
    std::cout<<"main thread continues execution"<<std::endl;

    auto sum = result.get(); //will main thread to wait
    std::cout<<"sum = "<<sum<<std::endl;
}