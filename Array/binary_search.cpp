#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key) {
    int start = 0;
    int end = n-1;

    int mid = (start+end)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main() {
    int arr[] = {3,7,11,15,19} ;
    int n = 5;
    int key = 7;

    int result = binarySearch(arr,n,key);

    if(result != -1) {
        cout<<"Element found at index: "<< result;
    }
    else {
        cout<<"Element not found";
    }

   return 0;

}