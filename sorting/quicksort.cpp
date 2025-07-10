#include<iostream>
using namespace std;
int part(int arr[], int s, int e){

    int pivot=arr[e];
    int index=s;

        for(int i=s;i<e;i++){
            if(arr[i]<pivot){
               int  temp=arr[i];
                arr[i]=arr[index];
                arr[index]=temp;
                index++;
            }}
           int  temp=arr[e];
            arr[e]=arr[index];
            arr[index]=temp;


    return index;
}

void quicksort(int arr[], int s,int e){
    if(s<e){
    int pivot=part(arr,s,e);
    quicksort(arr,s,(pivot-1));
    quicksort(arr,(pivot+1),e);}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,(n-1));

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;}
