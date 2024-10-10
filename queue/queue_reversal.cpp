#include<iostream>
using namespace std;
#include<queue>
#include<stack>

int main(int argc, char const *argv[])
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(5);

    int n =q.size();
    cout<<"element without reversal"<<endl;
    while(n--)
    {
        cout<<q.front()<<" : ";
        q.push(q.front());
        q.pop();
    }
      cout<<endl;

    // pushing queue element sin stack
    stack<int>st;
    while ((!q.empty()))
    {
        st.push(q.front());
        q.pop();
    }

    //againg filling queue with reversed elements 
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
\

    // printing reversed element
    

    int x =q.size();
      cout<<"element with reversal"<<endl;
    while(x--)
    {
        cout<<q.front()<<" : ";
        q.push(q.front());
        q.pop();
    }

 

    



    return 0;
}
