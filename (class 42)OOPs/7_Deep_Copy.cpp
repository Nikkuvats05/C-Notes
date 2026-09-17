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
     h1.sethealth(90);
     h1.setlevel('A');
     char name[7]= "Babbar";
     h1.setname(name);

     h1.print();

     //Use default copy constructor

     hero h2(h1);
     h2.print();

     h1.name[0]='G';
     h1.print();

     h2.print();

}