#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& values, int target) {
    for (std::size_t i = 0; i < values.size(); ++i)
        if (values[i] == target) return static_cast<int>(i);
    return -1;
}

int binarySearch(const std::vector<int>& values, int target) {
    int left = 0, right = static_cast<int>(values.size()) - 1;
    while (left <= right) {
        const int middle = left + (right - left) / 2;
        if (values[middle] == target) return middle;
        if (values[middle] < target) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

int main() {
    const std::vector<int> values{3, 8, 12, 17, 21, 29, 34};
    int target{};
    std::cout << "Enter value to search: ";
    if (!(std::cin >> target)) return 1;
    std::cout << "Linear search index: " << linearSearch(values, target) << '\n';
    std::cout << "Binary search index: " << binarySearch(values, target) << '\n';
    return 0;
}