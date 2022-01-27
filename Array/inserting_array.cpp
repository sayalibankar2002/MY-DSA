#include <iostream>
using namespace std;

//insreting of array
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
void Append(struct array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
void Insert(struct array *arr, int index, int x)
{   
    int x=0;
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
            arr->A[index] = x;
            arr->length++;
        }
    }
}

int main()
{
    struct array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

     
    Append(&arr1,10);
    Insert(&arr1,5,10);
    Display(arr1);

    return 0;
}