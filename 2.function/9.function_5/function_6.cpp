#include <iostream>

int girandeAdd(){
    std::cout << "enter an integer : ";
    int add{};
    std::cin >> add ;
    return add;
}

void printKonande(int number){
    std::cout <<"doubled is : " << number * 2 <<'\n';
}

int main(){
    int number{ girandeAdd() };
    printKonande(number);
    return 0;
}