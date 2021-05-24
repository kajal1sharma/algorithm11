#include<iostream>

using namespace std;

int permutation(int n,int k,int **arr){
if(arr[n][k] !=-1){
return arr[n][k];
}

if(k==1){
arr[n][k]=n;
return arr[n][k];
}
if(n<k){
arr[n][k]=0;
return arr[n][k];
}
arr[n][k] = permutation(n-1,k,arr) + k*permutation(n-1,k-1,arr);
return arr[n][k];
}

int main()
{
int n=5 ,k=3 ;
int **arr;
arr = new int*[n+1];

for(int i =0 ; i<n+1; i++){
arr[i] = new int[k+1];
}

for(int i = 0; i<=n ; i++){
for(int j = 0 ; j<=k;j++){
arr[i][j] =-1;
}
}
cout<<permutation(n,k,arr);
return 0;
}