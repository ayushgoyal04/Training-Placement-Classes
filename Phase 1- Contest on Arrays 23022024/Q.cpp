#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag = 1;
            cout<<i<<endl;
        }

    }
    if(flag==0){
        cout<<"-1"<<endl;
    }
    
}