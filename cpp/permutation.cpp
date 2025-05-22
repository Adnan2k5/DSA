#include <bits/stdc++.h>
using namespace std;



int main(){
    string t;
    cin>>t;
    int count = 0;

    //required to start from sorted order

    sort(t.begin(), t.end());
    
    do{
        cout << t << endl;
        count++;
    }
    while(next_permutation(t.begin(), t.end()));

    cout<<count<<endl;

}