#include <iostream>
using namespace std;

//Write a program to find Addition of Two Matrix using class and Function
class Add{
  public:
    void sum(int r, int c){
      int m1[r][c], m2[r][c], s[r][c];
      cout << "Enter the elements of 1st matrix:\n";
      for (int i = 0;i<r;i++ ) {
        for (int j = 0;j < c;j++ ) {
          cin>>m1[i][j];
        }
      }
      cout << "Enter the elements of 2nd matrix:\n";
      for (int i = 0;i<r;i++ ) {
        for (int j = 0;j<c;j++ ) {
          cin>>m2[i][j];
        }
      }
      cout<<"Sum of Two matrix is:\n";
      for (int i = 0;i<r;i++ ) {
        for (int j = 0;j<c;j++ ) {
          s[i][j]=m1[i][j]+m2[i][j];
          cout<<s[i][j]<<" ";
        }
        cout<<"\n";
      }
    }
};
int main(){
   int row, col;
   cout<<"Enter the number of rows: ";
   cin>>row;
   cout<<"Enter the number of column: ";
   cin>>col;
   Add obj;
   obj.sum(row, col);
   return 0;
}
