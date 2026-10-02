#include <iostream>
#include <cstring>
using namespace std;

class hero{
     public:

    //Constractor
    hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }

    //Parametric Constructor
    hero(int health){
        cout<<"this -> = "<<this<<endl;
        this-> health=health;
    }

    hero(int health, char level){
        this-> level= level;
        this-> health= health;
    }

    //Copy constructor
    hero(hero & temp){
       char* ch= new char[strlen(temp.name)+1];
       strcpy(ch, temp.name);
       this->name= ch;
        cout<<"copy constructor called "<<endl;
        this->health= temp.health;
        this->level= temp.level; 
    }

    //Destructor
    ~hero(){
        cout<<"Destructor called "<<endl;
    }

    void print(){
        cout<<endl;
        cout<<"[ "<<"Name is = "<<this->name<<", ";
        cout<<"health is = "<<this-> health<<", ";
         cout<<"level is = "<<this-> level<<" ]"<<endl;
          cout<<endl;
    }
   
    //Properties
    char*name;
    int health;
    char level;
   

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
int main(){
    hero h1;

    hero*h2= new hero();
    //Manually destructor calling
    delete h2;

}