
//Write The Program To Display the Diagonal Matrix
// C++ Program to print the Diagonals of a Matrix
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
// Function to print the Principal Diagonal
void Diagonal(int mat[][MAX], int n)
{
	cout << "Principal Diagonal: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// Condition for principal diagonal
			if (i == j)
				cout << mat[i][j] << ", ";
		}
	}
	cout << endl;
}

// Driver code
int main()
{
	int n = 4;
	int a[][MAX] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 1, 2, 3, 4 },
					{ 5, 6, 7, 8 } };

	Diagonal(a, n);

	return 0;
}
