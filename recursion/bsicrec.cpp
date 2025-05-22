#include <bits/stdc++.h>
using namespace std;


template<typename T>
void print(T value) {
    cout << value << endl;
}

void printer(string s, int n){
    if(n == 0){
        return;
    }
    print(s);
    printer(s,n = n -1);
}


void linearprinter(int i,int n){
    if(i < 0 ){
        return;
    }
    print(i);
    linearprinter(i-1,n);
}

void backprinter(int i, int n){
    if(i < 1){
        return;
    }
    backprinter(i - 1, n);
    print(i);
}


int main(){
    string s;
    int n;
    int i;
    cin>>s>>n;
    // printer(s,n);
    // linearprinter(i=n, n);
    backprinter(n,n);
}