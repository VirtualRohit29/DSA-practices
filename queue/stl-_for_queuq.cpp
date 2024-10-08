#include<iostream>
using namespace std;
#include<queue>

int main(int argc, char const *argv[])
{
    queue<int>q;
    q.push(5);
    q.push(6);
    q.push(7);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    return 0;
}
