#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void game(int s, int e){
    int guess=(log2(e))+2;
    cout<<"I will guess the no which is in your mind in less than "<<guess<<" "<<" tries "<<endl<<endl;
     int tries =1;
   // string st;
    cout<<"Press enter after guessing a number and to start the game "<<endl;
    //cout<<"Type = ";
    cin.get();
    while(s<=e){
        int mid= s+(e-s)/2;
        
        int n;
        cout<<"If your guess number is = "<<mid<<" "<<"type 1 , if smaill than "<<mid<<" "<< "type 0 and if greater than "<<mid<<" "<< "type 2"<<endl;
        cout<<"type = ";
        cin>>n;

        if(n==1){
            cout<<endl<<"Congrats I found your number in "<<tries<<" "<<"tries "<<"thats "<<mid<<endl<<endl;
            return ;
        }
        else if(n==0){
            e=mid-1;
            tries++;
        }
       else if(n==2){
            s=mid+1;
            tries++;
        }
        else {
            cout << "Invalid input! Please enter 0, 1, or 2." << endl;
        }
    }
    
    cout << "Hmm... It seems like you changed your number in between!" << endl << endl;
    }

int main(){
    cout<<"Welcome to the number guess game"<<endl<<endl;
    cout<<"In which range does your number lie ? Type the max number. ex: 1 to 1000 then type 1000, if 1 to 10000 then type 10000"<<endl;
    cout<<"Your max number can be any +ve integer"<<endl;
   int max;
   cout<<"Max = ";
   cin>>max;
   cin.ignore();
   int s=1;
   int e=max;
   game(s,e);
   cout<<"Thank You!";
   
}
   
  
