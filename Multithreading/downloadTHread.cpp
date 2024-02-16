#include <iostream>
#include <vector>
#include <thread>


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
    std::thread DownloadThread(Download); //need to pass the address of the callable(Download() => is function call)
    DownloadThread.detach();
    std::cout<<"user started another operation"<<std::endl;
    if(DownloadThread.joinable())
    {
        DownloadThread.join();
    }
    // system("Pause"); specific to windows
    std::cin.get(); //waits fro user input like enter
    return 0;
}