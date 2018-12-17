/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

void Merge (int arr[], int start, int middle, int end)
{
    int rangeleft = middle - start + 1;
    int rangeright = end - middle;
    int left[rangeleft];
    int right[rangeright];
    for (int i = 0; i < rangeleft ; i++)
    {
        left[i] = arr[start + i-1];
    }
    for (int i = middle ; i < end ; i++)
    {
        right[i] = arr[middle + i];
    }
    int i = 1;
    int j = 1;
    for (int k = start; k < end ; k++)
    {
        if (left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else 
        {
            arr[k]=right[j];
            j++;
        }
    }
}

void mergeSort (int arr[], int start, int end)
{
    if (start < end)
    {
        int middle = ( start + end )/2 ;
        mergeSort(arr,start,middle);
        mergeSort(arr,middle+1, end);
        Merge(arr,start,middle,end);
    }
    
}

using namespace std;

int main()
{
    int a[] {23,32,12,45,2,67};
    int start = 0;
    int end = 5;
    mergeSort(a,start, end);
    for (int i = 0; i < end; i++)
    {
        
        cout << a[i] << "\n" << endl;
    }
    return 0;
}
