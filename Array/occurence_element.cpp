#include<iostream>
using namespace std;

int firstOccur(int arr[],int n,int target) {
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start+(end-start)/2);
    while(start <= end) {
        if(arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        }
        else if(target > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = (start+(end-start)/2);
    }
    return ans; 
}
int lastOccur(int arr[],int n,int target) {
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start+(end-start)/2);
    while(start <= end) {
        if(arr[mid] == target) {
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = (start+(end-start)/2);
    }
    return ans; 
}
int main() {
    int arr[] = {5,7,7,8,8,10};
    int n = 6;

    int target = 8;

    cout<<"first position of 8 is: "<<firstOccur(arr,n,target)<<endl;
    cout<<"last position of 8 is: "<<lastOccur(arr,n,target);
    return 0;

}