#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    try {

        int x, y, z;
        cout << "Enter  x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;

        cout << "Enter z: ";
        cin >> z;

        if (y == x) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        
        double R = z / (x - y);

   
       cout << "Result R: " << R << endl;
    }
    
    catch (const exception& e)
    {
        
        cerr << "Exception caught: " << e.what() << endl;
    }
    
  

    return 0;
}