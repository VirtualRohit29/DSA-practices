#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
    stack<int> st1;
    stack<int> st2;
public:
    // Queue is empty or not
    bool empty() {
        return st1.empty() && st2.empty();
    }

    // Push element into the queue
    void push(int x) {
        st1.push(x);
        cout<<x<<" : " << "is pushed "<<endl;
    }

    // Pop element from the queue
    int pop() {
        if (empty()) {
            cout << "Queue is empty, cannot pop." << endl;
            return -1;  // Returning -1 to indicate an error
        } else if (!st2.empty()) {
            int element = st2.top();
            st2.pop();
            return element;
        } else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            int element = st2.top();
            st2.pop();
            return element;
        }
    }

    // Peek at the front element of the queue
    int peek() {
        if (empty()) {
            cout << "Queue is empty, nothing to peek." << endl;
            return -1;  // Returning -1 to indicate an error
        } else if (!st2.empty()) {
            return st2.top();
        } else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);

    cout << "Front element: " << q.peek() << endl;  // Should print 10

    cout << "Popped element: " << q.pop() << endl;  // Should print 10
    cout << "Popped element: " << q.pop() << endl;  // Should print 11

    cout << "Front element after pops: " << q.peek() << endl;  // Should print 12

    return 0;
}
