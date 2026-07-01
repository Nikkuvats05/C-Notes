#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printar(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

vector<int>findarraysum(vector<int>a ,int n,vector<int>b, int m ){

int i=n-1;
int j=m-1;
vector<int>ans;
int carry=0;

while(i>=0 && j>=0){
    int sum= a[i]+b[j]+carry;

    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;
    j--;
}
while(i>=0){
    int sum =a[i]+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;
}
while(j>=0){
    int sum=b[j]+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    j--;
}
while(carry!=0){
    int sum=carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    
}
    reverse(ans.begin(), ans.end());

return ans;

}


int main(){
 vector<int>a;
 a.push_back(1);
 a.push_back(2);
a.push_back(3);
a.push_back(4);

vector<int>b;
b.push_back(6);

int n=a.size();
int m=b.size();
/*
int i=n-1;
int j=m-1;

vector<int>ans;
int carry=0;

while(i>=0 && j>=0){
    int sum= a[i]+b[j]+carry;

    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;
    j--;
}
while(i>=0){
    int sum =a[i]+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;
}
while(j>=0){
    int sum=b[j]+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    j--;
}
while(carry!=0){
    int sum=carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    
}
reverse(ans.begin(), ans.end());

for(int t=0; t<ans.size(); t++){
cout<<ans[t];
}
*/
for(int x:findarraysum(a,n,b,m)){
    cout<<x;
}


}