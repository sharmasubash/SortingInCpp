#include <iostream>

using namespace std;

// Complexity of bubble sort improved

void ImprovedBubbleSort(int a[], int n){
    int pass, temp, swapped = 1;
    for (pass=n-1;pass>=0  && swapped ;pass--){
        swapped = 0;
        for (int i = 0;i <= pass -1;i++){
            if (a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swapped = 1;
            }
        }
    }
}

int main()
{
    int a[10] {23,1,34,67,30,22,45,89,45,67};
    ImprovedBubbleSort(a,10);
    for (int i = 0 ; i <10;i++){
        cout << a[i] << endl;
    }
    return 0;
}
