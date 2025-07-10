#include<iostream>
using namespace std;
#define MAX 1000
class Stack{
    int top;
public:
    int arr[MAX];
    Stack(){
    top=-1;
    }
    bool push(int data){
        if(top>=(MAX-1)){
            cout<<"overflow"<<endl;
            return false;
        }
        arr[++top]=data;
        cout<<data<<endl;
        return true;

    }
int pop(){
    if(top<0){
        cout<<"underflow"<<endl;
        return -1;
    }
    int popelement=arr[top--];
    return popelement;

}
int peek(){
    if(top<0){
        cout<<"underflow"<<endl;
        return -1;
    }
    return arr[top];
}
bool isEmpty(){
    return (top<0);
}
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }


    return 0;
}
