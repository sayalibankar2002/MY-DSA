#include <iostream>
using namespace std;

//deleting array
struct array
{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr)
{
    int i;
    cout << "\nElements are\n"
         << endl;
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}
int Delete(struct array *arr, int index)
{
    int x = 0;
    if (index > 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = arr->length; i > index; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;

        return x;
    }
    return 0;
}
int main(){
    struct array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

    printf("%d",Delete(&arr1,0));   
    
    Display(arr1);

}