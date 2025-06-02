#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
         long long operations = 0;
        
        // For each A, count all B's to its right
        // For each B, count all C's to its right
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                // Count all B's to the right
                for (int j = i + 1; j < n; j++) {
                    if (s[j] == 'B') {
                        operations++;
                    }
                }
            } else if (s[i] == 'B') {
                // Count all C's to the right
                for (int j = i + 1; j < n; j++) {
                    if (s[j] == 'C') {
                        operations++;
                    }
                }
            }
        }
        
        cout << operations << endl;
    }
    
    return 0;
}