#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; 
    while(T--){
        int x,y;
        cin>>x>>y;
        if((x%2==0 && y%2==0)||(x%2!=0 && y%2!=0)){
            cout<<"Janmansh"<<endl;
        }
        else{
            cout<<"Jay"<<endl;
        }

    }
}
