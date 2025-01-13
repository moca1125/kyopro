#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long ans=0;

    //  for (int j = 0; j < n; j++) {
    //     long long flag = 2 * a[j]; 
    //     int left = j + 1, right = n;
    //     while (left < right) {
    //         int mid = (left + right) / 2;
    //         if (a[mid] >= flag) {
    //             right = mid;
    //         } else {
    //             left = mid + 1;
    //         }
    //     }
    //     ans += n - left;
    // }

    // for(int j=0;j<n;j++){
    //     if(a[j]*2<=a[n-1]){
    //         cout<<a[j];
    //         ans++;
    //     }else{
    //         break;
    //     }
    // }

    for(int i=0;i<n;i++){
        int r=lower_bound(a.begin(),a.begin()+i,a[i]/2)-a.begin();
        ans+=r;
        cout<<i<<" "<<r<<endl;
    }




    cout<<ans<<endl;
    return 0;
}