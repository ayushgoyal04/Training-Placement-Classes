#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    int h = s/3600;
    s = s - h*3600;
    int m = s/60;
    s = s-m*60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    
}