#include<iostream>

using namespace std;

int subsetproblem(int subset[], int sum,int n){
//columns->sum
//rows->set of values

int arr[n+1][sum+1];
arr[0][0] = 1;

for(int i = 0; i<=n ; i++){
for(int j = 0; j <= sum;j++){
if(i == 0 ){
arr[i][j] = 0;
}
else if(j == 0){
arr[i][j] = 0;
}
else if(subset[i-1]<=j){
int a = arr[i-1][j];
if(a == 1){
arr[i][j] = 1;
}
else{
int b = j - subset[i-1];

int c = arr[i-1][b];
if(c == 1 || b==0){
arr[i][j] = 1;

}
else{
arr[i][j] = 0;
}
}
}
else if(subset[i-1]>j){
arr[i][j]=arr[i-1][j];
}
}
}
for(int i = 0 ; i <= n ; i++){
for(int j = 0; j <= sum ; j++){
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}

return arr[n][sum];

}





int main()
{
int subset[] = {2,4,6,8,10,11};
int sum = 9;

int decision = subsetproblem(subset,sum,6);
cout<<decision;
return 0;
}