#include <iostream>
#include <cstring>
using namespace std;

class hero{
     public:
      //Properties
    char*name;
    int health;
    char level;
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
    //Static fxn
    int static random(){
        return timetodone;
    }
   
};

    int hero::timetodone=10;
  
int main(){
    cout<<hero::random()<<endl;

}

  