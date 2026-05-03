#include<iostream>
using namespace std;
int main() 
{
    int arr[100] = {10,20,40,50};
    int n = 4;
    int pos = 2;
    int value = 30;

    //shift element
    for(int i = n; i>pos; i--){
        arr[i] = arr[i-1];
    } 

//insert element
arr[pos]=value;
n++;

//print element
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

 return 0;   

}