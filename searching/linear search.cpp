#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }}
        return -1;

}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result=linearsearch(arr,n,key);

    if(result==-1){
        cout<<"elementy is not found"<<endl;
    }
    else{
        cout<<"elementy is found at "<<result+1<<endl;
    }

return 0;}
