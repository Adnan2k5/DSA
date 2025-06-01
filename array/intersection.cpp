#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int i=0;
    int j=0;
    vector<int> intArr;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            intArr.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(int i : intArr) cout<<i<<" ";

}