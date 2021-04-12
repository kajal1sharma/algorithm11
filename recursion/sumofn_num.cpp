#include<iostream>
using namespace std;

void add(int sum,int a,int n)
{
if(a>n){
    cout<<sum<<" ";
    return;
}
if(a<=n)
{
    sum=sum+a;
    add(sum,a+1,n);
// // cout<<sum;
}
}


int main()
{
int n,sum = 0;
cout<<"\nEnter value of n :";
cin>>n;
add(sum,0,n);
// for(int i=0;i<=n;i++){
//     sum=sum+i;
// }



}