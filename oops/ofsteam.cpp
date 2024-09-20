#include <iostream>
#include<fstream>;
using namespace std;


int main (){

    vector <int> arr[5];

    cout<<"enter the input"<<endl;

    for(int i =0; i<5;i++){
        cin>>arr[i];
    }


    // open file 


    ofsteam fout;

    fout.open("sort.text");

    fout<<"originally sorted data"<<endl;
    for(int i =0; i<5;i++){
        fout<<arr[i];
    }
    cout<<endl;

    cout<<"sorted data"<<endl;

    sort(arr.begin(),arr.end());

    for(int i =0; i<5;i++){
        fout<<arr[i];
    }
    cout<<endl;
return 0;
}