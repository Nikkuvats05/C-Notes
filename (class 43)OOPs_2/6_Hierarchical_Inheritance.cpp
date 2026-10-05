#include <iostream>
using namespace std;

class A{
    public:

    void f1(){
        cout<<"Inside clasa A and f1 "<<endl;
    }
};

class B:public A{
    public:

    void f2(){
         cout<<"Inside clasa B and f2 "<<endl;
    }
};

class C:public A{
    public: 

    void f3(){
         cout<<"Inside clasa C and f3 "<<endl;
    }
};

int main(){
    A obj1;
    obj1.f1();

    B obj2;
    obj2.f1();
    obj2.f2();

    C obj3;
    obj3.f1();
    obj3.f3();

    //cant access because C only connects to A
    //obj3.f2();
}
