#include<iostream>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    if(((a+b)>c) && ((a+c)> b) && ((c+b)> a)){
            cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
}