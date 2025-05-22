#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int count = 0;
    for(int i = 1; i*i<=x; i++){
        if(x % i == 0){
            count++;
            if((x/i) != i) count++;
        }
    }
    if(count == 2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}