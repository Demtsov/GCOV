#include <iostream>


int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero";
    }
    return a / b;
}


int add(int a, int b) {
    return a + b;
}

int main() {
   
    std::cout << "Result of division: " << divide(10, 2) << std::endl;
    std::cout << "Result of addition: " << add(5, 7) << std::endl;

    try {
        std::cout << "Result of division: " << divide(8, 0) << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    }

    return 0;
}
