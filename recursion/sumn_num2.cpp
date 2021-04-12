#include<iostream>
using namespace std;


int add(int a,int n){
    
    if(n==a){
        return n;
    }
    
    int sum=add(a+1,n);
    sum=sum+a;
    return sum;
    
}


int main()
{
int n;
cout<<"\nEnter value of n :";
cin>>n;
int sum=add(0,n);
cout<<sum;
return 0;
}