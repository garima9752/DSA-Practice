//Time complexity = O(n)
//Space compexity = O(1)
#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[],int n) {
    if(n<2){
    return -1;
    }
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second) {
            second = arr[i];
        }
    }
    if(second == INT_MIN){
    return -1;
    }
    return second;
}
int main() {
    int arr[] ={12,35,10,34,1};
    int n = 5;

    int result = secondLargest(arr,n);
    cout<<  result;

    return 0;
}