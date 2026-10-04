#include <iostream>
using namespace std;

class human{
    public:
    int age;
    int weight;

    private:
    int height;

    public:
    //fxn
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
};

class male:public human{

    public:
    string colour;
    int standard;

    //fxn
    int getweight(){
        return this->weight;
    }
    void setage(int a){
        this->age=a;
    }
};
int main(){
    male obj1;
    cout<<"Age is ="<<obj1.getage()<<endl;
    cout<<"weight is ="<<obj1.getweight()<<endl;
    cout<<"Colour is ="<<obj1.colour<<endl;

    obj1.setage(19);
    obj1.setweight(75);
    cout<<"Age is ="<<obj1.getage()<<endl;
    cout<<"weight is ="<<obj1.getweight()<<endl;
    
    //cant access height because it is private in base or parent class
    //cout<<obj1.height<<endl;

}