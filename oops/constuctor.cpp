#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age, roll_no;

    

    student(string name , int age , int roll_no)
    {
       this-> age=age;
        this->name=name;
        this->roll_no=roll_no;
    }

    void dispaly(){
        cout<< name <<" "<<age<<" "<<roll_no<<endl;
    }

    student(const student &other){
        name=other.name;
        age=other.age;
        roll_no=other.roll_no;
    }

     
    

};

int main(){
    student a1=student("rohit",18,155);
    a1.dispaly();
    
    student a2=a1;
     a2.dispaly(); 


return 0;
   
   
} 