//
// Implementation of a stack using array
//

#ifndef ASTACK_H
#define ASTACK_H
#include <string>
#include <stdexcept>
#include "Stack.h"
using namespace std;

class AStack : public Stack {
private:
    stackElementType *stackArray;         // Array holding stack
    static const int DEFAULT_SIZE = 10;
    int maxSize;                          // Maximum size of stack
    int top;                              // First free position at top
public:
  // Constructors
  AStack(int size = DEFAULT_SIZE) : maxSize(size), top(0) {
    stackArray = new stackElementType[size]; // Create stackArray
  }

  // Returns a representation of the stack, starting with the top element
  string toString() const {
    string outputString;
    for (int i = top-1; i >= 0; i--) {
        outputString += to_string(stackArray[i]);
        outputString += " ";
    }
    return outputString;
  }

  ~AStack() { delete [] stackArray; }

  void clear() { top = 0; }

  // Push "it" onto stack
  bool push(stackElementType it) {
    if (top >= maxSize)
        throw std::out_of_range("trying to push() to a full stack");
    stackArray[top++] = it;
    return true;
  }


  // Remove and return top element
  stackElementType pop() {
    if (top == 0)
        throw std::out_of_range("trying to pop() from an empty AStack");
    return stackArray[--top];
  }

  // Return the value of the top element
  stackElementType topValue() const{
    if (top == 0)
        throw std::out_of_range("trying to get topValue() from an empty AStack");
    return stackArray[top-1];
  }

  int length() const { return top; }

  bool isEmpty() const { return top == 0; }
};


#endif //ASTACK_H
