//Mahi Shendre
//25070123504

#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    cout<<"Enter number of rows for M1: ";
    cin>>r1;
    cout<<"Enter columns for M1: ";
    cin>>c1;
    cout<<"Enter number of rows for M2: ";
    cin>>r2;
    cout<<"Enter number of columns for M2: ";
    cin>>c2;
   
    int m1[r1][c1];
    int m2[r2][c2];
   
    if(r1!=r2 && c1!=c2){
        cout<<"Invalid rows or columns.";
    }
    else {
    cout<<"Enter elements for a 3x3 matrix-1: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }
   
    cout<<"Matrix 1 is: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<m1[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
   
    cout<<"Enter elements for a 3x3 matrix-2: "<<endl;
    for (int i=0 ; i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }
   
    cout<<"Matrix 2 is: "<<endl;
    for (int i=0 ; i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<m2[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
   
 
    cout<<"Addition of M1 and M2 is: "<<endl;
    for (int i=0; i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<< m1[i][j] + m2[i][j];
             cout<<" ";
        }
        cout<<endl;
    }
   

    return 0;
}
}



/* Output
Enter number of rows for M1: 3
Enter columns for M1: 3
Enter number of rows for M2: 3
Enter number of columns for M2: 3
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
Enter 9 elements for a 3x3 matrix-2:
1
2
3
4
5
6
7
8
9
Matrix 2 is:
1 2 3
4 5 6
7 8 9
Addition of M1 and M2 is:
2 4 6
8 10 12
14 16 18


output sample 2
Enter number of rows for M1: 3
Enter columns for M1: 4
Enter number of rows for M2: 4
Enter number of columns for M2: 3
Invalid rows or columns.
*/
