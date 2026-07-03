#include <iostream>
using namespace std;

void print(int *P){
    cout<<"print fxn = " << *P << endl;
}

void update(int *P){
    *P=*P+1;
     P=P+1;
}

int getsum(int arr[], int n){
    cout<<"size of arr is = " << sizeof(arr) << endl;
    // sizeof(arr) will give the size of pointer not the array. kyuki array ko function me pass krte time wo pointer me convert ho jata hai.
    // so sizeof(arr) will give the size of pointer not the array.
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){

    int ar[5]={1,2,3,4,5};
    int *p=&ar[0];
    print(p);
    cout<<"before update address: "<<p<<endl;
    cout<<"before update value: "<<*p<<endl;
    update(p);
    cout<<"after update address: "<<p<<endl;
    cout<<"after update value: "<<*p<<endl;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=getsum(arr,10);
    cout<<"sum = "<<sum<<endl;

    int partsum = getsum(arr+3,7);
    cout<<"part sum = "<<partsum<<endl;
    //Ye benifit h arr ka pointer me convert hoke jane ka hm partial kaam bhi kr skte h.
    // arr+3 ka matlab h arr ke 4th element se start krna. and 7 ka matlab h 7 elements ka sum krna. 
    //so ye 4th element se start krke 7 elements ka sum karega.

 }