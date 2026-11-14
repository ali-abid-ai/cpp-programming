#include <array>
#include <iostream>

int main() {
    std::array<int, 5> numbers{};
    std::cout << "Enter 5 integers: ";
    for (int& number : numbers) {
        if (!(std::cin >> number)) {
            std::cerr << "Invalid input.\n";
            return 1;
        }
    }
    int largest = numbers.front();
    long long sum = 0;
    for (int number : numbers) {
        if (number > largest) largest = number;
        sum += number;
    }
    std::cout << "Largest = " << largest << "\nAverage = "
              << static_cast<double>(sum) / numbers.size() << '\n';
    return 0;
}