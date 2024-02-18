#include <iostream>
#include <thread>
#include <future>

int Operation(int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += i;
        std::cout<<"."<<std::endl;
    }
    return sum;
}
int main()
{
    using namespace std::chrono_literals;
    std::future<int>result = std::async( Operation, 10);
    std::this_thread::sleep_for(1s);
    std::cout<<"main thread continues execution"<<std::endl;

    if(result.valid())
    {
        auto sum = result.get(); //will main thread to wait
        std::cout<<"sum = "<<sum<<std::endl;
    }
}