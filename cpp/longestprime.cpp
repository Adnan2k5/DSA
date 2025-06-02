#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * 1LL * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumLargestThreePrimes(const string& s) {
    set<int> primes;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n - i; ++len) {
            string sub = s.substr(i, len);
            if (sub.size() > 1 && sub[0] == '0') continue;
            int num = stoi(sub);
            if (isPrime(num)) {
                primes.insert(num);
            }
        }
    }
    vector<int> primeList(primes.begin(), primes.end());
    sort(primeList.rbegin(), primeList.rend());
    int sum = 0;
    for (int i = 0; i < min(3, (int)primeList.size()); ++i) {
        sum += primeList[i];
    }
    return sum;
}

int main() {
    string s;
    cin >> s;
    cout << sumLargestThreePrimes(s) << endl;
    return 0;
}