#include <iostream>
#include <vector>
const int MAX_SIZE = 10;

class Stack {
  int top;
  std::vector<int> stack;
  int capacity;

public:
  Stack();
  bool isEmpty();
  bool isFull();
  void display();
  void push(int value);
  void pop();
  void size();
  // initialize stack with specific size
  void init(const int n) {
    capacity = n;
    stack.resize(capacity);
  }
};
Stack::Stack() { top = 0; }
bool Stack::isEmpty() { return (top == 0); }

bool Stack::isFull() { return (top == capacity); }

void Stack::display() {
  for (int i = 0; i < top; i++) {
    std::cout << stack[i] << " ";
  }
  std::cout << std::endl;
}

void Stack::push(int value) {
  if (Stack::isFull()) {
    std::cout << "The stack is overflow!" << std::endl;
    return;
  }
  stack[top] = value;
  top++;
}

void Stack::pop() {
  if (Stack::isEmpty()) {
    std::cout << "The stack is empty!" << std::endl;
    return;
  }
  top--;
}
void Stack::size() {
  std::cout << "The size of the stack is " << top << '.' << std::endl;
}
int main() {
  Stack s;
  s.init(MAX_SIZE);
  int value;
  int i = 0;
  int operation;
  while (1) {
    std::cout << "press 1: push, press 2: pop, press 0: exit" << std::endl;
    std::cin >> operation;
    if (operation == 1) {
      std::cout << "The " << i << " element push into the stack:" << std::endl;
      std::cin >> value;
      s.push(value);
      s.display();
      i++;
    }
    if (operation == 2) {
      std::cout << "pop one element out of stack" << std::endl;
      s.pop();
      s.display();
    }
    if (operation == 0) {
      std::cout << "exit...";
      return 0;
    }

    // test if the stack is empty
    if (s.isEmpty() != 0) {
      std::cout << "The stack is empty" << std::endl;
    }
    // test if the stack is full
    if (s.isFull() != 0) {
      std::cout << "The stack is full." << std::endl;
    }
  }
  return 0;
}
