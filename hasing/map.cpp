#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
     map<int, int> mpp;
    for(int i =  0; i<n;i++){
        cin>>arr[i];
          mpp[arr[i]]++;
    }

    int maxi = 0;
    int maxielem = 0;

    for(auto i : mpp){
        if(i.second > maxi){
            maxi = i.second;
            maxielem = i.first;
        }
    }
    cout<<maxielem;
    
}