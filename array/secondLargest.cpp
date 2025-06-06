#include <bits/stdc++.h>
using namespace std;


int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        if(arr[i]<ssmallest && arr[i] != smallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int secondLargest(int arr[], int n){
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest: "<<secondLargest(arr,n)<<endl;
    cout<<"Second Smallest: "<<secondSmallest(arr,n);
}