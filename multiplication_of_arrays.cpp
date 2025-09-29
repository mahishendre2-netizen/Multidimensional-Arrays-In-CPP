//Mahi Shendre
//25070123504

#include<iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    
    cout << "Enter number of rows for M1: ";
    cin >> r1;
    cout << "Enter columns for M1: ";
    cin >> c1;
    cout << "Enter number of rows for M2: ";
    cin >> r2;
    cout << "Enter number of columns for M2: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Invalid matrix dimensions for multiplication." << endl;
        return 0;
    }

    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    // Input Matrix 1
    cout << "Enter elements of Matrix 1:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }
    //Output matrix 1
    cout<<"Matrix 1 is: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<m1[i][j];
             cout<<" ";
        }
        cout<<endl;
    }
    // Input Matrix 2
    cout << "Enter elements of Matrix 2:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }
    //Output matrix 2
    cout<<"Matrix 2 is: "<<endl;
    for (int i=0 ; i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<m2[i][j];
             cout<<" ";
        }
        cout<<endl;
    }

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display result
    cout << "Multiplication of M1 and M2 is:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* Output 
Enter number of rows for M1: 3
Enter columns for M1: 2
Enter number of rows for M2: 2
Enter number of columns for M2: 4
Enter elements of Matrix 1:
1
2
3
4
5
6
Matrix 1 is: 
1 2 
3 4 
5 6 
Enter elements of Matrix 2:
1
2
3
4
5
6
7
8
Matrix 2 is: 
1 2 3 4 
5 6 7 8 
Multiplication of M1 and M2 is:
11 14 17 20 
23 30 37 44 
35 46 57 68 
 */
