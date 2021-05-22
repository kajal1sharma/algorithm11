#include <iostream>

using namespace std;

int binocoeff(int n,int k,int **arr){
    
    if(arr[n][k] !=-1){
        return arr[n][k];
    }
    if(k==0){
        arr[n][k]=1;
        return arr[n][k];
    }
    if(k==n){
        arr[n][k]=1;
        return arr[n][k];
    }
    arr[n][k]=binocoeff(n-1,k-1,arr)+binocoeff(n-1,k,arr);
    return arr[n][k];
}
int main()
{
   
    int n=5,k=3;
    
    int **arr;
    //dynamic memory allocation
    
    //how many rows
    arr=new int*[n+1];
    //how many columns in each rows

for(int i=0;i<n+1;i++){
    arr[i]=new int[k+1];
}
    
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            arr[i][j]=-1;
        }
    }
    
    cout<<binocoeff(n,k,arr);
    return 0;
}
