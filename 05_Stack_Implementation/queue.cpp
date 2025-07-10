#include <iostream>
#include <queue> // For using the queue class
using namespace std;

int main() {
    queue<int> qu; // Create a queue of integers
    int option, value;

    while (true) {
        cout << "\n**** Queue Operations Menu ****\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Display front element\n";
        cout << "4. Display rear element\n";
        cout << "5. Check if queue is empty\n";
        cout << "6. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                // i) Push an element into the queue
                cout << "Enter value to push: ";
                cin >> value;
                qu.push(value);
                cout << value << " has been pushed into the queue.\n";
                break;
            case 2:
                // ii) Pop the front element from the queue
                if (!qu.empty()) {
                    cout << "Popped element: " << qu.front() << endl;
                    qu.pop();
                } else {
                    cout << "Queue is empty! Cannot pop element.\n";
                }
                break;
            case 3:
                // iii) Display the front element of the queue
                if (!qu.empty()) {
                    cout << "Front element: " << qu.front() << endl;
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 4:
                // iv) Display the rear (back) element of the queue
                if (!qu.empty()) {
                    cout << "Rear element: " << qu.back() << endl;
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 5:
                // v) Check if the queue is empty
                if (qu.empty()) {
                    cout << "The queue is empty.\n";
                } else {
                    cout << "The queue is not empty.\n";
                }
                break;
            case 6:
                // Exit the program
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid option! Please try again.\n";
        }
    }

    return 0;
}
