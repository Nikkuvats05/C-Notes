#include <iostream>
using namespace std;

    int getsum(int *arr, int n){
        int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+arr[i];
        }
        return sum;
    }

    int main(){
        int n;
        cout<<"value of n is = "<<endl;
        cin>>n;

        int *arr= new int[n];

        cout<<"enter the value of elements = "<<endl;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans= getsum(arr,n);
        cout<<"sum of all elements os array is = "<<ans<<endl;

}
