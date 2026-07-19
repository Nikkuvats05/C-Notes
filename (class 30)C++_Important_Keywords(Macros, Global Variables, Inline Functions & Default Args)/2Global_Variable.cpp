#include <iostream>
using namespace std;

int score=15;

void a(int &a){
    cout<<"Score in a = "<<score<<endl;
}

void b(int b){
    cout<<"Score in b = "<<score<<endl;
    score++;
}

int main(){
    int i=5;
    a(i);
    b(i);
     cout<<"Score in main = "<<score<<endl;
}