#include<iostream>

int add( int a, int b ){
    return a + b;
}

int main(){
    int a{ 5 };
    int b{ 6 };
    std::cout << add(a, b) << '\n';
    std::cout << add(9, 10) << '\n';
    std::cout << add(11 + 12 , 22 * 3);
    return 0;
}