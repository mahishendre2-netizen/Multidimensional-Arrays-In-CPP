//Mahi Shendre
//25070123504

#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    
    if(row<2){
        cout<<"Error: For comparision rows can not be less than 2.";
    }
    else{
        int m1[row][col];
   
    cout<<endl<<"Enter elements for matrix: "<<endl;
    for (int i=0 ; i<row;i++){
        for(int j=0;j<col;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"matrix 1 is: "<<endl;
    for (int i=0 ; i<row;i++){
        for(int j=0;j<col;j++){
            cout<<m1[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    //comparing
    cout<<endl<<"Result Of Comparision Between Firest 2 Rows Is:"<<endl;
    for(int j=0;j<col;j++){
        if(m1[0][j]==m1[1][j]){
        cout<<"Element "<< j+1 <<" of both rows is equal"<<endl;
        }
        else cout<<"Element "<<j+1<<" of both rows is not equal"<<endl;
    }
    }
return 0;
}

/* OUTPUT 
Sample 1
Enter number of rows: 1
Enter number of columns: 5
Error: For comparision rows can not be less than 2.

Sample 2
Enter number of rows: 3
Enter number of columns: 3

Enter elements for matrix: 
1
2
5
7
2
5
8
9
6
matrix 1 is: 
1 2 5 
7 2 5 
8 9 6 

Result Of Comparision Between Firest 2 Rows Is:
Element 1 of both rows is not equal
Element 2 of both rows is equal
Element 3 of both rows is equal
*/
