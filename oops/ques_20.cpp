#include <iostream>
using namespace std;
void towercalculator(int N, int source, int help, int destination)
{
    if (N == 1)
    {
        cout << "move disk " << N << " from rod " << source << " to rod" << destination << endl;
        return;
    }

    towercalculator(N - 1, source, destination, help);
    cout << "move disk " << N << " from rod " << source << " to rod" << destination << endl;

    towercalculator(N - 1, help, source, destination);
}

int main(int argc, char const *argv[])
{
    int N;
    cout << "enter the no. of rings " << endl;
    cin >> N;
    towercalculator(N, 1, 2, 3);  // Assuming you have three rods labeled 1, 2, and 3
    
    return 0;
}
