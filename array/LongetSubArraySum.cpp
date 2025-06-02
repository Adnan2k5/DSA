#include <bits/stdc++.h>
using namespace std;


int mapMethod(int arr[], int n, int k){
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        long long rem = sum - k;
        if(preSum.find(rem) != preSum.end()){
            int len = i - preSum[rem];
            maxLen = max(maxLen,len);
        }
        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }
    }
    return maxLen;
}

int twoPointer(int arr[], int n, int k){
    int left = 0;
    int right = 0;
    long long sum = 0;
    int maxLen = 0;
    while(right < n){
        if(right < n) sum += arr[right];
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left + 1);
        }
        right++;
    }
    return maxLen;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    cout<<"Map Method: "<<mapMethod(arr,n,k)<<endl;
    cout<<"Two Pointer Approach: "<<twoPointer(arr,n,k)<<endl;
}