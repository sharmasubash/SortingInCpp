#include <iostream>

using namespace std;

void InsertionSort(int a[], int n){
    int i, j, temp;
    for (i = 1;i<n;i++){
        temp = a[i];
        j=i;
        while(a[j-1]>temp && j>=1){
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
}

int main()
{
    int a[5] {23,56,21,78,43};
    InsertionSort(a,5);
    for (int i = 0 ; i < 5; i++){
        cout << a[i] << endl;
    }
    return 0;
}
