//Mahi Shendre
//25070123504

#include<iostream>
using namespace std;

int main(){
    int m1[3][3];
   
    cout<<"Enter 9 elements for a 3x3 matrix-1: "<<endl;
    for (int i=0 ; i<3;i++){
        for(int j=0;j<3;j++){
            cin>>m1[i][j];
        }
    }

cout<<"matrix 1 is: "<<endl;
    for (int i=0 ; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m1[i][j];
        }
        cout<<endl;
    }
return 0;
}

/* output
Enter 9 elements for a 3x3 matrix-1:
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
*/
