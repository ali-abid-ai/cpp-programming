#include <iostream>
#include <vector>

class CircularQueue {
public:
    explicit CircularQueue(std::size_t capacity)
        : data(capacity), frontIndex(0), rearIndex(0), count(0) {}

    bool enqueue(int value) {
        if (isFull() || data.empty()) return false;
        data[rearIndex] = value;
        rearIndex = (rearIndex + 1) % data.size();
        ++count;
        return true;
    }

    bool dequeue(int& removed) {
        if (isEmpty()) return false;
        removed = data[frontIndex];
        frontIndex = (frontIndex + 1) % data.size();
        --count;
        return true;
    }

    bool isEmpty() const { return count == 0; }
    bool isFull() const { return count == data.size(); }

private:
    std::vector<int> data;
    std::size_t frontIndex;
    std::size_t rearIndex;
    std::size_t count;
};

int main() {
    CircularQueue queue(3);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << (queue.enqueue(40) ? "Enqueued 40\n" : "Queue is full\n");
    int value{};
    while (queue.dequeue(value)) std::cout << "Removed: " << value << '\n';
    return 0;
}