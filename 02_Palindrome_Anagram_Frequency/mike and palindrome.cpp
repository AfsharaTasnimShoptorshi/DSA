#include<iostream>
#include <string>

using namespace std;
int main(){
    int cnt=0;
    string s;
    cin>>s;

int    len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){

            cnt++;
        }
    }
    if(cnt==1 || cnt==0 && len%2==1){
        cout<<"YES";
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;}
