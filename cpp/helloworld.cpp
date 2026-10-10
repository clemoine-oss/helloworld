/**
 * @file helloworld.cpp
 * @author Cliff Lemoine (clemoine@proton.me)
 * @brief First c-plus-plus I've written in a long time...
 * @version 0.1
 * @date 2026-09-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
#include <thread>

/** 
 * @brief A simple function to demonstrate threading
 * @param seconds The number of seconds to sleep
 */
void sleepTest (int seconds = 5) {
    std::cout << "sleepTest() called\n";
    std::cout << "Sleeping for " << seconds << " seconds...\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
    std::cout << "Done sleeping!\n";
}

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main ( int argc, char *argv[] )
{
    std::cout << "Hello World!\n";
    std::cout << "argc = " << argc << "\n";

    // foreach item in the argument array, output to stdout
    // ndx{} is an initializer - the empty set defaults to 0. alternativ to using =
    for ( int ndx{}; ndx != argc; ++ndx ) {
        std::cout << "argv[" << ndx << "] = " << argv[ndx] << "\n";
    }


    // let's try a few basics beyond stdout
    std::cout << " Let's try a few basics beyond stdout\n";

    std::cout << "sleepTest() called in a thread\n";   
    std::thread t1(sleepTest, 4);

    std::cout << "sleepTest() called in main()\n";   
    sleepTest(3);
    
    t1.join();

    std::cout << "Press enter to exit...\n";
    std::cin.get();
    
    return 0;
}