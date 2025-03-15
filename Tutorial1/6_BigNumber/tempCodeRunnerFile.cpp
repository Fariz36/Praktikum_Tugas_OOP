#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int arr[n+10];
    int count=0;
    int pos[n+10];
    int arb[n+10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arb[i] = arr[i];
        pos[arr[i]] = i;
    }
    
    sort( arb, arb+n);
    for(int i=0; i<n; i++){
        if (arr[i]!= arb[i]){
            cout<< i+1 <<" "<< pos[i] <<endl;
            arr[i] = i+1;
            arr[pos[i]] = pos[i]+1;
            count++;
            }
        }
    if(count==0){
        cout<< 0 <<endl;
    }
}
