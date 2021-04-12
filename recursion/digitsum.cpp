#include<iostream>
using namespace std;


void addigit(int n ,int sum){
    
    if(n==0){
        cout<<sum;
        return ;
    }
    else{
        int r=n%10;
        sum=sum+r;
        n=n/10;
        
        addigit(n,sum);
    }
    
}

int main()
{
int n=112112;
//1+2+3+4+5
int sum=0;
addigit(n,sum);
// while(n!=0){
//     int r=n%10;
//     sum=sum+r;
//     n=n/10;
// }

// cout<<sum;
return 0;
}