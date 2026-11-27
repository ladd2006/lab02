#include <iostream>
#include <string>

int main() {
    // Считываем имя пользователя из консоли
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Вывод персонального приветствия
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
