#include <iostream>

struct Node {
    int data;
    Node* next;
    explicit Node(int value) : data(value), next(nullptr) {}
};

void append(Node*& head, int value) {
    Node* node = new Node(value);
    if (head == nullptr) { head = node; return; }
    Node* current = head;
    while (current->next != nullptr) current = current->next;
    current->next = node;
}

void display(const Node* head) {
    for (const Node* current = head; current != nullptr; current = current->next)
        std::cout << current->data << (current->next ? " -> " : " -> nullptr\n");
    if (head == nullptr) std::cout << "List is empty.\n";
}

void clear(Node*& head) {
    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    Node* head = nullptr;
    append(head, 10); append(head, 20); append(head, 30);
    display(head);
    clear(head);
    return 0;
}