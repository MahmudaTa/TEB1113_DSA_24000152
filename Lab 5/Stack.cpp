#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next_ptr;

    Node(string name, Node* next_ptr = nullptr) {
        this->name = name;
        this->next_ptr = next_ptr;
    }
};

class Stack {
private:
    Node* head; // Top of the stack

public:
    Stack() {
        head = nullptr;
    }

    ~Stack() { 
        while (head) {
            Node* temp = head;
            head = head->next_ptr;
            delete temp;
        }
    }

    void push(const string& name) {
        Node* node = new Node(name, head);
        head = node;
    }

    void pop() {
        if (!head) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = head;
        head = head->next_ptr;
        delete temp;
    }

    string peek() const {
        if (!head) {
            cout << "Stack is empty." << endl;
            return "";
        }
        return head->name;
    }

    void display_stack() const {
        Node* current = head;
        if (!current) {
            cout << "Stack is empty" << endl;
            return;
        }
        while (current != nullptr) {
            cout << current->name << " -> ";
            current = current->next_ptr;
        }
        cout << "nullptr" << endl;
    }

    Node* get_head() const {
        return head;
    }
};

int main() {
    Stack stack;

    stack.push("Ali");
    stack.push("Ahmed");
    stack.push("Alee");

    cout << "Stack contents: ";
    stack.display_stack();

    cout << "Top of stack: " << stack.peek() << endl;

    stack.pop();
    cout << "After pop: ";
    stack.display_stack();

    cout << "Top of stack: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    cout << "After popping all: ";
    stack.display_stack();

    stack.pop();

    return 0;
}