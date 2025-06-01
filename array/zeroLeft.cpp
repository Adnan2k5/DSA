#include <bits/stdc++.h>
using namespace std;


//brute force 

void putZero(int arr[], int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i] = temp[i];
    }
    for(int i=temp.size(); i<n;i++){
        arr[i] = 0;
    }
}


//Optimal Solution


void leftZero(int arr[], int n){
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i] !=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // putZero(arr,n);
    leftZero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}