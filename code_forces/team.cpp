#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        int arr[3];
        int count_1 = 0;
        for(int i = 0; i < 3; i++){
            cin>>arr[i];
            if(arr[i] == 1){
                count_1++;
            }
        }
        if(count_1 >= 2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;

}