#include<bits/stdc++.h>
using namespace std;

void PrintSqMatrix(int n, int mat[100][100]){
    cout<<"printing the matrix"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<mat[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintRecMatrix(int n,int m, int mat[100][100]){
    cout<<"printing the matrix"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<mat[row][col]<<" ";
        }
        cout<<endl;
    }
}

void rowSumSq(int n, int mat[100][100]){
    cout<<"Row sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            ans += mat[row][col]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void colSumSq(int n, int mat[100][100]){
    // 2D matrix
    cout<<"Col sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            ans += mat[col][row]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void rowSumRec(int n,int m, int mat[100][100]){
    cout<<"row sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            ans += mat[row][col]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void colSumRec(int n, int m,int mat[100][100]){
    // 2D matrix
    cout<<"Col sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            ans += mat[col][row]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void DiagonalPrimary(int n, int mat[100][100]){
    cout<<"Print diagonal"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row==col) cout<<mat[row][col];
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } 
}

void DiagonalSecondary(int n, int mat[100][100]){
    cout<<"Print diagonal"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row+col == n-1) cout<<mat[row][col];
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } 
}

void borderElements(int n, int m, int mat[100][100]){
    for(int row=0; row<n; row++){
        for(int col=0;col<m; col++){
            if(row==0 || col==0 || row==n-1 || col==m-1){
                cout<<mat[row][col]<<" ";
            }
            else
            cout<<"  ";
        }cout<<endl;
    }
}

void reverseRows(int n,int m, int mat[][100]){
    // complexity is O((m*n)/2)
    for(int row=0;row<n;row++){
        int start=0;int end=n;
        while(start<end){
                swap(mat[row][start++], mat[row][end--]);
            }
        }
}

void reverseCol(int n,int m, int mat[][100]){
     // complexity is O((m*n)/2)
     for(int col=0;col<m;col++){
        int start=0;int end=n-1;
        while(start<end){
                swap(mat[start++][col], mat[end--][col]);
            }
        }
}

void reverseSpiral(int n, int m, int mat[][100]){
   // reverse spiral in straight line
   // row1
   for(int col=0;col<m;col++) cout<<mat[0][col]<<" ";
   
   // col1
   for(int row=1;row<n;row++) cout<<mat[row][n-1]<<" ";
   
   // row2
   for(int col=m-2;col>=0;col--) cout<<mat[m-1][col]<<" ";
   
   // col2
   for(int row=n-2;row>0;row--) cout<<mat[row][0]<<" ";
   
}

int main(){
    // initializing a square matrix (Accepting the matrix)
    // int n;
    // cin>>n;
    // int mat[100][100];        
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cin>>mat[row][col];
    //     }
    // } 

    // initializing a rectangular matrix (Accepting the matrix)
    int n,m;
    cin>>n>>m;
    int mat[100][100];
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            cin>>mat[rows][col];
        }
    } 
PrintRecMatrix(n,m,mat);
cout<<endl;


    
    return 0;
}