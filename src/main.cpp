#include <iostream>
#include <string>
#include "func.h"

int main() {
    std::string day;
    int number;
    
    std::cout << "Введите день недели на русском: ";
    std::getline(std::cin, day);
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    bool afraid = isAfraid(day, number);
    std::cout << afraid;
    
    
    return 0;
}