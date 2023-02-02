#include<iostream>
using namespace std;


void sort(int arr[], int n){
    int select;
    int mindex;
    int minval;

    for(select=0; select<n-1; select++){
        mindex = select;
        minval = arr[select];

        for(int i=select+1; i<n; i++){
            if(arr[i] < minval){
                minval = arr[i];
                mindex = i;
            }
        }
        arr[mindex] = arr[select];
        arr[select] = minval;
    }
}

int main()
{
    int arr[5] = {4,2,9,1,7};

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    sort(arr, 5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";


    return 0;
}