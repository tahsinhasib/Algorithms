#include<iostream>
using namespace std;



int arrMax(int arr[], int size){
    int max = arr[0];

    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        return max;
    }
}



int main()
{
    int arr[] = {1,13,3,5,4};
    int size = sizeof(arr)/sizeof(int);

    cout << "Maximum number is: " << arrMax(arr, size);

    return 0;
}