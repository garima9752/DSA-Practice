//   Time complexity = O(n)
//   Space complexity = O(1) 
#include<iostream>
using namespace std;

void reverseElement(int arr[],int n) {
    for(int i=0; i<n/2; i++){
       swap(arr[i],arr[n-i-1]);
    }
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
    //Function call
    reverseElement(arr,n);

    //Print reverse array
    cout<<"Reverse Element: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}