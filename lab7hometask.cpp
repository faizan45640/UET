#include<iostream>
using namespace std;

//By Faizan (2023-CS-622)

//Question 1
/*void fibonacci(int n);
int main(){
    cout<<"Enter a number: ";
    int number;
    cin>>number;
    fibonacci(number);
}
void fibonacci(int n){
    int result=0 , n1=0 , n2=1;
    cout<<result<<endl;
    for(int i=1 ; i<=n ; i++){
        result=n1+n2;
        cout<<result<<endl;
        n2=n1;
        n1=result;
        
        
    }
}*/

//Question 2
/*bool isPalindrome(int n){
  int digit=0;
  int remaining=0;
  int originalnum=n;
  int reverse=0;

  
  while(n!=0){
        digit=n%10; //Extracting the last digit from any integer
        reverse= (reverse*10)+digit; //Reversing the given digits with an increment to the nth position i.e unit , tenth etc 
        n=n/10; //Removing the last digit
  } 
  if(originalnum==reverse){
    return true;
  }
  else
  {
    return false;
  }
  
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(isPalindrome(number)){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
}*/




//Question 3
/*void fizzBuzz(int n);

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    fizzBuzz(num);
}

void fizzBuzz(int n){
    for(int i=1 ; i<=n ; i++){
        
        if(i%3==0 && i%5!=0){
            cout<<"Fizz"<<endl;
        }
        
        else if(i%5==0 && i%3!=0){
            cout<<"Buzz"<<endl;
        }
        
        else if (i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
         else{
            cout<<i<<endl;
        }
       
        
    }
}*/


//Question 4
/*void addition (int , int);
void subtraction (int , int);
void  multiplication (int , int);
void division (int , int);

int main(){
    int choice , n1 , n2;
    cout<<"Enter two numbers "<<endl;
    cin>>n1>>n2;
    cout<<"Press 1 for Addition"<<endl;
    cout<<"Press 2 for Subtraction"<<endl;
    cout<<"Press 3 for Multiplication"<<endl;
    cout<<"Press 4 for Division"<<endl;
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
    default:
    cout<<"Invalid choice";}
}

void addition(int a , int b){
    cout<<"Sum of two number is: "<<a+b;
}
void subtraction(int a , int b){
    cout<<"Subtraction of two numbers is: "<<a-b;
}
void multiplication(int a , int b){
    cout<<"Multiplication of two numbers is: "<<a*b;
    
}
void division(int a ,int b){
    float result=a/b;
    cout<<"Divsion of two numbers is " <<result;
}*/

//Question 5
/*#include<iostream>
using namespace std;
char cal_grade(int);
int main() {
    // Write C++ code here
    int marks_subject;
    char  grade;
    cout<<"Enter your marks out of 100: ";
    
    
    cin>>marks_subject;
    if(marks_subject>=0 && marks_subject<=100)
    {grade=cal_grade(marks_subject);
    cout<<"Your grade is: "<<grade;
    }
    else
    cout<<"Invalid Marks";
    
    

    return 0;
}

char cal_grade(int marks){
    if(marks<=100 && marks>=90){
        return 'A';
    }
    else if(marks<90 && marks>=80){
        return 'B';
    }
    else if(marks<80 && marks>=70){
        return 'C';
    }
    else if(marks<70 && marks>=60){
        return 'D';
    }
    else if(marks<60 && marks>=45){
        return 'E';
    }
    else { 
        return 'F';
    }
}
*/

//Question 6
/*void printPattern(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
   int rows;
cout<<"Enter the number of rows :";
cin>>rows;
printPattern(rows);
return 0;
}*/

