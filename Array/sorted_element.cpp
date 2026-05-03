#include<iostream>
using namespace std;

void sortedArray(int arr[],int n) {
   for(int i=0; i<n-1; i++){
    if(arr[i] > arr[i+1]) {
        cout<<"Array is not sorted";
        return ;
    }
   }
      cout<<"Array is sorted";

}

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
     
    int arr[100] ;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sortedArray(arr,n);

    return 0;
}