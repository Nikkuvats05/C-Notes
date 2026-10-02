#include <iostream>
#include <cstring>
using namespace std;

class hero{
     public:
      //Properties
    char*name;
    int health;
    char level;
    //Static keyword/ data type
    static int timetodone;
   

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char ch){
        level=ch;
    }
    void sethealth(int h){
        health=h;
    }
    void setname(char name[]){
        strcpy(this->name, name);
    }
   
};

    int hero::timetodone=10;
  
int main(){
    cout<<hero::timetodone<<endl;

    hero h1;
    //not reccomand , bad practice
    cout<<"h1 ka time = "<<h1.timetodone<<endl;
}    