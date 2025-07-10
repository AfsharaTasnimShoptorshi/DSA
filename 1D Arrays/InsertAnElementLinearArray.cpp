#include<iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,pos;
    cin>>x>>pos;
    if(pos<0 || pos>n){
        cout<<"invalid"<<endl;
    }
    for(int i=n ; i>pos ; i--){
        arr[i]=arr[i-1];

    }
    arr[pos]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;}
