#include <iostream>

// Функция, которую будем тестировать
int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero";
    }
    return a / b;
}

// Простая функция для демонстрации покрытия кода
int add(int a, int b) {
    return a + b;
}

int main() {
    // Примеры использования функций
    std::cout << "Result of division: " << divide(10, 2) << std::endl;
    std::cout << "Result of addition: " << add(5, 7) << std::endl;

    try {
        // Вызов функции с делением на ноль для демонстрации исключения
        std::cout << "Result of division: " << divide(8, 0) << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    }

    return 0;
}