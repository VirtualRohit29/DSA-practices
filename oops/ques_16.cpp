    #include <iostream>

using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};


class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

  
    bool isEmpty() const {
        return top == nullptr;
    }

   
    void push(int value) {   // function for push operation
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

  
    void pop() {  // function for pop operation
        if (!isEmpty()) {
            Node* temp = top;
            top = top->next;
            delete temp;
        } else {
            cout << "Stack is empty. Cannot pop.\n";
        }
    }


    int peek() const {              // peek fuction
        if (!isEmpty()) {
            return top->data;
        } else {
            cout << "Stack is empty. Cannot peek.\n";
            
        }
    }

 
    void display() const {           // declare print fuction
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            Node* current = top;
            cout << "Elements in the stack: ";
            while (current != nullptr) {
                cout << current->data << "--> ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() 
{
    Stack myStack;

    int choice;
    int value;

    while (true) {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                myStack.push(value);
                cout << value << " pushed onto the stack.\n";
                break;

            case 2:
                myStack.pop();
                cout << "Top element popped from the stack.\n";
                break;

            case 3:
                if (!myStack.isEmpty()) {
                    cout << "Top element: " << myStack.peek() << endl;
                } else {
                    cout << "Stack is empty. Cannot peek.\n";
                }
                break;

            case 4:
                myStack.display();
                break;

            case 5:
                cout << "Exiting the program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}