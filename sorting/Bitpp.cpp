#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int x = 0;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        switch (s[0])
        {
        case '+':
            ++x;
            break;
        case '-':
            --x;
            break;
        case 'X':
            if(s[1] == '+'){
                x++;
            }
            else{
                x--;
            }
        default:
            break;
        }
    }
    cout << x << endl;
}