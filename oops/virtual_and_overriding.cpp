#include <iostream>
using namespace std;

class Animal{
public:

void speak(){
    cout<<"moo..m0..m00..moo"<<endl;
}

};

class Donkey:public Animal{
   public:

void speak(){
    cout<<"dechuu... dechuu... dechuuu.."<<endl;
} 
};

int main(){  // public class main 

    Animal*p;


    p = new Donkey();

    p->speak();

    


}