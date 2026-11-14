#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& values) {
    for (std::size_t end = values.size(); end > 1; --end) {
        bool swapped = false;
        for (std::size_t i = 1; i < end; ++i) {
            if (values[i - 1] > values[i]) {
                int temporary = values[i - 1];
                values[i - 1] = values[i];
                values[i] = temporary;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    std::vector<int> values{8, 3, 5, 1, 4, 2, 9, 7};
    bubbleSort(values);
    for (int value : values) std::cout << value << ' ';
    std::cout << '\n';
    return 0;
}