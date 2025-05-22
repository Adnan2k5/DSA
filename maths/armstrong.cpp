#include <bits/stdc++.h>
using namespace std;


void armstrong(int x){
    int temp = x;
    int arm = 0;
    while(temp > 0){
        arm = arm + pow(temp % 10, 3);
        temp = temp / 10;
    }
    if(arm == x){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}


int main(){
    int x;
    cin>>x;
    armstrong(x);
}