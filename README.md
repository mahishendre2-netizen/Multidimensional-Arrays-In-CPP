# Multidimensional-Arrays-In-CPP
# Aim
To study and implement different multi-dimensional arrays/ matrix operations in C++.

#Tools
Visual Studio Code

# Theory
A multi-dimensional array can be defined as an array that has more than one dimension. Having more than one dimension means that it can grow in multiple directions. Some popular multidimensional arrays include 2D arrays which grows in two dimensions, and 3D arrays which grows in three dimensions.

# Algorithms
Addition of 2 matrices
Start.

Input number of rows and columns for Matrix 1 → r1, c1.

Input number of rows and columns for Matrix 2 → r2, c2.

Check if r1 != r2 or c1 != c2:

If true → print “Invalid rows or columns.” and exit.

Declare 2D arrays m1[r1][c1] and m2[r2][c2].

Input elements of Matrix 1.

Display Matrix 1.

Input elements of Matrix 2.

Display Matrix 2.

corresponding elements of both matrices and print the result.

End.

# Multiplication of 2 matrices
Start

Input Dimensions

-Get the number of rows (r1) and columns (c1) for the first matrix (M1).

-Get the number of rows (r2) and columns (c2) for the second matrix (M2).

Validate Dimensions
-Check if the number of columns in M1 (c1) is equal to the number of rows in M2 (r2).

-If c1 is not equal to r2, display an error message and terminate the algorithm, as multiplication is not possible.

Input Matrix Elements
-Read the elements for the r1 x c1 matrix M1.

-Read the elements for the r2 x c2 matrix M2.

#Initialize Result Matrix
-Create a result matrix of size r1 x c2.

-Initialize all elements of the result matrix to 0.

# Perform Multiplication
-Use three nested loops to calculate the product:

--For each row i from 0 to r1-1:

--For each column j from 0 to c2-1:

--For each index k from 0 to c1-1:

-Calculate: result[i][j] = result[i][j] + (m1[i][k] * m2[k][j])

# Output Result
-Display the elements of the final result matrix.

End

# Adding diagonal elements of a matrix
Start

Input number of rows r1 and columns c1.

Declare matrix m[r1][c1].

Input all elements of the matrix.

# Display the matrix.

Initialize sum = 0.

For each row i from 0 to r1 - 1:

Add the element at the main diagonal m[i][i] to sum.

Display the value of sum.

End

# Transpose of a matrix
Start

To input Dimensions prompt the user to enter the number of rows and columns.

Store these values in variables rows and cols.

Declare Matrices->Create an original matrix, m1, with dimensions rows x cols. And create a transpose matrix, t1, with swapped dimensions cols x rows.

Prompt the user to enter the elements for the matrix.

Using nested for loops, read each element and store it in the original matrix m1.

Display the Original Matrix and print the contents of m1 to the screen for verification.

For computing the Transpose iterate through each element of the original matrix m1 using nested loops (row i, column j).

For each element m1[i][j], assign its value to the transposed position in the second matrix: t1[j][i] = m1[i][j].

Display the Transpose Matrix

Print the contents of the newly computed transpose matrix t1.

End

# Conclusion
We learnt how to perform some basic mathematical operations on 1 or more matrices.

(Content reference from : https://www.geeksforgeeks.org/cpp/cpp-multidimensional-array/)
