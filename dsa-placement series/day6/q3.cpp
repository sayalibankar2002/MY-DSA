#include <iostream>
using namespace std;

//Write a program to find difference of two unsorted arrays. ex.A={2,5,3,8} & B={10,4,6,11}; so A-B={2,5,3,8}
void diff(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    while (i<n && j<m)
    {
        if(arr1[i]< arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j] < arr1[i]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while (i < n) {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < m) {
        cout << arr2[j] << " ";
        j++;
    }
    
}

int main(){
    int arr1[] = { 1,2,3,4};
    int arr2[] = { 2,6,8,10 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);


    diff(arr1, arr2, n, m);
 
    return 0;
}