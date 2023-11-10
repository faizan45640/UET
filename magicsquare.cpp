#include<iostream>
using namespace std;
const int row=3;
const int col=3;

bool ismagicmatrix(int square[3][3]);

int main(){
    int square[3][3];
    int input;
    //input matrix
    cout<<"Input the following Data of the matrix"<<endl;
    for (int i = 0; i < row; i++){
        for(int j=0 ; j<col ; j++){
            cout<<"Row No "<<i+1<<" Column No "<<j+1<<endl;
            cin>>input;
            if((input>0 && input<10)){
            square[i][j]=input;
            }
            else{
            j--;
            cout<<"Enter a number from 1 to 9 please";
            }
        }
         
    }
    
   bool result= ismagicmatrix(square);
   cout<<  (result ? "The square is Magic" : "The Square is not Magic" ) ;
}

bool ismagicmatrix(int square[3][3]){
    
    //CHECK SUM OF ALL 3 ROWS
    int sum=0 , sum1=0 , sum2=0 , sum3=-1;
    int sums[3]={0 , 0 , 0};
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            sum=sum+square[i][j];
        }
        sums[i]=sum;
        sum=0;
    }
    if(sums[0]==sums[1] && sums[1]==sums[2]){
      sum1=sums[0];

    }
    else{
        return 0; //returns false without further checking
    }
    //CHECK SUM OF ALL 3 COLUMNS
      int columnsums[3]={0 , 0 ,0};
    for(int i=0 ; i<col ; i++){
        for(int j=0 ; j<row ; j++){
            sum=sum+square[j][i];
        }
    columnsums[i]=sum;
    sum=0;
    }
    if(columnsums[0]==columnsums[1] && columnsums[1]==columnsums[2]){ 
       sum2=columnsums[0];
    }
    else{
        return 0;
    }
    //CHECK SUM OF BOTH DIAGONALS
    int diagonal1sum=0;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++ ){
        if(i==j)
        diagonal1sum=diagonal1sum+square[i][j];
        }
    }
    int diagonal2sum=square[0][2]+square[1][1]+square[2][0];
    if(diagonal1sum==diagonal2sum)
      sum3=diagonal1sum;
    else
    return 0;
    if(sum1==sum2 && sum2==sum3)
    return 1;
    else
    return 0;
}
