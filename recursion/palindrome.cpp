#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(string s, int i, int n){
    if(i>=n/2) return true;

    if(s[i] != s[n-i-1]) return false;
    return isPalindrome(s, i+ 1, n);
}


int main(){
    string s;
    cin>>s;
    int n = s.size();
    int i = 0;
    isPalindrome(s,i, n) ? cout<<"Yes" : cout<<"No";
}