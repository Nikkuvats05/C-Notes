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

    void broke(){
        cout<<"Bro Bro"<<endl;
    }
};
int main(){
    dog d;
    d.speak();
}
