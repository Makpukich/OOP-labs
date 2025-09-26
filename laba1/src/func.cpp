#include "func.h"
#include <string>
#include <cctype>


std::string toLower(const std::string& str) {
    std::string result = str;
    for (char& c : result) {
        c = std::tolower(static_cast<unsigned char>(c));
    }
    return result;
}

bool isAfraid(const std::string& day, int number) {
    std::string lowerDay = toLower(day);
    
    if (lowerDay == "понедельник") {
        return number == 12;
    }
    else if (lowerDay == "вторник") {
        return number > 95;
    }
    else if (lowerDay == "среда") {
        return number == 34;
    }
    else if (lowerDay == "четверг") {
        return number == 0;
    }
    else if (lowerDay == "пятница") {
        return number % 2 == 0;
    }
    else if (lowerDay == "суббота") {
        return number == 56;
    }
    else if (lowerDay == "воскресенье") {
        return number == 666 || number == -666;
    }
    
    return false;
}