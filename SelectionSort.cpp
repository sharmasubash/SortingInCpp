/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void SelectionSort(int a[], int n){
    int i, j, min, temp;
    for (i=0;i<n-1;i++){
        // min = 0
        min=i;
        // First iteration with i = 0
        // {23,2,56,34,5};
        for (j=i+1;j<n;j++){
            // first iteration with j = 1
            // now j = 2
            
            if(a[j]<a[min]){
                // if a[1]<a[0] or 2 < 23 yes, then
                // if a[2]<a[0] or 56 < 2 no
                // if a[3]<a[0] or 34 < 2 no
                // if a[4]<a[0] or 2 < 5 no
                min = j;
                // min = 1
                
            }
            
        }
        // temp = a[1] = 2
            temp = a[min];
            // a[1] = a[0] = 23;
            a[min] = a[i];
            // a[0] = 2
            a[i] = temp;
            // now list is [2,23,56,34,5]
    }
    
}

int main()
{
    cout<<"Hello World\n";
    int a[5] {23,2,56,34,5};
    SelectionSort(a,5);
    for (int i = 0; i <5; i ++){
        cout << a[i] << endl;
    }
    return 0;
}
