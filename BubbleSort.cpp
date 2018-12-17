#include <iostream>

using namespace std;

// a[5] = [23,2,4,1,7];
void BubbleSort(int a[],int n){
// input passed BubbleSort(a[5],5)
    for (int pass=n-1;pass>=0;pass--){
        // 1st iteration starts with 4
//      (pass = 4; 4 >0, pass = 4-1)        
        for (int i=0;i<=pass-1;i++){
            //here pass = 4, i is iterator
            // second iteration with pass = 3
            // third iteration with pass = 2
            // fourth and last iteration with pass = 1
            if( a[i] > a[i+1]){
                // ------ pass 4 ----------------
                // i's 1st iteration a[0]>a[1] or 23 > 2 No ( yes , swap positions)
                // i's 2nd iteration a[1]>a[2] or 23 > 4 (yes, swap positions)
                // i's 3rd iteration a[2]>a[3] or 23 > 1 (yes, swap positions)
                // i's 4th iteration a[3]>a[4] or 23 > 7 (yes, swap positions)
                // ------ pass 3 -----------------
                // i's 1st iteration a[0]>a[1] or 2>4 (No, No Changes)
                // i's 2nd iteration a[1]>a[2] or 4>1 (yes, positions)
                // i's 3rd iteration a[2]>a[3] or 4>7 (No, No Changes)
                // ------ pass 2 -----------------
                // i's 1st iteration a[0]>a[1] or 2>1 (yes, swap positions)
                //i's 2nd iteration a[1]>a[2] or 2>4 (No, No Changes)
                // --------pass 1-----------------
                // i's 1st iteration a[0]>a[1] or 1>2 (No, No Changes)
                // -------- end ------------------
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                // --------pass 4----------------
                // list after first iteration  of i a[5]=[2,23,4,1,7]
                // list after second iteration of i a[5]=[2,4,23,1,7]
                // list after third iteration of i a[5]=[2,4,1,23,7]
                // list after fourth iteration of i a[5]=[2,4,1,7,23]
                // --------pass 3----------------
                // list after first iteration of i a[5]=[2,4,1,7,23]
                // list after second iteration of i a[5]=[2,1,4,7,23]
                // list after third iteration of i a[5]=[2,1,4,7,23]
                // --------pass 2-----------------
                // list after 1st iteration of i a[5]=[1,2,4,7,23]
                // list after 2nd iteration of i a[5]=[1,2,4,7,23]
                // --------pass ------------------
                // list after 1st iteration of i a[5]=[1,2,4,7,23]
        }
        }
    }
}

int main()
{
    cout<<"Hello World\n";
    int a[5] {23,2,3,4,5};
    BubbleSort(a, 5);
    for (int i = 0; i <5 ; i++){
        cout << a[i] << endl;
    }