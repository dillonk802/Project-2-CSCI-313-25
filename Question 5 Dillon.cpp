// Question 5

#include <iostream>

using namespace std;

int main() {
    int array[] = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 5};
    stack <int> myStack;
    myStack.push(5);
    // These 2 loops are to run through the array
        for (int i = array.size(); i >= 0; i--) {
            for (int j = array.size() - 1); j >= 1; j--) {
                // If the 2 values are the same, the program will skip over it and continue with the next value
                if (array[i] != array[j]) {
                    continue;
                }
                // Put's the value of j into the stack
                if (array[i] > array[j]) {
                    myStack.push[j];
                }
            }
        }
        // Will print out the stack until it is empty
        while (!myStack.empty()){
            cout << "The longest increasing subsequence is: " << myStack.top() << " ";
            myStack.pop();
        }
    return 0;
}
