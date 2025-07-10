#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool swapped;
    for(int j=0;j<n-1;j++){
            swapped=false;
            for(int i=0;i<n-j-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
    swapped=true;
    }

    }
    if(!swapped){
        break;
    }


}}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsorted arr: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"sorted array: "<<endl;
    bubblesort(arr,n);
   for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;}
