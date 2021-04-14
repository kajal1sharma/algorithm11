#include <iostream>
using namespace std;

void treerec(int n){
    if(n==0){
        return;
        
    }
    else{
        cout<<n<<" ";
        treerec(n-1);
        treerec(n-1);
    }
}

int main()
{
    int n=3;
    treerec(n);
    return 0;
}
