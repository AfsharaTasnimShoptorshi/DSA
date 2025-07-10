
#include <iostream>
#include <stack> // For using stack
using namespace std;

int main() {
    stack<int> st; // Create a stack of integers
    int option, value;

    while (true) {
        cout << "\n**** Stack Operations Menu ****\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Display top element\n";
        cout << "4. Check if stack is empty\n";
        cout << "5. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                // i) Push an element to the stack
                cout << "Enter value to push: ";
                cin >> value;
                st.push(value);
                cout << value << " has been pushed onto the stack.\n";
                break;
            case 2:
                // ii) Pop the top element from the stack
                if (!st.empty()) {
                    cout << "Popped element: " << st.top() << endl;
                    st.pop();
                } else {
                    cout << "Stack is empty! Cannot pop element.\n";
                }
                break;
            case 3:
                // iii) Display the top element of the stack
                if (!st.empty()) {
                    cout << "Top element: " << st.top() << endl;
                } else {
                    cout << "Stack is empty!\n";
                }
                break;
            case 4:
                // iv) Check if the stack is empty
                if (st.empty()) {
                    cout << "The stack is empty.\n";
                } else {
                    cout << "The stack is not empty.\n";
                }
                break;
            case 5:
                // Exit the program
                cout << "Exiting...\n";
                 default:
                cout << "Invalid option! Please try again.\n";
                return 0;

}        }
}
