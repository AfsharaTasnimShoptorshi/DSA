
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int x){
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(mid<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result = binarySearch(arr,n,x);
    cout<<result<<endl;

return 0;}
