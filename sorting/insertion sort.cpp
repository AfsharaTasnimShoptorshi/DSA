#include<iostream>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }}
void insort(int a[], int n){
    for(int i=1;i<n;i++){
    int    c=a[i];
      int  pre=i-1;
        while(pre>=0 && a[pre]>c){
        swap(a[pre],a[pre+1]);
        pre--;}

    a[pre+1]=c;}
    print(a,n);

}



int main(){
   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insort(a,n);
return 0;}

