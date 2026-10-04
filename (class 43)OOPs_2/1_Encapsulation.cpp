#include <iostream>
using namespace std;

class student{
    //encapsulation sb data member private h 
    private:
    int age;
    int height;

    public:
    int getage(){
        return this->age;
    }
};
int main(){
    student Ram;
    cout<<"Ram age is = "<<Ram.getage()<<endl;
}
