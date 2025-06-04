#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    }
    int count = 0;
    int thres = arr[b-1];
    for(int i = 0; i < a; i++){
        if(arr[i] >= thres && arr[i] > 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}