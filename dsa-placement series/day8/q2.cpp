#include <iostream>
using namespace std;
//Q2.Write The Program To Display Lower Triangular Row Major and Column Major Mapping
const int N = 5;
struct Matrix {
    int* A;
    int size;
};
void Set(struct Matrix* mat,  int i, int j, int x)
{
    if (i >= j)
        mat->A[i * (i - 1) / 2 + j - 1] = x;
}
int Get(struct Matrix mat, int i, int j)
{
    if (i >= j) {
        return mat.A[i * (i - 1) / 2 + j - 1];
    }
    else 
        return 0;
}
void Display(struct Matrix mat)
{
    int i,j;
    for (i = 1; i <= mat.size; i++) {
        for (j = 1; j <= mat.size; j++) {
 
            if (i >= j) {
                printf("%d ",
                       mat.A[i * (i - 1) / 2 + j - 1]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
 
// Function to generate an efficient matrix
struct Matrix createMat(int Mat[N][N])
{
    // Declare efficient Matrix
    struct Matrix mat;
    // Initialize the Matrix
    mat.size = N;
    mat.A = (int*)malloc(
        mat.size * (mat.size + 1) / 2
        * sizeof(int));
    int i, j;
 
    // Set the values in matrix
    for (i = 1; i <= mat.size; i++) {
 
        for (j = 1; j <= mat.size; j++) {
 
            Set(&mat, i, j, Mat[i - 1][j - 1]);
        }
    }
 
    // Return the matrix
    return mat;
}
int main()
{
    int Mat[5][5] = { { 1, 0, 0, 0, 0 },
                      { 1, 2, 0, 0, 0 },
                      { 1, 2, 3, 0, 0 },
                      { 1, 2, 3, 4, 0 },
                      { 1, 2, 3, 4, 5 } };
 
    struct Matrix mat = createMat(Mat);
    Display(mat);
 
    return 0;
}