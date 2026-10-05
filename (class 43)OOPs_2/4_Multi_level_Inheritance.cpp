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
class dog: public animal{
    public:

    void bark(){
        cout<<"Bro Bro"<<endl;
    }
};
class buldog: public dog{

};

int main(){
    dog d;
    d.speak();

    buldog rockey;
    rockey.bark();
    cout<<"Rockey age = "<<rockey.age<<endl;
}
