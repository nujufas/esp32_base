#include <iostream>
#include <thread>

extern "C" void app_main(void) {
    while(true) {   
        std::cout<<"Hello World"<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
}