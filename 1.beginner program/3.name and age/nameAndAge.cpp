#include<iostream>
#include<string>

int main()
{
    std::cout << "please tell me your name and age :";
    std::string name{};
    int age{};
    std::cin >> name >> age;
    std::cout << "Hello " << name << "! you are " << age << " years old.\n";

    return 0;
}