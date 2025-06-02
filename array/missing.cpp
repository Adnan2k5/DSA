#include <bits/stdc++.h>
using namespace std;




int sumMethod(int arr[], int n){
    int sum = (n*(n+1))/2;
    int arrsum = 0;
    for(int i=0;i<n-1;i++){
        arrsum += arr[i];
    }
    return sum - arrsum;
}

int xorMethod(int arr[], int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<n-1;i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sum Method: "<<sumMethod(arr,n)<<endl;
    cout<<"Xor Method: "<<xorMethod(arr,n)<<endl;

}