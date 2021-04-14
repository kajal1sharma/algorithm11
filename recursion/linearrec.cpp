//5 4 3 2 1 2 3 4 5
#include <iostream>

using namespace std;

void linearrecursion(int n){
    if(n==1){
        cout<<n<<" ";
        return ;
    }
    else{
        //logic
        cout<<n<<" ";
        
        //recursive call
        linearrecursion(n-1);
        
        //logic
        cout<<n<<" ";
    }
}
int main()
{
    int n=5;
    linearrecursion(n);
    return 0;
}
