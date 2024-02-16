#include <iostream>
#include <future>
#include <thread>

int Add(int a, int b)
{
    return a+b;
}

int Square(int a)
{
    return a*a;
}

int main()
{
    std::packaged_task<int(int, int)> taskAdd(Add);
    taskAdd(2,3);
    std::future<int>ft = taskAdd.get_future();
    auto result = ft.get();
    std::cout<<result<<std::endl;

    std::packaged_task<int(int)> taskSquare(Square);
    taskSquare(2);
    std::future<int>ft1 = taskSquare.get_future();
    auto result2 = ft1.get();
    std::cout<<result2<<std::endl;


}