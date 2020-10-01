//
// Created by Rafael Arce Nazario on 9/30/20.
//

#ifndef STACK_H
#define STACK_H

typedef int stackElementType;
class Stack { // Stack class ADT
    // Reinitialize the stack.
    virtual void clear() = 0;

    // Push "it" onto the top of the stack
    virtual bool push(stackElementType it)  = 0;

    // Remove and return the element at the top of the stack
    virtual stackElementType pop()  = 0;

    // Return a copy of the top element
    virtual stackElementType topValue() const  = 0;

    // Return the number of elements in the stack
    virtual int length() const  = 0;

    // Return true if the stack is empty
    virtual bool isEmpty() const = 0;
};
/* *** ODSAendTag: Stack *** */



#endif //STACK_H
