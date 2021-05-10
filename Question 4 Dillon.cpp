// Question 4

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> myStack; // Creates the stack
    // Puts values into the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);
    myStack.push(8);
    cout << "myStack: ";
    // Prints the stack on the screen
    while(!myStack.empty()) { // Prints out the top value of the stack until the stack is empty
        cout << myStack.top() <<;
        myStack.pop();
    }
    // Relist all the values in the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);
    myStack.push(8);
    // Deletes the last value in the stack and adds a new value
    myStack.pop();
    myStack.pop();
    myStack.push(9);
    myStack.push(10);
    while(!myStack.empty()) {
        cout << myStack.top() <<;
        myStack.pop();
    }
    return 0;
}
