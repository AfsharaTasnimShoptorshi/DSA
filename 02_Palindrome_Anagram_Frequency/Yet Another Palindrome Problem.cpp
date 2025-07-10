
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-1-i]){
                cnt=1;
                break;
            }
        }



for(int i=0;i<n;i++){
for(int j=i+2;j<n;j++){

            if(a[i]==a[j]){
              flag=1;
              break;
            }
}

            }


        if(flag==1 || cnt==0){
            cout<<"YES\n";
        }
        else if(flag==0){
            cout<<"NO\n";
        }
    }
return 0;}

