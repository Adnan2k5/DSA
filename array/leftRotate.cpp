#include <bits/stdc++.h>
using namespace std;


// Rotation by One Place

void rotateOne(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}


// Rotate by D place

void leftRotate(int arr[], int n, int d){
    reverse(arr, arr+d+1);
    reverse(arr+d+1, arr+n);
    reverse(arr, arr+n);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // rotateOne(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    leftRotate(arr,n,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

