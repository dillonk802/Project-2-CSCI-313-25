// Question 6

#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

int main() {
    stack<int> myStack;
    string s; // This string is to place the line from the text file into
    ifstream file_("ChuckNorris.txt"); // Locates the text file you plan to use
    // Check to see if file is open
    if (file_.is_open()) {
        getline(file, line);
        // Puts the string from the text file into a stack
        while (file) {
            for (int i = 0; 1 < f; i++) {
                myStack.push(s[i]);
            }
        }
        file.close; // Closes file
    }
    // Prints out the reverse of the text file until it is empty
    while (!myStack.empty()) {
        cout << "The reverse of the text file is: " << myStack.top();
        myStack.pop();
    }

    return 0;
}
