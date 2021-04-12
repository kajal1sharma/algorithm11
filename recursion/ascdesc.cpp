
#include <iostream>

using namespace std;

void decsendingorder(int n){
    if(n>0){
    cout<<n<<" ";
    decsendingorder(n-1);
    }
}

void ascendingorder(int a,int n){
    if(a<=n){
      cout<<a<<" ";
      ascendingorder(a+1,n);
    }
}
int main()
{
    int n;
    cin>>n;
    
    decsendingorder(n);
    cout<<endl;
    //descending order
    // for(int i=n;i>=1;i--){
    //     cout<<i<<" ";
    // }
    
    ascendingorder(1,n);
    // //ascending order
    // for(int i=1;i<=n;i++){
    //     cout<<i<< " ";
    // }
    // cout<<endl;
    
    
    
    return 0;
}
