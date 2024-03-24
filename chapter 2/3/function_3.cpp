#include<iostream>

int returnOne(){
    return 1;
}

int main(){
    std::cout << returnOne() << "\n";
    std::cout << returnOne() + 1 << "\n";
    std::cout << returnOne() + 2 << "\n";
    std::cout << returnOne() + 3 << "\n";
    std::cout << returnOne() + 4 << "\n";
    std::cout << returnOne() + 5 << "\n";
    std::cout << returnOne() + 6 << "\n";
    return 0;
}
