#include <bits/stdc++.h>
using namespace std;



int nsum(int n){
    if(n == 0){
        return 0;
    }
    return n + nsum(n - 1);
}


int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}


int main(){
    int n;
    cin>>n;
    cout<<nsum(n)<<endl;
    cout<<factorial(5)<<endl;
}