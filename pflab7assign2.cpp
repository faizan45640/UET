#include<iostream>
using namespace std;

//Problem 1
/*void Diamondshape(int n);
void Conicalshape(int n);
int main(){

  cout<<"Enter the height: ";
        int height;
        cin>>height;
        Diamondshape(height);
        cout<<endl;
        Conicalshape(height);
}
void Diamondshape(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=(2*i)-1 ; j++ ){
            if(j==1 || j==(2*i)-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
       
    }
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=(2*i)-1 ; j++ ){
            if(j==1 || j==(2*i)-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Conicalshape(int n){
   for(int i=n ; i>=1 ; i--){
    for(int j=1 ; j<=(n-i) ; j++){
        cout<<" ";
    }
    for(int j=1 ; j<=2*i-1 ; j++){
        cout<<"*";
    }
    

    cout<<endl;
   }
    for(int i=1 ; i<=n ; i++){
    for(int j=1 ; j<=(n-i) ; j++){
        cout<<" ";
    }
    
    for( int j=1 ; j<=2*i-1 ; j++){
        cout<<"*";
    
    }

    
   cout<<endl;
}}*/


//Problem 2--------------------------------------
/*bool PowerfulNum(int n);
int main(){
int number;
      cout<<"Enter the number you want to check if it is powerful: ";
      cin>>number;
      if(PowerfulNum(number)){
        cout<<"It is a powerful number";
      }
      else{
        cout<<"It is not a powerful number";
      }
}
bool PowerfulNum(int n){
   int originalnum=n;
   int digit=0;
   int count=0;
   int power=0;
   int sum=0;
for(n ; n>0 ; n=n/10  ) // Removing last digit
 
   { //For counting the total digits
      
    count++; //Counting the digits until n becomes zero
   }

   n=originalnum; 
   
   power=count; //power is equal to the digits counted in loop above
   while(n!=0){
    int result=1;
    
        digit=n%10; //Extracting last digits
        n=n/10;  //removing last digit
       
        for(int i=1 ;i<=power ; i++){
            result=result*digit;
        }
        sum=sum+result;
   }
   if(sum==originalnum){
    return true;
   }
   else{
    return false;
   }

}*/



//Probelm 3------------------------------------------
/*void AllPowerfulNum();
int main(){
    cout<<"All three digit powerful numbers are: "<<endl;
       
        
        AllPowerfulNum();
}
void AllPowerfulNum(){
for(int i=100 ; i<=999 ; i++){
    int n=i;
    int originalnum=n;
   int digit=0;
   int count=0;
   int power=0;
   int sum=0;
for( n ; n>0 ; n=n/10  ) // Removing last digit
 
   { //For counting the total digits
      
    count++; //Counting the digits until n becomes zero
   }

   n=originalnum; 
   
   power=count; //power is equal to the digits counted in loop above
   while(n!=0){
    int result=1;
    
        digit=n%10; //Extracting last digits
        n=n/10;  //removing last digit
       
        for(int i=1 ;i<=power ; i++){
            result=result*digit;
        }
        sum=sum+result;
   }
   if(sum==originalnum){
    cout<<originalnum<<endl;
   }
   
}
}*/

//Problem 4-------------------
/*void primenumbers(int n);
int main(){
    cout<<"How many prime numbers do you want to check: ";

      int limit;
      cin>>limit;
     primenumbers(limit);
}
void primenumbers(int n){
int p=0;
    for (int  i=2; p <= n; i++) {
        int factors = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                factors++;
            }
        }
        if (factors == 2) {
            cout << i << endl;
            p++;
           

    }
    if(p==n){
        break;
    }

    }
}*/

//Problem 5------------------------------------------
/*void series(int n1 ,int n2 , int );
int main(){
    int n1 , n2 , range;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Series iteration: ";
    cin>>range;
    
    series(n1 , n2 , range);
}
void series(int n1 , int n2, int range){
    int result=0;
    int count=0;
 if(range>=3){
    cout<<"Fibonacci series: "<<n1 <<", "<<n2<<"";
    for(int i=1 ; count<=range ; i++){

        result=n1+n2;
        cout<<", "<<result;
        count++;
        if(count+1==range){
            cout<<" and ";
        }
        if(count==range){
            break;
        }
        n1=n2;
        n2=result;
        result=n1*n2;
        cout<<", "<<result;
        n1=n2;
        n2=result;
        count++;
         if(count+1==range){
            cout<<" and ";
        }
        if(count==range){
            break;
        }

    }}
    else{
        cout<<"Iteration should be greater than 2";
    }

 }*/

 //Problem 6----------------------
 /*void sumofdigits(int n);
 int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
sumofdigits(n);
 }
 void sumofdigits(int n){
    int originalnum=n;
    int sum=0;
    int digit=0;
    int remain=0;
    int count=0;
  do{
    n=originalnum; //n=sum
    while(n>0){
        n=n/10; //removing last digit
        count++; //counting the numbe rof digits in number
        
    }
    n=originalnum;
    for(int i=1 ; i<=count ; i++){ //This loops executes for number of digits in the number
         digit=n%10; //extracts the last digit from number
          n=n/10; //removes the last digit from number
         sum=sum+digit; //sums the digits of number one by one
         
    }
    cout<<"Sum of "<<originalnum<<" is "<<sum<<endl;
  
   originalnum=sum; //Now the next number is eqaul to the sum
   sum=0; //sum should be zero before making new sum
   remain=originalnum/10; //if remain is equal to zero then we have obviously a one digit number
 }
 
 while(remain>0);
 }*/

 //problem 7-------------------------------
 void addition(int a , int b){
    cout<<"Sum of two number is: "<<a+b<<endl;
}
void subtraction(int a , int b){
    cout<<"Subtraction of two numbers is: "<<a-b<<endl;
}
void multiplication(int a , int b){
    cout<<"Multiplication of two numbers is: "<<a*b<<endl;
    
}
void division(int a ,int b){
    float result=a/b;
    cout<<"Divsion of two numbers is " <<result<<endl;
}
int main(){
    int choice;
    do
    {
      
        
     
    
    int n1 , n2;
    cout<<"Enter two numbers "<<endl;
    cin>>n1>>n2;
    cout<<"Press 1 for Addition"<<endl;
    cout<<"Press 2 for Subtraction"<<endl;
    cout<<"Press 3 for Multiplication"<<endl;
    cout<<"Press 4 for Division"<<endl;
    cout<<"Press 5 to quit"<<endl;
    cin>>choice;
    switch(choice)
   { case 1:
    addition(n1 , n2);
    break;
    case 2:
    break;
    subtraction(n1 , n2);
    case 3:
    multiplication(n1 , n2);
    break;
    case 4:
    division (n1 , n2);
    break;
    case 5:
    cout<<"Thanks for using mini calculator";
    default:
    cout<<"Invalid choice";}}
    while (choice!=5);
    
    
}

