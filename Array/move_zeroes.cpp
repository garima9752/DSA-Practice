#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0;

    //Step 1: move non zero element
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
         arr[j] = arr[i];
         j++;
        } 
    }

    //Step 2: fill remaining place with zero
     for(int i = j; i < n; i++){
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {4,0,5,0,3};
    int n = 5;

    moveZeroes(arr,n);

    //print
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}