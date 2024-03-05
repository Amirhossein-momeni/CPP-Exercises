#include <iostream>

int girandeAdad(){
    std::cout << "enter an integer :";
    int input{};
    std::cin >> input;
    return input;
}

int main(){
    int number{girandeAdad()}; //nokte
    std::cout <<"double is : " << number * 2 << '\n';
    return 0;
}