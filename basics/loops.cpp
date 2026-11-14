#include <iostream>

int main() {
    int limit{};
    std::cout << "Print numbers from 1 to: ";
    if (!(std::cin >> limit) || limit < 1) {
        std::cerr << "Please enter a positive integer.\n";
        return 1;
    }
    long long sum = 0;
    for (int i = 1; i <= limit; ++i) {
        std::cout << i << (i == limit ? '\n' : ' ');
        sum += i;
    }
    std::cout << "Sum = " << sum << '\n';
    return 0;
}