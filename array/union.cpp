#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m;

    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> uniArr;
    int i =0;
    int j =0;
    while(i <n && j<m){
        if(arr1[i] <= arr2[j]){
            if(uniArr.size() == 0 || uniArr.back() != arr1[i]){
                uniArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uniArr.size() == 0 || uniArr.back() != arr2[j]){
                uniArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<m){
        if(uniArr.size() == 0 || uniArr.back() != arr2[j]){
            uniArr.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n){
        if(uniArr.size() == 0 || uniArr.back() != arr1[i]){
            uniArr.push_back(arr1[i]);
        }
        i++;
    }

    for(int i : uniArr) cout<<i<<" ";

    
}