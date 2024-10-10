#include <iostream>

#include <queue>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    int k;
    cout << "enter the elements " << endl;
    cin >> k;
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(5);

    int z =q.size();
    cout<<"element without reversal"<<endl;
    while(z--)
    {
        cout<<q.front()<<" : ";
        q.push(q.front());
        q.pop();
    }
      cout<<endl;

    // making stack for putting k leents in it
    stack<int> st;
    while (k--)
    {
        st.push(q.front());
        q.pop();
    }
     
     // note the remaining elements 
    int n = q.size();

    
     // againg filling queue with stack elements
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    // again pushing the remaining elements into the same queue
    while (n--)
    {
        q.push(q.front());
        q.pop();
    }

   

    // printing  element

    int x = q.size();
    cout << "element with reversal" << endl;
    while (x--)
    {
        cout << q.front() << " : ";
        q.push(q.front());
        q.pop();
    }

    return 0;
}
