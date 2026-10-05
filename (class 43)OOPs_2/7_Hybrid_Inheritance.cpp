#include <iostream>
using namespace std;

class animal{
    public:
    int age;
    int height;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class human{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class dog: public animal{
    public:

    void bark(){
        cout<<"Bro Bro"<<endl;
    }
};
class mix: public dog, public human{

};
// Animal and human are indipendent , dog and mix are connect to animal so heriracal 
// mix is connect to human also so multiple
// two type of inherotance so overall its HYBRID Inheritance

int main(){
    dog d;
    d.speak();

    mix rockey;
    rockey.bark();
    cout<<"Rockey age = "<<rockey.age<<endl;
}