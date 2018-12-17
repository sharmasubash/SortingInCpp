/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void ShellSort(int a[], int n){
// consider an array 23,1,22,45,20;
    int i, j, p, temp;
    for ( int gap = n/2; gap > 0; gap=gap/2 ){
// First iteration, gap = 5/2 = 2;  
// second iteration, gap = 1;
        for (p = gap; p < n; p++){
            
            // 1st iteration
            // p = 2 
            // p = 3
            // p = 4
            
            // 2nd iteration
            // p = 1;
            temp = a[p];
            // 1st iteration
            // temp = a[2] ; or temp = 22;
            // temp = a[3] ; or temp = 45;
            // temp = a[4] ; or temp = 20;
            
            // 2nd iteration
            // temp = a[1];
            // temp = a[2];
            // temp = a[3];
            // temp = a[4];
            for (j=p; (j>=gap && temp < a[j-gap]) ; j=j-gap)
            // j=2, check if j is greater than or equal to gap, yes it is check
            // if temp = 22 is less than value of a[2-2] = a[0] = 23;
            // in layman terms check whether 22 < 23;if yes swap position
            
            // check if 45 is less than a[3-2]=a[1]=1; if not let it be
            // check if 20 is less than a[4-2]=a[2]=23, if it is swap postion
            
            // check if 1 is less than a[1-1] = a[0]=22, if yes, swap postion
            // check if 23 is less than a[2-1]=a[1]= 22, if yes, swap position
            // check if 45 is less than a[3-1] = a[2], no change, let it be as it is
            // check if 23 is less than a[4-1]=a[3], if yes swap position
                a[j]=a[j-gap];
            a[j] =temp;
                // when gap = 2;
                // 1 st inner for loop iteration produces 22,1,23,45,20
                // 2nd inner for loop iteration prodcues 22,1,23,45,20
                // 3rd inner for loop iteration produces 22,1,20,45,23
                
                // when gap = 1
                // 1st inner for loop iteration produces 1,22,20,45,23
                // 2nd inner for loop iteration prodcues 1,20,22,45,23
                // 3rd iteration no change 1,20,22,45,23
                // 4th iteration produces 1,20,22,23,45
                

                
        }
    }
}


int main()
{
    
    int a[] {1,23,34,21,65,22,56};
    ShellSort(a,7);
    int n=7;
    for (int i=0;i<n;i++){
        cout << a[i] << endl;
    }

    return 0;
}
