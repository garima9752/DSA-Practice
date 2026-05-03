#include<iostream>
using namespace std;

int maxElement(int arr[], int n){
    int maximum = arr[0];
    
    for(int i = 1; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}

int minElement(int arr[], int n){
    int minimum = arr[0];
    
    for(int i = 1; i < n; i++){
     if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    if(n <= 0){
        cout<<"Invalid input";
        return 0;
    }

    int arr[100] ;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum Element "<<maxElement(arr,n)<<endl;
    cout<<"Minimum Element "<<minElement(arr,n)<<endl;
    
    return 0;
}