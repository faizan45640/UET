#include<iostream>
using namespace std;

int main(){
    const int size=10;
    int arr[size];
    int uniquearr[size];
    int uniquesize=0;
    cout<<"Enter 10 numbers: "<<endl;
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<"The Given Array is: "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    

    for(int i=0 ; i<size ; i++){
        bool isUnique=true;
        for(int j=0 ; j<uniquesize ; j++){
            if(arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            uniquearr[i]=arr[i];
            uniquesize++;
        }
    }
    cout<<"The unique new array is: "<<endl;
    for(int i=0 ; i<uniquesize-1 ; i++){
        cout<<uniquearr[i]<<" ";

    }
}