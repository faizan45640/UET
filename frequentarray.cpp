#include<iostream>
using namespace std;

int main(){
    const int size=10;
    int arr[size];
    cout<<"Enter 10 numbers  to be stored in the array: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The Array is: "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //frequent
    int count=0;
    int repeat=0;
    int freq=0;
    int maxcount=0;
    for(int i=0 ; i<size ; i++){
        count=0;
        for(int j=i ; j<size ; j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>maxcount){
                freq=arr[i];
                maxcount=count;
                
            }
            }
           
        }
         if(count>maxcount){
                freq=arr[i];
                maxcount=count;
                
            }
            
    }
    cout<<"The most repeated element is: "<<freq;
}