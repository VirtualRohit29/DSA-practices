#include<iostream>
using namespace std;
#include<queue>

int main(int argc, char const *argv[])
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(5);

    int n =q.size();
    while(n--)
    {
        cout<<q.front()<<" : ";
        q.push(q.front());
        q.pop();
    }

    return 0;
}
