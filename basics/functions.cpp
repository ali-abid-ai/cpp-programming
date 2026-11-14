#include <iostream>

int add(int first, int second) { return first + second; }

int main() {
    int first{}, second{};
    std::cout << "Enter two integers: ";
    if (!(std::cin >> first >> second)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }
    std::cout << "Sum = " << add(first, second) << '\n';
    return 0;
}