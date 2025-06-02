#include <bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n <= 1) return n;
    return (fib(n-1) + fib(n-2));
}


int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i++) {
        if(i < n){
            sum += fib(i);
            cout<<fib(i)<<" + ";
        }
        else{
            sum += fib(i);
            cout<<fib(i)<<" = ";
        }
    }
    cout<<sum;
}