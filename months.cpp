// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/22/2021
// This is the Month program
// The user enters in the number of a month and the program tells them the month


#include <iostream>

int main() {
    // this function checks what month it is
    std:: string number;
    int monthAsInt;

    // input
    std::cout << "Enter in number (1-12): ";
    std::cin >> number;
    std::cout << "" << std::endl;

    monthAsInt = atoi(number.c_str());
    // process and output
    switch (monthAsInt) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Not a month. Enter a number between 1 and 12"
                      << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
