#include <iostream>

#define PRINT_AMIR

int main(){

    #ifdef PRINT_AMIR   
    std::cout << "amir\n";
    #endif

    #ifndef KIANOUSH
    std::cout << "kianoush\n";
    #endif

    return 0;
}