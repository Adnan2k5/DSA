#include <bits/stdc++.h>
using namespace std;


int main(){
    int x;
    cin>>x;
    int rev = 0;
    int temp = x;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(x == rev){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}