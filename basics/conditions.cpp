#include <iostream>

int main() {
    int number{};
    std::cout << "Enter an integer: ";
    if (!(std::cin >> number)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }
    if (number > 0) std::cout << "Positive\n";
    else if (number < 0) std::cout << "Negative\n";
    else std::cout << "Zero\n";
    std::cout << (number % 2 == 0 ? "Even\n" : "Odd\n");
    return 0;
}