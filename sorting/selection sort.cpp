
#include<iostream>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
}
void selectsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int minim =i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minim]){
                minim=j;
            }
        }
        swap(a[i],a[minim]);
    }
    print(a,n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectsort(a,n);
    return 0;
}
