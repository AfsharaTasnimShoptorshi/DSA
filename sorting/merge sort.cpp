#include<iostream>
using namespace std;
int merg(int arr[],int l,int m,int r){
    int i=l;
    int j=m+1;
    int k=l;
 int temp[r+1];
        while(i<=m && j<=r){
           if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
           }
           else{
            temp[k]=arr[j];
            k++;
            j++;
           }

        }
        while(i<=m){
            temp[k]=arr[i];
            i++;
            k++;
        }
        while(j<=r){
            temp[k]=arr[j];
            j++;-
            k++;
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i];
        }
}

void mergesort(int arr[],int l,int r){

    if(l<r){
       int m=(l+r)/2;
       mergesort(arr,l,m);
       mergesort(arr,(m+1),r);
        merg(arr,l,m,r);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n ;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,(n-1));
    for( int i=0;i<n ;i++){
        cout<<arr[i];
    }
return 0;}
