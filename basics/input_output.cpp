#include <iostream>
#include <string>

int main() {
    std::string name;
    int semester{};
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your semester: ";
    if (!(std::cin >> semester)) {
        std::cerr << "Invalid semester.\n";
        return 1;
    }
    std::cout << "Hello, " << name << "! You are in semester " << semester << ".\n";
    return 0;
}