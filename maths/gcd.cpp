#include <bits/stdc++.h>
using namespace std;


int gcd(int x, int y){
    while(x > 0 && y > 0){
        if(x>y) x = x & y;
        else y = y % x;
    }
    if(x==0) return y;
    return x;
}


int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
}