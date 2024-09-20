# include<iostream>

using namespace std;

// Function to concatenate the
// given array arr[] twice
void concatTwice(int* arr, int N)
{
	// Stores array after
	// concatenation
	int newArr[2 * N];

	// Loop to iterate arr[]
	for (int i = 0; i < N; i++) {
		newArr[i] = arr[i];
		newArr[i + N] = arr[i];
	}

	// Print Answer
    cout<<"new concante array"<<endl;
	for (int i = 0; i < 2 * N; i++) {
		cout << newArr[i] << " ";
	}
    cout<<endl;
}




int main()
{

    int arr[] = { 1, 2, 3 };
	int N = sizeof(arr) / sizeof(arr[0]);

	concatTwice(arr, N);


 
          int a[4],b[4],c[8],i,j;
          cout<<"ENTER THE ELEMENTS OF PARENT ARRAY:\n";
         
         for(i=0; i<8 ;i++)            //Loop for input
         {
                  cout<<"c["<<i<<"]=";
                  cin>>c[i];
         }
         cout<<endl; 
 
         for(i=0,j=0 ; j<8 ; i++,j+=2)
        {
                a[i]=c[j];
                b[i]=c[j+1];
        }
  
        cout<<"\nPRINT THE ELEMENTS OF ARRAY1:\n";
        for(i=0; i<4 ;i++)            //Loop for output
        {
                cout<<"b["<<i<<"]=";
                cout<<b[i]<<endl;
        }
 
        cout<<"\nPRINT THE ELEMENTS OF ARRAY2:\n";
        for(i=0; i<4 ;i++)            //Loop for output
       {
               cout<<"a["<<i<<"]=";
               cout<<a[i]<<endl;
       }
  
        return 0;
}