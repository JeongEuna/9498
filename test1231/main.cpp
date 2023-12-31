//
//  main.cpp
//  test1231
//
//  Created by 정은아 on 2023/12/31.
//

#include <iostream>

int main() {
    // problem 2753 for testing
    int year;
    do {
        std::cin >> year;
    } while (year < 1 || year > 4000);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        std::cout << "1" << '\n';
    }
    else
        std::cout << "0" << '\n';
}
