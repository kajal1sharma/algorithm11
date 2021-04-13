//head recurison
#include <iostream>

using namespace std;

void headrec(int n){
    if(n==0){
        return ;
    }
    else{
        //call is made before logic
        headrec(n-1);
        //logic
        int a=100;
        a=a+n;
        cout<<a<<" "<<n<<endl;
        
    }
}
int main()
{
    int n=3;
    headrec(n);
    return 0;
}
