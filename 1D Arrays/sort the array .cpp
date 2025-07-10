#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> sorted=arr;
    sort(sorted.begin(),sorted.end());

     if(arr==sorted){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
return 0;
     }
     int l=0,r=n-1;
    while(l < n-1 && arr[l] <= arr[l+1]){
        l++;
     }
     while(r>0 && arr[r]>=arr[r-1]){
        r--;
     }
     reverse(arr.begin()+l,arr.begin()+r+1);

    if(arr==sorted){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

return 0;}
