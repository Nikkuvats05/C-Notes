#include <iostream>
using namespace std;

class animal{
    public:
    int age;
    int height;

    void bark(){
        cout<<"Bro Bro"<<endl;
    }
};
class human{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class mix: public animal, public human{

};

int main(){
   
    mix rockey;
    rockey.bark();
    cout<<"Rockey age = "<<rockey.age<<endl;
    rockey.speak();
}