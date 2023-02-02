#include<iostream>
using namespace std;


int main()
{
    int arr[] = {11,3,6,8,15,1};
    int n = sizeof(arr)/sizeof(int);


    int i;
    int j;
    int temp;
    bool swapped;

    // algorithm
    for(i=0; i<n-1; i++){
        swapped = false;
        for(j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){               
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }



    cout << "\nSorted array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
