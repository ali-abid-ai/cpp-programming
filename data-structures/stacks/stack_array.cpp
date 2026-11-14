#include <iostream>
#include <vector>

class Stack {
public:
    void push(int value) { values.push_back(value); }
    bool pop(int& removed) {
        if (values.empty()) return false;
        removed = values.back();
        values.pop_back();
        return true;
    }
    bool peek(int& top) const {
        if (values.empty()) return false;
        top = values.back();
        return true;
    }
    bool empty() const { return values.empty(); }
private:
    std::vector<int> values;
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    int value{};
    if (stack.peek(value)) std::cout << "Top = " << value << '\n';
    if (stack.pop(value)) std::cout << "Popped = " << value << '\n';
    if (stack.peek(value)) std::cout << "New top = " << value << '\n';
    return 0;
}