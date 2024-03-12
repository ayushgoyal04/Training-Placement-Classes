#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    vector<int> w(n,0);
    int q;
    cin>>q;
    long long int ans=0;
    while(q--){
        int i,j,x;
        cin>>i>>j>>x;
        v[i] = x;
        w[j] = x;

    }
    for(int i=1;i<v.size();i++){
            v[i] = v[i-1]+v[i];
        }
    for(int i=w.size()-2;i>=0;i--){
            w[i] = w[i+1]+w[i];
        }
    for(int i=0;i<n;i++){
            if(v[i]<w[i])
            cout<<v[i]<<" ";
            else if(v[i]==w[i] || v[i]>w[i]){
                cout<<w[i]<<" ";
            }
        }  
}