#include<bits/stdc++.h>
using namespace std;
vector<int> n_bonacci(int n, int m){
    vector<int>v;
    for(int i=0;i<n-1;i++){
        v.push_back(0);
    }
    v.push_back(1);
    int sum=1;
    int start=0;
    int end=n;
    for(int i=n;i<m;i++){
        v.push_back(sum);
        sum-=v[start++];
        sum+=v[end++];
    }
    return v;
}

int main(){
    int n,m;
    cin>>n>>m;
    auto ans=n_bonacci(n,m);
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
}