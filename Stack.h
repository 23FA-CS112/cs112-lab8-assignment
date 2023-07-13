/* Stack.h provides a (dynamic-array-based) Stack class.
 * Joel Adams, for CS 112 at Calvin University.
 *
 * Notes:
 * 1. Member mySize always contains the index of the next empty space in myArray
 *        (the index of the array element into which the next pushed item will
 * be placed).
 * 2. Sending push() to a full Stack throws the exception Stack::Overflow.
 * 3. Sending pop() or peekTop() to an empty Stack throws the exception
 * Stack::Underflow.
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <string>

// #include "StackException.h"
using namespace std;

typedef int Item;

class Stack {
public:
    Stack(unsigned capacity);
    Stack(const Stack& original);
    ~Stack();
    Stack& operator=(const Stack& original);

protected:
    void makeCopyOf(const Stack& original);

private:
    unsigned myCapacity;
    unsigned mySize;
    Item* myArray;
};

#endif
