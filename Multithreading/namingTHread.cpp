#include <iostream>
#include <thread>
using namespace std;


void Process(){
    std::cout<<"I am a process"<<std::endl;
    std::cout<<"id of the process thread"<<std::this_thread::get_id()<<std::endl;
    for(int i = 0; i < 10; i++){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<i<<" ";
    }
}


int main() {
    std::thread t1(Process);
    std::cout<<t1.get_id()<<std::endl;
    pthread_setname_np(t1.native_handle(), "myThread");
    int chores = std::thread::hardware_concurrency();
    std::cout<<"chores = "<<chores<<std::endl;
    t1.join();  // Wait for the thread to finish

    return 0;
}
