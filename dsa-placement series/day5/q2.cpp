#include <iostream>
using namespace std;

//Write a program to find union of two sorted array having time complexity O(n).
void printunion(int *arr1,int n,int *arr2,int m){
    int index1=0,index2=0;

    while (index1 < n && index2<m)
    {
        if(arr1[index1] <  arr2[index2])
            cout<<arr1[index1++]<<" ";
        else if(arr2[index2] < arr1[index1])
            cout<<arr2[index2++]<<" ";
        else
            cout<<arr2[index2++]<<" ";
            index1++;
            index2++;
        
    }
    while (index1 < n)
    {
        cout<<arr1[index1++]<<" ";

    }
    while (index2 < m)
    {
        cout<<arr2[index2++]<<" ";
    }
    
}
int main(){
    int array1[10] = {1, 3, 5, 6, 8, 15,18};
    int array2[6] = {2, 3, 5, 7, 9, 10}; 
 
    printunion(array1, 7, array2, 6);
 
    return 0;
}

