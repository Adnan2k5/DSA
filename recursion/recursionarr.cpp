#include <bits/stdc++.h>
using namespace std;



void swap(int &x, int &y ){
    int temp = x;
    x = y;
    y = temp;
}




void revarray(int start, int n, int arr[] ) {
    if(start >= n/2){
        return;
    }
    swap(arr[start], arr[n-start-1]);
    revarray(start + 1, n, arr);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(auto i = 0; i < n; i++) cin >> arr[i];
    revarray(0, n, arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}