#include<iostream>

void amirhossein() {
    std::cout << "hello amirhossein\n";
}

void masoud() {
    std::cout << "hello masoud\n";
}

void kianoosh() {
    std::cout << "hello khorzoo\n";
}

int main() {
    std::cout << "start main()\n";
    masoud();
    kianoosh();
    amirhossein();
    std::cout << "end main()\n";
    return 0;
}