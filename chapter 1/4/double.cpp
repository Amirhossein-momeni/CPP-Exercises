#include <iostream>
int main()
{
    std::cout << "Enter The Integer Then Press The Enter : ";
    int number{ };
    std::cin >> number;
    std::cout << "Double That Number Is : " << number * 2 << "\n";
    return 0;
}