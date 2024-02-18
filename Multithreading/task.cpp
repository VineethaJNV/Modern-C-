#include <iostream>
#include <future>
#include <thread>

void Download()
{
    using namespace std::chrono_literals;
    for(int i = 0; i < 10; i++){
        std::cout<<".";
        std::this_thread::sleep_for(1s);
    }
}
int main()
{
    std::future<void> result = std::async(Download);
    // Download();
    std::cout<<"main continues"<<std::endl;
    result.get();

}