#include<iostream>
#include<iomanip>
using namespace std;
const int rows = 5;
const int col=3;

void input_data(string names[rows] , int marks[][col] );
void display_data(string names[rows] , int marks[][col]);
void quiz_max(string names[rows] , int marks[][col]);
void all_max(string names[rows] , int marks[][col]);
void search(string names[rows] , int marks[][col]);
void sort(string names[rows] , int marks[][col]);

int main(){
    cout<<right<<setw(15);
    string names[rows]={"N/A" , "N/A" , "N/A" , "N/A" , "N/A"};
    int marks[rows][col];
    int choice=0;
    input_data(names ,marks);
do
{
system("cls");
    cout<<"Choose one of the following options: "<<endl;
    cout<<"1. Dislpay the data"<<endl;
    cout<<"2. Display highest marks in each quiz"<<endl;
    cout<<"3. Show Overall Highest Marks"<<endl;
    cout<<"4. Search the data of a student"<<endl;
    cout<<"5. Sort the data of students (High to Low)"<<endl;
    cout<<"6. Quit"<<endl;
    cin>>choice;
system("cls");
    switch (choice)
    {
    case 1:
        display_data(names,marks);
        system("pause");
        break;
    case 2:
        quiz_max(names ,marks);
        system("pause");
        break;

    case 3:
        all_max(names ,marks);
        system("pause");
        break;
    case 4:
        search(names ,marks);
        system("pause");
        break;   
    case 5:
        sort(names , marks);
        system("pause");
        break;
    default:
        return 0;
        break;
    }
} while (choice!=6);
}




void input_data(string names[rows] , int marks[][col] ){
    for(int i=0 ; i<rows ; i++){
        cout<<"Enter Student "<<i+1<<" name: ";
        cin>>names[i];
        for(int j=0 ; j<col ; j++){
            cout<<"Quiz "<<j+1<<" marks of "<<names[i]<<": ";
            cin>>marks[i][j];
        }
        system("cls");
    }
}

void display_data(string names[rows] , int marks[][col]){
    cout<<"\t       ";
     for (int j = 0; j < col; j++) {
        cout <<   "Quiz " << j + 1 << "   ";
    }
    cout<<endl;
    for(int i=0 ; i<rows ; i++){
        cout<<left<<setw(10)<<names[i];
        for(int j=0 ; j<col ; j++){
            cout<<"    ";
            cout<<left<<setw(5)<<marks[i][j]<<" ";
        }
        cout<<endl;
    }

}


void quiz_max(string names[rows] , int marks[][col]){
    int max=0 , index=0;
     for(int i=0 ; i<col ; i++){
        index=0;
        max=marks[0][i];
        for(int j=0 ; j<rows ; j++){
              if(marks[j][i]>max){
                max=marks[j][i];
                index=j;
              }
        }
        cout<<"Quiz "<<i+1<<" Highest Marks:  "<<names[index]<<" : "<<max<<endl;
     } 
}
void all_max(string names[rows] , int marks[][col]){
    int sum=0 ;
    int max=0;
    int index=0;
    for(int i=0 ; i<rows ; i++){
         for(int j=0 ; j<col ; j++){
               sum=sum+marks[i][j];
               if(sum>max){
                 max=sum;
                 index=i;
               }
         }
         sum=0;
    }
    cout<<"Overall Highest Marks are of "<<names[index]<<" : "<<max<<endl;
}
void search(string names[rows] , int marks[][col]){
    
    string name;
    int index=-1;
    cout<<"\nEnter the name of the student you want to search: ";
    cin>>name;
    for(int i=0 ; i<rows ; i++){
        if(name==names[i]){
            index=i;
        }
        
    }


    for(int i=0 ; i<col && index>=0 ; i++){
        cout<<"Quiz "<<i+1<<" "<<marks[index][i]<<endl;
    }
    if(index==-1){
        cout<<"Name not found"<<endl;
    }
}

void sort(string names[rows] , int marks[][col]){
       int max=0 , index=0 , temp=0 ,sum=0 ;
       int sums[5];
     for(int k=0 ; k<rows ; k++){
        for(int m=0 ; m<col ; m++){
            sum=sum+marks[k][m];
            
        }
       sums[k]=sum;
       sum=0;
       
     }
     cout<<endl;
     
     for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows -1; j++) {
            if (sums[j] < sums[j + 1]) {
                int tempsum = sums[j];
                sums[j] = sums[j + 1];
                sums[j + 1] = tempsum;

                // Swap entire rows in the marks array
                for (int k = 0; k < col; k++) {
                    int tempmark = marks[j][k];
                    marks[j][k] = marks[j + 1][k];
                    marks[j + 1][k] = tempmark;
                }

                string tempname = names[j];
            names[j] = names[j + 1];
            names[j + 1] = tempname;



   
    
    
    
}
}}
display_data(names , marks);}