#include<iostream>

void doB() {
    std::cout << "in doB\n";
}

void doA() {
    std::cout << "starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}

int main(){
    std::cout << "starting main()\n";
    doA();
    std::cout << "Ending main\n";
    return 0;
}