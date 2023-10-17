#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;



bool isPrefect(int n){
int  originalnum=n;
int factors=0;
int sum=0;
for(int i=1 ;i <n ;i++){
    if(n%i==0)
    sum=sum+i;
}

if(sum==originalnum){
        
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(isPrefect(num)){
        cout<<num<< " Number is perfect";
    }
    else{
        cout<<num<<" Number is Not perfect";
    }
}