//Mahi Shendre
//25070123504

#include<iostream>
using namespace std;

int main(){
    int r1,c1;
    int sum=0;
    cout<<"Enter number of rows for M1: ";
    cin>>r1;
    cout<<"Enter columns for M1: ";
    cin>>c1;
    int m[r1][c1];
    cout<<"Enter elements for a 3x3 matrix: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m[i][j];
        }
    }
   
    cout<<"Matrix 1 is: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<m[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
 
    cout<<"Addition of diagonal elements is: "<<endl;
    for (int i=0; i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i==j){
                sum+=m[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}

/* output
Enter number of rows for M1: 3
Enter columns for M1: 3
Enter elements for a 3x3 matrix:
1
2
3
4
5
6
7
8
9
Matrix 1 is:
1 2 3
4 5 6
7 8 9
Addition of diagonal elements is:
15
*/
